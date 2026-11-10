# MJPEG quality: recovered implementation and missing binding

The inspected Streaming Center `avtsdk.dll` SHA-256 is `fce2953c0ef9e1d35f180448d712c3d83ebaa01c404850ea65e6193071038dd0`. All addresses below are preferred host PE virtual addresses, not device execution addresses.

| Entry | Call path |
|---|---|
| `getMJPEGEncodingQuality` | `0x18005cc30` → `0x18008cc80` → `getExtension` at `0x180081ee0` |
| `setMJPEGEncodingQuality` | `0x180071fb0` → `0x1800ab0c0` → same generic extension helper |

Both use generic property `0x0b`. The helper queries the buffer size, then GETs the full buffer. The setter writes byte 0 to `04`, preserves byte 8's upper nibble, and maps SDK enum 1→low nibble 2, enum 2→1, other→0, before SETting the entire buffer. The getter maps raw nibble 0→enum 3, 1→enum 2, and 2–15→enum 1. User-facing quality labels and the applicable GC575 buffer size remain unknown.

GC575 has two disabled record fields: generic backend at row+`0x1c` and MJPEG feature at row+`0x40`. The inspected setter contains no fallback to the separate Realtek backend. These are host policy gates; they do not establish a firmware limitation. Changing one or both gates would still not establish a compatible receiver.

The inherited inactive generic GUID bytes decode to `23e49ed0-1178-4f31-ae52-d2fb8a8d3b48`. This is not a verified GC575 encoder property set. The independently verified Realtek GUID is `961073c7-49f7-44f2-ab42-e940405940c2`. The stored Realtek XU descriptor advertises selector `0x0b`, but numeric overlap does not bind it to this generic property or payload. An AT identifier is a third namespace.

Standard UVC Probe/Commit `wCompQuality` is a separate investigation route. Whether GC575 honors that field has not been established. Linux `UVCIOC_CTRL_QUERY` can access an implemented XU control, but does not resolve the missing unit/selector/payload semantics. No Linux quality-control test is claimed.

The best next evidence is a GC575-enabled application caller or trace of an actual quality setting, binding the full request and response to the device. Before/after JPEGs from identical input should be compared for DQT tables, encoded size and visual effect. A successful USB completion alone does not prove quality changed. No GC575 quantization-table, restart-interval or slice control is currently verified.

Included evidence: [exact gate and payload source excerpts](evidence/encoder-gates.c), [machine-readable evidence](evidence/encoder-evidence.json), and [offline buffer model](evidence/encoder_quality_model.py). The model has no hardware transport.
