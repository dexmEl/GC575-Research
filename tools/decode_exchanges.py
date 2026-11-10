#!/usr/bin/env python3
"""Offline conservative correlation of GC575 selector-2/selector-1 exchanges.

Reuses the existing USBPcap IRP parser and recovered SDK codecs. No device I/O.
Only a completed, successful and non-overlapping length SET -> data SET ->
pending GET -> data GET sequence in one stream can establish an exchange.
GET_LEN queries may interleave; they are retained separately from GET_CUR.
"""
import argparse
from collections import Counter
import hashlib
import json
import pathlib

from parse_usbpcap import packets, correlate
from realtek_frame import decode as decode_request
from realtek_response import decode as decode_response
from analyze_runtime import AT_NAMES

# Exact literal dispatches in research/evidence/rtice-x64.c, VAs
# 0x180007120 and 0x1800071f0. Spelling follows the exported SDK names.
SDK_NAMES = dict(AT_NAMES)
SDK_NAMES.update({0xb0: 'AT_Set_USB_decription_Index',
                  0xb1: 'AT_Get_USB_decription_Index'})


def first(tx):
    return tx['packets'][0]['index']


def last(tx):
    return tx['packets'][-1]['index']


def key_for(tx):
    setup = tx.get('setup')
    if not setup or setup['type'] != 'class' or setup['recipient'] != 'interface':
        return None
    return (tx['capture_section'], tx['capture_interface'], tx['bus'],
            tx['device'], setup['interface'], setup['entity_id'])


def stream_dict(key):
    return dict(zip(('capture_section', 'capture_interface', 'bus', 'device',
                     'usb_interface', 'entity_id'), key))


