# GC575 research export

This package documents the AVerMedia GC575 (`07ca:0575`) USB control transport, captured command exchanges, recovered host-side control layouts, and remaining implementation gaps. It includes original small packet captures, offline decoders and selected static-analysis evidence. No vendor DLL, firmware image, executable or analysis database is included.

Recovered historical artifacts confirm descriptor programming and physical readback exposing 1920×1080 YUY2 at a nominal 240 fps. Native capture negotiated that mode, with the cleanest retest measuring ~221 samples/sec and ~220 distinct counter IDs/sec. A historical report also confirms exposure/negotiation of 2560×1440 MJPEG at 240 fps, but its original burn/readback chain remains incomplete. The separate AT23 system-information query is independently verified without vendor SDK initialization. Configurable MJPEG quality, hardware ROI and device-latency improvement remain unverified.

| Document | Contents |
|---|---|
| [Descriptor experiments](08-DESCRIPTOR-EXPERIMENTS.md) | Successful YUY2 descriptor burn, measured delivery, burst rollback and historical MJPEG evidence |
| [Verified transport](01-VERIFIED-TRANSPORT.md) | Private XU identity, setup packets, independent AT23 result and capture limits |
| [MJPEG quality](02-MJPEG-QUALITY.md) | Generic setter, disabled GC575 gates and missing receiver binding |
| [Formats, ROI and latency](03-FORMATS-ROI-LATENCY.md) | Observed baseline, descriptor limits and unresolved hardware controls |
| [Recovered control reference](04-CONTROL-REFERENCE.md) | Timing, format, color and register-access host layouts |
| [Audio controls](05-AUDIO-CONTROLS.md) | Official helper's resolved audio APIs and initialization behavior |
| [Offline analysis](06-OFFLINE-ANALYSIS.md) | Capture decoding commands and measurement fields |
| [Protocol and device boundary](07-PROTOCOL-BOUNDARY.md) | Framing, descriptor provenance and USB versus host-address namespaces |
| [Evidence guide](evidence/README.md) | Included artifacts, identities and original project locations |

Evidence categories used throughout:

- **Captured:** bytes and completion status present in an original USB recording.
- **Independently executed:** the exact AT23 query issued outside the vendor application and correlated with a capture.
- **Static host implementation:** behavior reconstructed from an identified SDK; device acceptance and side effects may remain unknown.
- **Operator-reported experiment:** prior hardware work described by the operator; original artifacts and measurement scope must be associated separately.
- **Stored descriptor:** bytes from a firmware artifact; not necessarily the installed unit's active descriptors.

`SHA256SUMS.txt` covers all other exported files. Captures and selected static evidence are byte-identical copies; `at23-results.json` is a derived subset omitting machine-specific environment identifiers. Preparing this export involved no new hardware operation.
