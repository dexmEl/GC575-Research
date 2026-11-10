#!/usr/bin/env python3
"""Offline USBPcap PCAP/PCAPNG decoding and control IRP correlation. No device I/O.
Raw bytes and original frame ordinals survive filtering; UVC labels are candidates
unless descriptors establish a VideoControl Extension Unit on that interface.
"""
import argparse
import hashlib
import json
import pathlib
import struct


def records(raw):
    """Yield capture records. PCAPNG sections have independent interface tables."""
    magic = raw[:4]
    formats = {b'\xd4\xc3\xb2\xa1': ('<', 10**6), b'\xa1\xb2\xc3\xd4': ('>', 10**6),
               b'\x4d\x3c\xb2\xa1': ('<', 10**9), b'\xa1\xb2\x3c\x4d': ('>', 10**9)}
    if magic in formats:
        if len(raw) < 24:
            raise ValueError('truncated global header')
        endian, scale = formats[magic]
        link = struct.unpack_from(endian + 'I', raw, 20)[0]
        if link != 249:
            raise ValueError('requires LINKTYPE_USBPCAP=249')
        p = 24
        index = 0
        while p < len(raw):
            if p + 16 > len(raw):
                raise ValueError('truncated packet header')
            sec, frac, caplen, original = struct.unpack_from(endian + '4I', raw, p)
            p += 16
            if p + caplen > len(raw):
                raise ValueError('truncated packet')
            index += 1
            yield dict(index=index, time_unix=sec + frac / scale,
                       timestamp_ticks=sec * scale + frac, timestamp_units_per_second=scale,
                       capture_section=0, capture_interface=0, original_length=original,
                       data=raw[p:p + caplen])
            p += caplen
        return
    if magic != b'\x0a\x0d\x0d\x0a':
        raise ValueError('requires classic pcap or pcapng')
    p = 0
    endian = None
    interfaces = []
    section = -1
    index = 0
    while p < len(raw):
        if p + 12 > len(raw):
            raise ValueError('truncated pcapng block')
        if raw[p:p + 4] == b'\x0a\x0d\x0d\x0a':
            bom = raw[p + 8:p + 12]
            if bom not in (b'\x4d\x3c\x2b\x1a', b'\x1a\x2b\x3c\x4d'):
                raise ValueError('invalid section byte order')
            endian = '<' if bom[0] == 0x4d else '>'
            interfaces = []
            section += 1
        if endian is None:
            raise ValueError('pcapng requires section header')
        typ, length = struct.unpack_from(endian + 'II', raw, p)
        if length < 12 or length % 4 or p + length > len(raw):
            raise ValueError('invalid pcapng block length')
        if struct.unpack_from(endian + 'I', raw, p + length - 4)[0] != length:
            raise ValueError('pcapng trailing length mismatch')
        body = raw[p + 8:p + length - 4]
        if typ == 0x0a0d0d0a and length < 28:
            raise ValueError('short section header')
        if typ == 1:
            if len(body) < 8:
                raise ValueError('short interface description')
            link, _, snap = struct.unpack_from(endian + 'HHI', body)
            scale, offset = 10**6, 0
            q = 8
            while q + 4 <= len(body):
                code, n = struct.unpack_from(endian + 'HH', body, q)
                q += 4
                if q + n > len(body):
                    raise ValueError('truncated interface option')
                value = body[q:q + n]
                if code == 0:
                    break
                if code == 9 and n == 1:
                    scale = (2 if value[0] & 128 else 10) ** (value[0] & 127)
                if code == 14 and n == 8:
                    offset = struct.unpack(endian + 'q', value)[0]
                q += (n + 3) & ~3
            interfaces.append((link, snap, scale, offset))
        elif typ in (6, 3):
            index += 1  # preserve ordinals even for non-USB interfaces
            if typ == 6:
                if len(body) < 20:
                    raise ValueError('short enhanced packet block')
                interface, hi, lo, caplen, original = struct.unpack_from(endian + '5I', body)
                start = 20
            else:
                if len(body) < 4 or not interfaces:
                    raise ValueError('invalid simple packet block')
                interface = 0
                original = struct.unpack_from(endian + 'I', body)[0]
                caplen = min(original, interfaces[0][1] or original)
                start = 4
            if interface >= len(interfaces):
                raise ValueError('unknown pcapng capture interface')
            link, snap, scale, offset = interfaces[interface]
            if start + caplen > len(body):
                raise ValueError('truncated pcapng packet data')
            if link == 249:
                ticks = (hi << 32) | lo if typ == 6 else None
                yield dict(index=index, time_unix=offset + ticks / scale if ticks is not None else None,
                           timestamp_ticks=ticks, timestamp_units_per_second=scale,
                           capture_section=section, capture_interface=interface, original_length=original,
                           data=body[start:start + caplen])
        elif typ == 2:
            raise ValueError('obsolete pcapng Packet Block unsupported; convert to EPB')
        p += length


