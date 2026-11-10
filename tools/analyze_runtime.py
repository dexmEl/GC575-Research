#!/usr/bin/env python3
"""Offline control-transaction report and idle/query comparison. No send functionality."""
import argparse
from collections import Counter
import hashlib
import json
import math
import pathlib
from parse_usbpcap import packets, correlate, descriptors
from realtek_frame import decode

AT_NAMES = {0x23: 'AT_Get_System_Info', 0x35: 'AT_Get_Current_Input_Source',
            0x36: 'AT_HdmiRX_Get_Cable_Connect', 0x37: 'AT_HdmiRX_GetRawTimingInfo',
            0x38: 'AT_HdmiRX_Get_VideoStable', 0x44: 'AT_UVC_Get_Output_Timing',
            0x45: 'AT_UVC_Get_VideoFormat', 0x67: 'internal capability gate',
            0x77: 'AT_Get_Customer_Ver', 0x86: 'AT_Get_HdmiRX_Video_Vfreq'}


def candidates(blob):
    """Look inside payloads; checksum-valid matches remain hypotheses, not dispatch proof."""
    out = []
    for i, marker in enumerate(blob):
        tail = blob[i:]
        if marker in (0xa1, 0xa2) and len(tail) >= 9:
            length = ((((tail[1] & 127) << 8) | tail[2]) - 1 if tail[1] & 128 else (tail[1] - 2) & 127)
            size = 4 + length + 1
            if 4 <= length <= 0x7ffe and size <= len(tail):
                frame = tail[:size]
                try:
                    value = decode(frame)
                except ValueError:
                    continue
                command = int.from_bytes(frame[4:8], 'little')
                out.append(dict(offset=i, kind='conditional_RTD2801_AT_request_candidate', frame_hex=frame.hex(),
                                command=hex(command), sdk_name_candidate=AT_NAMES.get(command), decoded=value,
                                limitation='Matching bytes/checksum do not prove selected class, dispatch or safety.'))
        if marker == 0xd0 and len(tail) >= 8 and tail[1] == 5 and tail[6] == 1 and sum(tail[:8]) % 256 == 0:
            out.append(dict(offset=i, kind='conditional_RBUS_read_frame_candidate', frame_hex=tail[:8].hex(),
                            normalized_address=hex(int.from_bytes(tail[2:6], 'big')),
                            limitation='Not proof of RBUS execution; frame may be wrapped or coincidental. Never replay.'))
    return out


def signature(tx):
    # Device/bus comparison is operator-selected, not included so renumbered captures
    # can be compared without claiming physical-device identity.
    return json.dumps(dict(setup_hex=tx.get('setup_hex'), request_data_hex=tx['request_data_hex'],
                           response_data_hex=tx['response_data_hex'], completion_status=tx['completion_status']), sort_keys=True)


def analyze(path, device=None, bus=None, time_range=None):
    raw = path.read_bytes()
    rows = list(packets(raw))
    selected = [r for r in rows if (device is None or r['device'] == device) and (bus is None or r['bus'] == bus)
                and (time_range is None or r['time_unix'] is not None and time_range['start_unix'] <= r['time_unix'] <= time_range['end_unix'])]
    txs = correlate(selected)
    desc = []
    for tx in txs:
        setup = tx.get('setup')
        if setup and setup['direction'] == 'in' and setup['type'] == 'standard' and setup['bRequest'] == '0x6' and tx['successful']:
            dtype = int(setup['wValue'], 16) >> 8
            # Strings and other descriptor payloads must not be mistaken for config trees.
            tx['descriptors'] = descriptors(bytes.fromhex(tx['response_data_hex'])) if dtype in (1, 2, 7) else []
            desc.append(dict(bus=tx['bus'], device=tx['device'], capture_section=tx['capture_section'],
                             capture_interface=tx['capture_interface'], packet=tx['packets'][0]['index'],
                             descriptor_type=dtype, completion_packet=tx['packets'][-1]['index'], records=tx['descriptors']))
        if setup and tx['successful'] and setup['type'] == 'standard':
            request = int(setup['bRequest'], 16)
            value = int(setup['wValue'], 16)
            data = bytes.fromhex(tx['response_data_hex'])
            if request == 9 and setup['recipient'] == 'device' and setup['direction'] == 'out':
                tx['configuration_observation'] = dict(operation='SET_CONFIGURATION', value=value & 255)
            elif request == 8 and setup['recipient'] == 'device' and setup['direction'] == 'in' and data:
                tx['configuration_observation'] = dict(operation='GET_CONFIGURATION', value=data[0])
            elif request == 11 and setup['recipient'] == 'interface' and setup['direction'] == 'out':
                tx['alternate_observation'] = dict(operation='SET_INTERFACE', interface=setup['interface'], alternate=value & 255)
            elif request == 10 and setup['recipient'] == 'interface' and setup['direction'] == 'in' and data:
                tx['alternate_observation'] = dict(operation='GET_INTERFACE', interface=setup['interface'], alternate=data[0])
        for field in ('request_data_hex', 'response_data_hex'):
            matches = candidates(bytes.fromhex(tx[field]))
            if matches:
                tx[field.replace('_hex', '_candidates')] = matches
        if setup and setup['uvc_candidate']:
            tx['xu_descriptor_matches'] = [dict(descriptor_packet=d['packet'], entity=x)
                for d in desc for x in d['records'] if x.get('kind') == 'uvc_extension_unit'
                and (d['capture_section'], d['capture_interface'], d['bus'], d['device']) == (tx['capture_section'], tx['capture_interface'], tx['bus'], tx['device'])
                and d['completion_packet'] < tx['packets'][0]['index']
                and x['entity_id'] == setup['entity_id'] and x['interface']['interface'] == setup['interface']]
            tx['uvc_identity_limit'] = 'Only previously observed descriptor declarations at this address; active configuration and physical identity require topology evidence.'
    endpoint_counts = Counter((r['bus'], r['device'], r['endpoint'], r['transfer_type']) for r in selected)
    times = [r['time_unix'] for r in selected if r['time_unix'] is not None]
    return dict(schema=1, source=dict(path=str(path.resolve()), sha256=hashlib.sha256(raw).hexdigest()),
                selection=dict(bus=bus, device=device, **({'time_range': time_range} if time_range is not None else {})), evidence_class='captured bytes; SDK labels are static candidates',
                limitations=['No physical-device identity without descriptors/topology; USB addresses may be reused.',
                             'USBPcap descriptor injection can synthesize successful-looking descriptor IRPs (often irp_id0); capture setup/provenance must distinguish them from wire traffic.',
                             'No command sender; checksum matches alone do not establish SDK invocation or firmware semantics.',
                             'No automatic joining across separate control IRPs or USB payload fragmentation.',
                             'PCAPNG obsolete Packet Blocks unsupported; Simple Packet Blocks lack timestamps.'],
                packet_count=len(rows), selected_packet_count=len(selected),
                duration_seconds=max(times) - min(times) if times else None,
                endpoint_counts=[dict(bus=b, device=d, endpoint=e, transfer_type=t, packets=n)
                                 for (b, d, e, t), n in sorted(endpoint_counts.items())],
                descriptor_observations=desc, transactions=txs)


