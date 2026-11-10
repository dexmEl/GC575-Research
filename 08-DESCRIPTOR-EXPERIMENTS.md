# Descriptor programming and high-rate capture experiments

Recovered 2026-11-10 from surviving November 4 experiment artifacts. These are historical hardware operations; no new device operation was performed during recovery.

## 1920×1080 YUY2: burn and live exposure confirmed

The successful `burnUSBDesription` operation changed the active SuperSpeedPlus profile 1 (`USB_DT_SSP_01`). The function name is spelled this way in the SDK export. The saved burn log reports return 0; physical readback equals the patched 4096-byte blob. Profile 0 is unchanged. These file relationships were independently rechecked offline during export preparation.

| Field | Before | After |
|---|---|---|
| YUY2 format/frame | Format 1, frame 6, 1920×1080 | Unchanged |
| First discrete interval, USBD offset `0x7d7` | 83333 (100 ns), ~120 fps | 41666, ~240.004 fps |
| Interval bytes | `85 45 01 00` | `c2 a2 00 00` |
| Default interval | 166666, ~60 fps | Unchanged |
| Maximum frame buffer | 4,147,200 bytes | Unchanged |
| USBD checksum byte, offset `0x09` | `c6` | `2d` |

The checksum is `(-sum(blob[0x10:])) & 0xff`. Exactly four USBD bytes changed: checksum plus three interval bytes. The live 2185-byte configuration changed only at offsets `0x18f..0x191`. All other bytes are identical. Vendor bitrate metadata was retained; the 7,962,624,000 bit/s nominal YUY2 payload exceeds the 32-bit UVC bitrate field's range.

Physical profile 1 before SHA-256: `fdabb0300f01b52be069ef2df4245126b30379ab5a0073d835cceafd981a16a0`.

Applied file/readback SHA-256: `35774489dee4ca201c0e574ecbd8e21d262984ab7fdcaebf1d5dbdd198445c76`.

Final live configuration SHA-256: `ee80a09ade3a6ae7b6575588428ebe4b883d1c763df14438c0ee4f9c8aa1fa52`.

## Profile selection and readback details

The historical operation used `burnUSBDesription(path, 3, 1)`: speed 3 selected SSP and index 1 selected `USB_DT_SSP_01`. The saved API analysis says the USBD header speed byte can override the speed argument. This describes the recorded experiment, not a portable writer API.

The burn reset the active profile to 0. The experiment then selected profile 1 with `AT_Set_USB_decription_Index(1)` before verifying the live configuration. This makes profile selection important when a modified mode disappears after application startup.

Backup/readback used `readMultiFiles`. Its type-7 selector requested the truncated name `USB_DT_SSP_0`; a private reader DLL copy redirected that read selector to `USB_DT_SSP_01`. The installed writer DLL was not modified. The retained patch report identifies the private reader change. A generic unmodified type-7 read must not be assumed to read profile 1 correctly.

## Measured YUY2 delivery was below 240 distinct frames/sec

The native DirectShow sink negotiated 1920×1080 YUY2 at 240.004 fps, with exactly 4,147,200 bytes per sample. It sampled a source barcode directly from every callback, used preallocated storage and wrote CSV after capture. It did not render, convert frame rate, or copy complete frames.

Initial runs measured ~221 samples/sec and 206–207 distinct counter IDs/sec. In the cleanest subsequent run with the source counter advancing near 240/sec:

| Measurement | Result |
|---|---:|
| Measurement span | 9.99786 s |
| Received samples | 2211 |
| Callback rate | 221.047 samples/sec |
| Distinct counter IDs | 2199 |
| Distinct-ID rate | 219.847/sec |
| Consecutive repeated IDs | 12 |
| Missing counter IDs | 201 |
| Invalid barcode samples | 0 |
| Counter advance rate | 239.951/sec |

QPC arrival and sample timestamp rates agree. Counter advance does not independently prove HDMI presentation of every source ID. These measurements do not isolate the shortfall to source presentation, HDMI processing, device, controller or Windows driver. The result proves exposed/negotiated 1080p240 YUY2 with real delivery, not sustained 240 unique frames/sec.

## Burst-size trial: no meaningful improvement

A later experiment changed the bulk video endpoint companion from `bMaxBurst=7` (8 packets) to 15 (16 packets), verified the change, then restored the original profile. Sample rates were 224.372/sec before and 224.603/sec after. No meaningful gain or latency improvement was established; actual endpoint burst behavior was not proven. The rollback retained the YUY2 interval patch and restored its exact profile SHA-256 above. These are historical results, not a recommendation to repeat the write.

## 2560×1440 MJPEG at 240 fps: historical confirmation, incomplete artifact chain

An older surviving research report explicitly records that a descriptor burn replaced the stock 1440p60 MJPEG entry with 1440p240 and that the application negotiated interval 41666. A source-hashed excerpt is included. Local session history separately preserves the operator's earlier confirmation that the modified MJPEG mode appeared in Streaming Center and worked in a capture application.

The original MJPEG burn command, exact modified blob/readback and a 240-unique-frame measurement have not yet been recovered. The November 4 YUY2 baseline instead exposes 1440p MJPEG intervals `[69444, 83333, 166666]` (~144, 120, 60 fps). Thus the MJPEG patch must not be assumed present in the YUY2 experiment's saved profile. Profile replacement or selection may matter, but the exact transition remains unresolved.

An independently located July report describes an unflashed full-image MJPEG interval candidate. It is a separate offline experiment and is not the successful standalone descriptor-burn proof.

## Included evidence

The [descriptor experiment evidence](evidence/descriptor-experiments/provenance.json) lists original paths, exact source hashes and included artifacts. It includes before/after profiles, live configurations, burn/activation logs, verification, the cleanest retest's callback CSV/log, structured results and burst rollback record. Descriptor blobs are captured research fixtures, not a supplied hardware programming workflow.