def setup_fields(payload):
    rt, rq, value, ix, n = struct.unpack_from('<BBHHH', payload)
    kind = ('standard', 'class', 'vendor', 'reserved')[(rt >> 5) & 3]
    recipient = {0: 'device', 1: 'interface', 2: 'endpoint', 3: 'other'}.get(rt & 31, 'reserved')
    row = dict(bmRequestType=hex(rt), bRequest=hex(rq), wValue=hex(value), wIndex=hex(ix), wLength=n,
               direction='in' if rt & 128 else 'out', type=kind, recipient=recipient,
               interface=ix & 255 if recipient == 'interface' else None,
               entity_id=ix >> 8 if recipient == 'interface' else None,
               selector=value >> 8,
               uvc_candidate=kind == 'class' and recipient == 'interface' and rq in (1, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87))
    if row['uvc_candidate']:
        row['uvc_request_candidate'] = {1: 'SET_CUR', 0x81: 'GET_CUR', 0x82: 'GET_MIN', 0x83: 'GET_MAX',
                                         0x84: 'GET_RES', 0x85: 'GET_LEN', 0x86: 'GET_INFO', 0x87: 'GET_DEF'}[rq]
    return row


def packets(raw):
    for record in records(raw):
        b = record.pop('data')
        if len(b) < 27:
            raise ValueError('truncated USBPcap header')
        h, irp, status, func, info, bus, dev, ep, transfer, length = struct.unpack_from('<HQIHBHHBBI', b)
        if not 27 <= h <= len(b):
            raise ValueError('invalid USBPcap header length')
        payload = b[h:h + length]
        row = dict(record, irp_id=hex(irp), status=hex(status), urb_function=hex(func), info=info,
                   irp_direction='completion' if info & 1 else 'submission', bus=bus, device=dev,
                   endpoint=hex(ep), endpoint_number=ep & 15,
                   endpoint_direction='in' if ep & 128 else 'out', transfer_type=transfer,
                   declared_data_length=length, captured_data_length=len(payload),
                   capture_truncated=len(b) < record['original_length'] or len(payload) < length,
                   header_hex=b[:h].hex(), payload_hex=payload.hex(), raw_packet_hex=b.hex())
        if h + length < len(b):
            row['trailing_bytes_hex'] = b[h + length:].hex()
        if transfer == 2:
            if h < 28:
                raise ValueError('control packet missing stage')
            row['control_stage'] = b[27]
            # COMPLETE(3) contains IN data, not another setup packet.
            if b[27] == 0 and len(payload) >= 8:
                row['setup_hex'] = payload[:8].hex()
                row['setup'] = setup_fields(payload)
        yield row


def correlate(rows):
    """Group control IRPs; never silently join unmatched/reused IDs or USB requests."""
    pending = {}
    out = []
    def finish(tx, reason):
        tx['end_reason'] = reason
        tx['complete'] = (tx.get('setup') is not None and tx['completion_seen']
                          and not tx['capture_truncated'] and reason == 'completion')
        tx['successful'] = tx['complete'] and tx['completion_status'] == '0x0'
        tx['request_data_hex'] = ''.join(tx.pop('_out'))
        tx['response_data_hex'] = ''.join(tx.pop('_in'))
        if tx.get('setup'):
            n = tx['setup']['wLength']
            data = tx['response_data_hex'] if tx['setup']['direction'] == 'in' else tx['request_data_hex']
            tx['data_length'] = len(data) // 2
            tx['short_transfer'] = len(data) // 2 < n
            tx['length_exceeds_setup'] = len(data) // 2 > n
        out.append(tx)
    for row in rows:
        if row['transfer_type'] != 2:
            continue
        key = (row.get('capture_section', 0), row.get('capture_interface', 0), row['bus'], row['device'], row['irp_id'])
        stage = row.get('control_stage')
        if row.get('setup') and key in pending:
            finish(pending.pop(key), 'irp_reused_before_completion')
        if key not in pending:
            pending[key] = dict(bus=row['bus'], device=row['device'], irp_id=row['irp_id'],
                                capture_section=key[0], capture_interface=key[1], setup=None,
                                packets=[], statuses=[], start_time=row['time_unix'], end_time=row['time_unix'],
                                completion_seen=False, completion_status=None, capture_truncated=False,
                                _out=[], _in=[])
        tx = pending[key]
        tx['packets'].append(row)  # retain all bytes, timestamps and statuses
        tx['statuses'].append(row['status'])
        tx['capture_truncated'] |= row['capture_truncated']
        tx['end_time'] = row['time_unix']
        payload = bytes.fromhex(row['payload_hex'])
        if row.get('setup'):
            tx['setup'] = row['setup']
            tx['setup_hex'] = row['setup_hex']
            if row['setup']['direction'] == 'out':
                tx['_out'].append(payload[8:].hex())
        elif stage in (1, 3):
            if tx.get('setup'):
                tx['_in' if tx['setup']['direction'] == 'in' else '_out'].append(payload.hex())
            else:
                tx.setdefault('unattributed_payloads_hex', []).append(payload.hex())
        if row['info'] & 1 and stage in (2, 3):
            tx['completion_seen'] = True
            tx['completion_status'] = row['status']
            finish(pending.pop(key), 'completion')
    for tx in pending.values():
        finish(tx, 'capture_ended_before_completion')
    return sorted(out, key=lambda t: t['packets'][0]['index'])


