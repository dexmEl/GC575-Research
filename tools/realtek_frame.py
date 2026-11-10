#!/usr/bin/env python3
"""Offline conditional RTD2801 host-class serializer. Never accesses hardware.

Evidence: RTK_IO_x86.dll ff92321af82a24a107bc2f31fd05a1a455c02b9477cedab1f66b37d38c50c382
wrapper VA 0x6b428ca0; serializer VA 0x6b38b1f0; checksum VA 0x6b363d10.
This is NOT a verified GC575 USB transfer encoding.
"""
import argparse
import json
import struct


def encode(at_id: int, payload: bytes = b"", service: int = 1) -> bytes:
    if not 0 <= at_id <= 0xffffffff or not 0 <= service <= 255:
        raise ValueError("AT ID must fit uint32; service must fit uint8")
    body = struct.pack("<I", at_id) + payload
    length = len(body)
    # Deliberately constrain ambiguous high-bit lengths and uint16 truncation.
    if length > 0x7ffe:
        raise ValueError("length exceeds conservative offline codec limit")
    if length < 127:
        header = bytes(((service - 0x60) & 255, (length + 2) & 0x7f, 0, 0))
    else:
        header = bytes(((service - 0x60) & 255, 0x80 | ((length + 1) >> 8), (length + 1) & 255, 0))
    frame = header + body
    return frame + bytes((-sum(frame) & 255,))


def decode(frame: bytes) -> dict:
    """Validate a complete recorded request frame, not response framing."""
    if len(frame) < 9:
        raise ValueError("request shorter than header, AT ID and checksum")
    if sum(frame) & 255:
        raise ValueError("checksum mismatch")
    at_id, = struct.unpack_from("<I", frame, 4)
    service = (frame[0] + 0x60) & 255
    payload = frame[8:-1]
    if encode(at_id, payload, service) != frame:
        raise ValueError("header/length mismatch")
    return {"at_id": at_id, "service": service, "payload_hex": payload.hex(),
            "scope": "conditional_host_class_request_not_verified_usb"}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    sub = parser.add_subparsers(dest="command", required=True)
    enc = sub.add_parser("encode")
    enc.add_argument("at_id", type=lambda s: int(s, 0))
    enc.add_argument("--payload", default="", help="hex bytes")
    dec = sub.add_parser("decode")
    dec.add_argument("frame", help="complete request hex")
    args = parser.parse_args()
    try:
        result = ({"frame_hex": encode(args.at_id, bytes.fromhex(args.payload)).hex(),
                   "scope": "offline_only_not_verified_usb"} if args.command == "encode"
                  else decode(bytes.fromhex(args.frame)))
    except ValueError as exc:
        parser.error(str(exc))
    print(json.dumps(result, sort_keys=True))

if __name__ == "__main__":
    main()