def compare(baseline, query):
    a = Counter(signature(t) for t in baseline['transactions'])
    b = Counter(signature(t) for t in query['transactions'])
    def rate(n, report):
        seconds = report['duration_seconds']
        return n / seconds if seconds and seconds > 0 else None
    return dict(baseline=baseline['source'], query=query['source'],
                baseline_selection=baseline['selection'], query_selection=query['selection'],
                baseline_duration_seconds=baseline['duration_seconds'], query_duration_seconds=query['duration_seconds'],
                limitation='Different counts/rates isolate candidates, not causal attribution; polling and device selection may differ.',
                signatures=[dict(signature=json.loads(s), baseline_count=a[s], query_count=b[s],
                                 baseline_rate=rate(a[s], baseline), query_rate=rate(b[s], query), query_only=a[s] == 0)
                            for s in sorted(a.keys() | b.keys())])


WINDOWS = {'idle': ('idle_start', 'idle_end'), 'startup': ('app_start_requested', 'app_ready'),
           'info': ('info_open_requested', 'info_visible'), 'status': ('status_start', 'status_end'),
           'shutdown': ('app_close_requested', 'app_closed')}


def event_window(path, name, margin=0.0):
    raw = path.read_bytes()
    events = [json.loads(line) for line in raw.decode().splitlines() if line.strip()]
    start_name, end_name = WINDOWS[name]
    starts = [e for e in events if e.get('event') == start_name]
    ends = [e for e in events if e.get('event') == end_name]
    if len(starts) != 1 or len(ends) != 1:
        raise ValueError('window requires exactly one start and one end marker; use separate sessions for repeated actions')
    start, end = starts[0]['unix_ns'] / 1e9, ends[0]['unix_ns'] / 1e9
    if not math.isfinite(start) or not math.isfinite(end) or not math.isfinite(margin) or start > end or margin < 0:
        raise ValueError('invalid window order or negative margin')
    return dict(start_unix=start - margin, end_unix=end + margin, margin_seconds=margin,
                name=name, events_path=str(path.resolve()), events_sha256=hashlib.sha256(raw).hexdigest(),
                limitation='Operator markers are not wire timing; boundary transactions may be incomplete or include adjacent actions.')


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('capture', type=pathlib.Path)
    p.add_argument('--device', type=int)
    p.add_argument('--bus', type=int)
    p.add_argument('--baseline', type=pathlib.Path)
    p.add_argument('--baseline-device', type=int)
    p.add_argument('--baseline-bus', type=int)
    p.add_argument('--events', type=pathlib.Path)
    p.add_argument('--window', choices=WINDOWS)
    p.add_argument('--baseline-events', type=pathlib.Path)
    p.add_argument('--baseline-window', choices=WINDOWS)
    p.add_argument('--margin-seconds', type=float, default=0.0)
    p.add_argument('-o', '--output', type=pathlib.Path, required=True)
    a = p.parse_args()
    if bool(a.events) != bool(a.window) or bool(a.baseline_events) != bool(a.baseline_window):
        p.error('each --events path requires a --window (likewise baseline)')
    window = event_window(a.events, a.window, a.margin_seconds) if a.events else None
    report = analyze(a.capture, a.device, a.bus, window)
    if a.baseline:
        report['baseline_comparison'] = compare(analyze(a.baseline, a.baseline_device if a.baseline_device is not None else a.device,
                                                      a.baseline_bus if a.baseline_bus is not None else a.bus,
                                                      event_window(a.baseline_events, a.baseline_window, a.margin_seconds) if a.baseline_events else None), report)
    a.output.write_text(json.dumps(report, indent=2) + '\n')

if __name__ == '__main__':
    main()