def descriptors(data):
    """Decode only complete descriptor records, retaining unknown descriptors."""
    result = []
    p = 0
    interface = None
    while p < len(data):
        if p + 2 > len(data) or data[p] < 2 or p + data[p] > len(data):
            result.append(dict(offset=p, malformed_or_truncated=True, raw_hex=data[p:].hex()))
            break
        b = data[p:p + data[p]]
        kind = b[1]
        row = dict(offset=p, type=kind, raw_hex=b.hex())
        if kind == 1 and len(b) >= 18:
            row.update(vid=hex(int.from_bytes(b[8:10], 'little')), pid=hex(int.from_bytes(b[10:12], 'little')),
                       bcdUSB=hex(int.from_bytes(b[2:4], 'little')), bcdDevice=hex(int.from_bytes(b[12:14], 'little')))
        elif kind in (2, 7) and len(b) >= 9:
            row.update(configuration=b[5], interface_count=b[4], total_length=int.from_bytes(b[2:4], 'little'))
        elif kind == 4 and len(b) >= 9:
            interface = dict(interface=b[2], alternate=b[3], interface_class=b[5], interface_subclass=b[6], interface_protocol=b[7])
            row.update(interface)
        elif kind == 5 and len(b) >= 7:
            row.update(endpoint=hex(b[2]), endpoint_number=b[2] & 15, direction='in' if b[2] & 128 else 'out',
                       attributes=b[3], max_packet_size=int.from_bytes(b[4:6], 'little'), interface=interface)
        elif kind == 0x24 and len(b) >= 24 and b[2] == 6 and interface and interface['interface_class'] == 14 and interface['interface_subclass'] == 1:
            import uuid
            pins = b[21]
            control_offset = 22 + pins
            if control_offset >= len(b) or 24 + pins + b[control_offset] > len(b):
                row['malformed_or_truncated'] = True
            else:
                control_size = b[control_offset]
                row.update(kind='uvc_extension_unit', entity_id=b[3], guid=str(uuid.UUID(bytes_le=b[4:20])),
                           num_controls=b[20], source_ids=list(b[22:22 + pins]), control_size=control_size,
                           controls_hex=b[control_offset + 1:control_offset + 1 + control_size].hex(), interface=interface)
        result.append(row)
        p += len(b)
    return result


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('capture', type=pathlib.Path)
    p.add_argument('--device', type=int)
    p.add_argument('--bus', type=int)
    p.add_argument('--transactions', action='store_true')
    p.add_argument('--control-only', action='store_true')
    a = p.parse_args()
    raw = a.capture.read_bytes()
    print(json.dumps(dict(type='source', schema=2, path=str(a.capture.resolve()), sha256=hashlib.sha256(raw).hexdigest(),
                          limitations='Offline USBPcap records only; class-interface labels are UVC candidates, not verified XU identities.')))
    rows = (r for r in packets(raw) if (a.device is None or r['device'] == a.device)
            and (a.bus is None or r['bus'] == a.bus) and (not a.control_only or r['transfer_type'] == 2))
    for row in correlate(rows) if a.transactions else rows:
        if a.transactions and row.get('setup') and row['setup']['type'] == 'standard' and row['setup']['bRequest'] == '0x6' and row['successful']:
            row['descriptors'] = descriptors(bytes.fromhex(row['response_data_hex']))
        print(json.dumps(row))

if __name__ == '__main__':
    main()