def reconstruct(transactions, *, entity=4, interface=0):
    """Return complete/unresolved exchanges without combining competing IRPs.

    The caller supplies complete correlated IRPs with original frame indexes.
    No timeout heuristic, payload-byte search, or response command-ID guess is
    used. Unrecognized controls in an active stream terminate that attempt.
    """
    active = {}
    output = []
    get_len = []
    unattributed = []

    def finish(key, status, reason):
        state = active.pop(key)
        state.pop('_last_frame', None)
        state.pop('_next', None)
        state['status'] = status
        state['reason'] = reason
        if status == 'complete' and state['ambiguities']:
            state['status'] = 'unresolved'
            state['reason'] = 'ambiguous predecessor or overlapping transactions'
        if state['status'] == 'complete':
            state['request_hex'] = state['stages']['data_set']['request_data_hex']
            state['response_hex'] = state['stages']['data_get']['response_data_hex']
            protocol_errors = []
            try:
                request = decode_request(bytes.fromhex(state['request_hex']))
                state['request_decoded'] = request
                state['command'] = hex(request['at_id'])
                state['sdk_name'] = SDK_NAMES.get(request['at_id'])
            except ValueError as exc:
                protocol_errors.append('request: ' + str(exc))
            try:
                response = decode_response(bytes.fromhex(state['response_hex']),
                                           bytes.fromhex(state['request_hex'])[0])
                state['response_decoded'] = response
            except (ValueError, IndexError) as exc:
                protocol_errors.append('response: ' + str(exc))
            state['protocol_errors'] = protocol_errors
            state['protocol_status'] = 'decoded' if not protocol_errors else 'unresolved'
            if (not protocol_errors and state['request_decoded']['at_id'] == 0x23
                    and state['response_decoded']['response_kind'] == 'normal'):
                data = bytes.fromhex(state['response_decoded']['sdk_result_hex'])
                terminated = b'\0' in data
                text, _, trailing = data.partition(b'\0')
                try:
                    state['system_info'] = dict(ascii=text.decode('ascii'),
                                                nul_terminated=terminated,
                                                trailing_after_nul_hex=trailing.hex(),
                                                sdk_data_hex=data.hex())
                except UnicodeDecodeError:
                    state['system_info'] = dict(sdk_data_hex=data.hex(),
                                                interpretation='not ASCII')
        state['frame_indexes'] = sorted({p['index'] for tx in state['stages'].values()
                                         for p in tx['packets']}
                                        | {p['index'] for tx in state['get_len']
                                           for p in tx['packets']}
                                        | {p['index'] for tx in state['zero_pending_polls']
                                           for p in tx['packets']})
        output.append(state)

    def unresolved_single(key, tx, reason):
        output.append(dict(stream=stream_dict(key), status='unresolved', reason=reason,
                           stages={'unmatched': tx}, get_len=[], zero_pending_polls=[],
                           ambiguities=[], frame_indexes=[p['index'] for p in tx['packets']]))

    for tx in sorted(transactions, key=first):
        setup = tx.get('setup')
        key = key_for(tx)
        if key is None:
            # A setup-less EP0 IRP cannot safely be assigned to an entity.
            if setup is None and any(p['endpoint_number'] == 0 for p in tx['packets']):
                unattributed.append(tx)
                for candidate in list(active):
                    if candidate[:4] == (tx['capture_section'], tx['capture_interface'],
                                         tx['bus'], tx['device']):
                        finish(candidate, 'unresolved', 'setup-less control IRP in same device stream')
            continue
        if ((entity is not None and setup['entity_id'] != entity)
                or (interface is not None and setup['interface'] != interface)):
            continue
        endpoint_zero = all(p['endpoint_number'] == 0 for p in tx['packets'])
        selector = setup['selector']
        request = int(setup['bRequest'], 16)
        bm_request = int(setup['bmRequestType'], 16)
        stage = ({(0x21, 1, 2): 'length_set', (0x21, 1, 1): 'data_set',
                  (0xa1, 0x81, 2): 'pending_get',
                  (0xa1, 0x81, 1): 'data_get'}.get((bm_request, request, selector)))
        is_get_len = bm_request == 0xa1 and request == 0x85 and selector in (1, 2)
        valid = tx['complete'] and tx['successful'] and endpoint_zero and not tx['length_exceeds_setup']
        had_ambiguity = False
        if key in active and first(tx) <= active[key]['_last_frame']:
            finish(key, 'unresolved', 'overlapping IRPs in same stream')
            had_ambiguity = True
        if not valid:
            if key in active:
                active[key]['stages']['invalid'] = tx
                finish(key, 'unresolved', 'incomplete, unsuccessful, truncated or invalid control IRP')
            else:
                unresolved_single(key, tx, 'incomplete, unsuccessful, truncated or invalid control IRP')
            continue
        if is_get_len:
            if setup['wLength'] != 2 or tx['data_length'] != 2:
                if key in active:
                    active[key]['get_len'].append(tx)
                    finish(key, 'unresolved', 'GET_LEN was not an exact two-byte result')
                else:
                    unresolved_single(key, tx, 'GET_LEN was not an exact two-byte result')
                continue
            get_len.append(tx)
            if key in active:
                state = active[key]
                expected = 2 if selector == 2 else (
                    state.get('pending_length') if state['_next'] == 'data_get'
                    else state['request_length'])
                actual = int.from_bytes(bytes.fromhex(tx['response_data_hex']), 'little')
                state['get_len'].append(tx)
                state['_last_frame'] = last(tx)
                if actual != expected:
                    finish(key, 'unresolved', 'interleaved GET_LEN disagreed with next stage length')
            continue
        if stage == 'length_set':
            if key in active:
                finish(key, 'unresolved', 'new request length before prior exchange completed')
                had_ambiguity = True
            if setup['wLength'] != 2 or tx['data_length'] != 2:
                unresolved_single(key, tx, 'request length was not an exact LE16')
                continue
            active[key] = dict(stream=stream_dict(key), stages={'length_set': tx},
                               request_length=int.from_bytes(bytes.fromhex(tx['request_data_hex']), 'little'),
                               get_len=[], zero_pending_polls=[],
                               ambiguities=['earlier incomplete exchange or overlap'] if had_ambiguity else [],
                               _next='data_set', _last_frame=last(tx))
            continue
        if stage is None:
            if key in active:
                active[key]['stages']['unexpected'] = tx
                finish(key, 'unresolved', 'unrecognized control in active entity/interface stream')
            continue
        if key not in active:
            unresolved_single(key, tx, 'missing preceding request length/stage')
            continue
        state = active[key]
        if stage != state['_next']:
            state['stages']['unexpected'] = tx
            finish(key, 'unresolved', 'unexpected stage: expected %s, got %s' % (state['_next'], stage))
            continue
        state['_last_frame'] = last(tx)
        if stage == 'data_set':
            state['stages'][stage] = tx
            if tx['data_length'] != state['request_length'] or setup['wLength'] != state['request_length']:
                finish(key, 'unresolved', 'request data length disagreed with selector-2 length')
            else:
                state['_next'] = 'pending_get'
        elif stage == 'pending_get':
            if setup['wLength'] != 2 or tx['data_length'] != 2:
                state['stages'][stage] = tx
                finish(key, 'unresolved', 'pending length was not an exact LE16')
                continue
            pending_length = int.from_bytes(bytes.fromhex(tx['response_data_hex']), 'little')
            if pending_length == 0:
                state['zero_pending_polls'].append(tx)
            else:
                state['stages'][stage] = tx
                state['pending_length'] = pending_length
                state['_next'] = 'data_get'
        else:
            state['stages'][stage] = tx
            if tx['data_length'] != state['pending_length'] or setup['wLength'] < state['pending_length']:
                finish(key, 'unresolved', 'response data length disagreed with selector-2 pending length')
            else:
                finish(key, 'complete', 'unique ordered successful length/data/pending/response sequence')
    for key in list(active):
        finish(key, 'unresolved', 'capture ended before exchange completed')
    return dict(exchanges=sorted(output, key=lambda x: x['frame_indexes'][0]),
                get_len_transactions=get_len, unattributed_control_transactions=unattributed)


