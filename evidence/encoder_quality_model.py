"""Offline model of avtsdk's generic quality buffer; no GC575 binding/transport.

This preserves the reverse-engineered generic API behavior for comparison.
Its buffer length and GUID are not established as GC575 encoder controls.
"""


def decode_quality(payload: bytes) -> int:
    """Map generic response byte8 low nibble to the SDK enum (labels unknown)."""
    if len(payload) < 9:
        raise ValueError('Generic quality buffer must contain byte8')
    nibble = payload[8] & 15
    return 3 if nibble == 0 else 2 if nibble == 1 else 1


def transform_quality(payload: bytes, sdk_enum: int) -> bytes:
    """Model the generic GET/modify/SET buffer without transmitting anything.

    The vendor implementation maps every enum other than1/2 to low nibble0.
    Keeping that behavior is useful for analysis, not a validated input range.
    """
    if len(payload) < 9:
        raise ValueError('Generic quality buffer must contain byte8')
    if not isinstance(sdk_enum, int):
        raise TypeError('SDK enum must be an integer')
    result = bytearray(payload)
    result[0] = 4
    result[8] = (payload[8] & 240) | (2 if sdk_enum == 1 else 1 if sdk_enum == 2 else 0)
    return bytes(result)
