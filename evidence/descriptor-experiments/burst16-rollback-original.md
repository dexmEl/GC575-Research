# Burst trial rolled back - 2026-11-04

Restored the exact original 8-packet SSP profile 1 at the user's request.
The physical readback matches `profile1_before.bin` byte for byte.
Profile 0 is unchanged. Profile 1 was reactivated after the burn and the
SDK confirms active index 1. The live USB configuration is byte-identical
to `live-burst16_before-configuration-0.bin`, including bMaxBurst=7 and
1920x1080 YUY2 at 41666 x 100 ns (~240.004 FPS).

`rollback_verification.json` records the comparisons; `rollback_*.log`
contains hardware operations. No new unique-frame test was performed.
`APPLIED.md` and `verification.json` describe the historical 16-packet trial.
The current device is back at 8 packets.