def analyze(raw, *, path=None, bus=None, device=None, entity=4, interface=0):
    rows = list(packets(raw))
    selected = [row for row in rows if (bus is None or row['bus'] == bus)
                and (device is None or row['device'] == device)]
    txs = correlate(selected)
    result = reconstruct(txs, entity=entity, interface=interface)
    result.update(
        schema=1,
        source=dict(path=str(path) if path is not None else None,
                    sha256=hashlib.sha256(raw).hexdigest(), size_bytes=len(raw)),
        selection=dict(bus=bus, device=device, entity_id=entity, usb_interface=interface),
        packet_count=len(rows), selected_packet_count=len(selected),
        packets=selected, transactions=txs,
        status_counts=dict(Counter(e['status'] for e in result['exchanges'])),
        limitations=[
            'Offline capture evidence; PnP/topology and application-event attribution are separate inputs.',
            'Capture records cannot prove absence of driver/tool loss or clean capture shutdown.',
            'No join across streams, missing/failed/overlapping stages, or undecoded containers.',
            'Response command association comes from the ordered exchange, not an inferred response AT ID.',
            'Unknown command semantics and device firmware handlers remain unresolved.',
        ],
    )
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('capture', type=pathlib.Path)
    parser.add_argument('--bus', type=int)
    parser.add_argument('--device', type=int)
    parser.add_argument('--entity', type=int, default=4)
    parser.add_argument('--interface', type=int, default=0)
    parser.add_argument('-o', '--output', type=pathlib.Path)
    args = parser.parse_args()
    result = analyze(args.capture.read_bytes(), path=args.capture.resolve(), bus=args.bus,
                     device=args.device, entity=args.entity, interface=args.interface)
    text = json.dumps(result, indent=2, sort_keys=True) + '\n'
    if args.output:
        args.output.parent.mkdir(parents=True, exist_ok=True)
        args.output.write_text(text, encoding='utf-8')
    else:
        print(text, end='')


if __name__ == '__main__':
    main()
