#!/usr/bin/env python3
"""Offline RTD2801-class response decoding from recovered SDK behavior.

No USB/device I/O. This decoder does not infer an AT command identifier from
response bytes. Host evidence (x86 RTK_IO):
analysis/edid/protocol/transport/rtk-at-exchange.c, VA 0x6b391e70,
and rtk-at-frame.c, VA 0x6b38b1f0. Physical GC575 use needs capture evidence.
"""
import argparse
import json


def decode_exchange(frame: bytes, request_marker: int = 0xa1) -> dict:
    """Decode the common envelope without assigning an AT-specific body prefix.

    Normal responses require a valid additive checksum. The SDK takes its
    complement-marker error path before validating checksum; for those frames
    this function reports checksum validity without inventing successful data.
    Reserved/prefix bytes are retained rather than assigned undocumented names.
    """
    frame = bytes(frame)
    if not 0 <= request_marker <= 255:
        raise ValueError('request marker must fit uint8')
    if len(frame) < 3:
        raise ValueError('response shorter than marker, length and checksum')
    if frame[0] not in (request_marker, request_marker ^ 255):
        raise ValueError('response marker mismatch')
    extended = bool(frame[1] & 128)
    if extended:
        encoded_length = ((frame[1] & 127) << 8) | frame[2]
        total = encoded_length + 4
        exchange_prefix_length = 3
    else:
        encoded_length = frame[1]
        total = encoded_length + 3
        exchange_prefix_length = 2
    if len(frame) != total:
        raise ValueError('response length mismatch: expected %d bytes, got %d' % (total, len(frame)))
    checksum_valid = sum(frame) & 255 == 0
    expected_checksum = -sum(frame[:-1]) & 255
    is_error = frame[0] != request_marker
    result = dict(
        raw_hex=frame.hex(), request_marker=hex(request_marker), marker=hex(frame[0]),
        response_kind='kernel_error' if is_error else 'normal',
        extended_length=extended, encoded_length=encoded_length,
        total_length=total, checksum=hex(frame[-1]),
        expected_checksum=hex(expected_checksum), checksum_valid=checksum_valid,
        scope='recovered_host_class_response_requires_capture_correlation',
    )
    if is_error:
        # The SDK explicitly logs original byte 2 as the kernel error code.
        result.update(kernel_error_code=frame[2], sdk_result_hex=None,
                      checksum_required_by_observed_host_path=False)
        return result
    if not checksum_valid:
        raise ValueError('response checksum mismatch')
    exchange_body = frame[exchange_prefix_length:-1]
    result.update(
        exchange_prefix_hex=frame[:exchange_prefix_length].hex(),
        exchange_body_hex=exchange_body.hex(),
        exchange_prefix_length=exchange_prefix_length,
        exchange_body_length=len(exchange_body),
        checksum_required_by_observed_host_path=True,
    )
    return result


def decode(frame: bytes, request_marker: int = 0xa1) -> dict:
    """Decode the common envelope and the recovered AT result prefix."""
    result = decode_exchange(frame, request_marker)
    if result['response_kind'] != 'normal':
        return result
    exchange_body = bytes.fromhex(result['exchange_body_hex'])
    exchange_prefix_length = result['exchange_prefix_length']
    # Preserve the recovered branch exactly, including the 128-byte boundary.
    at_prefix_length = 2 if len(exchange_body) < 128 else 1
    if len(exchange_body) < at_prefix_length:
        raise ValueError('response too short for recovered AT response prefix')
    result.update(
        at_prefix_hex=exchange_body[:at_prefix_length].hex(),
        at_prefix_length=at_prefix_length,
        sdk_result_offset=exchange_prefix_length + at_prefix_length,
        sdk_result_hex=exchange_body[at_prefix_length:].hex(),
        sdk_result_length=len(exchange_body) - at_prefix_length,
        checksum_required_by_observed_host_path=True,
    )
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('frame', help='one complete response in hex')
    parser.add_argument('--request-marker', type=lambda s: int(s, 0), default=0xa1)
    args = parser.parse_args()
    try:
        result = decode(bytes.fromhex(args.frame), args.request_marker)
    except ValueError as exc:
        parser.error(str(exc))
    print(json.dumps(result, indent=2, sort_keys=True))


if __name__ == '__main__':
    main()
