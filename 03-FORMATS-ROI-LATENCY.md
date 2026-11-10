# Formats, ROI and latency: what the evidence supports

Recovered historical hardware evidence confirms exposure and negotiation of 1080p240 YUY2, with measured delivery below 240 distinct frames/sec. A surviving report also records the earlier 1440p240 MJPEG descriptor burn and exact interval negotiation, while its original burn/readback artifacts remain missing. See [descriptor experiments](08-DESCRIPTOR-EXPERIMENTS.md) for evidence and profile-selection details. Stored descriptors declare NV12 and MJPEG modes; earlier reports also identify RGB24 entries. Descriptor declarations, successful negotiation and delivery of distinct frames are separate claims.

A preserved historical USB analysis reconstructed 4,211 complete 1920×1080 NV12 frames, with 3,110,400 video bytes per frame, on bulk IN endpoint `0x82`. Median frame start spacing was 4.166126 ms and first-payload-completion to EOF was 3.622055 ms. The source was reported as 1440p60 without timing readback. This does **not** establish 240 distinct source frames per second or a newly unlocked mode. The original capture had snaplen 512; it is not bundled or newly reanalyzed here.

Those completion timestamps cannot distinguish full-frame buffering followed by paced drain from progressive production. Sixteen outstanding host URBs do not imply sixteen device frame buffers. No adjustable internal queue-depth control or device-latency improvement has been demonstrated.

No GC575 crop/source-window register or geometric ROI command has been established. A generic Realtek host script parser was recovered, including register operations and delay nodes, but no GC575 factory register script was located. Cross-family RTD2668 VGIP fields remain search leads and are not applicable GC575 register addresses.

RBUS framing was reconstructed offline, but an SDK read path can conditionally write an internal register and miss restoration on failure. Later provenance work narrows that branch to particular chip/protocol state; it does not establish the entire path as write-free or identify a safe GC575 register. No register scan was performed.

Useful host-side design patterns include latest-frame delivery, bounded compressed queues, drop-oldest policies and parallel MJPEG decoding. These can limit processing backlog but do not program device buffers.

A meaningful mode/latency experiment should record physical input timing, actual negotiated and delivered output format, unique source frame IDs, duplicates/drops, and an independent HDMI or optical timing reference. A real hardware ROI should move image bounds and reduce transferred bytes before host processing. Smaller host output dimensions alone are insufficient.

Historical baseline source: `research/BUFFER_LATENCY_ANALYSIS.md`; capture SHA-256 `b4c1b14749737185bcb26e77c5ecea8cff0fcd7e364a901edf1dde3b0614894f`. See the [source map](evidence/README.md) for the detailed local reports.
