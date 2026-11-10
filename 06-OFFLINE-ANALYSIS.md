# Offline capture analysis and measurement

The included Python tools require only the standard library and perform no device I/O. Run from this export's root:

```sh
python tools/decode_exchanges.py evidence/gc575-independent-at23-20261108.pcap --bus 2 --device 4 -o at23-decoded.json
python tools/decode_exchanges.py evidence/gc575-startup-20261108.pcap --bus 2 --device 1 -o startup-decoded.json
```

Output filenames are derived reports; write them outside the export to keep its checksum inventory unchanged. Bus/address selections above belong only to these captures.

The decoder retains packet ordinals, setup bytes, IRP completion status, request/response bytes and checksum results. Expected results are:

| Capture | Packets | Reconstructed exchanges |
|---|---:|---|
| Independent AT23 | 26 | One complete AT23 exchange and one unresolved zero-pending preflight |
| Application startup | 152 | Eight complete exchanges |

No inference is made that all captured commands are safe to replay. Response command association comes from ordered request/response correlation, not an echoed command ID. Historical source comments retain the earlier static-analysis scope; subsequent AT23 physical confirmation is documented in the transport report.

## Fields for reproducible capture results

A mode/control report should include device VID/PID, observed system information, OS/driver, negotiated USB speed, application build, and any loaded SDK identities. Record requested and actually connected format, dimensions, stride, interval and sample size separately.

For a claimed high-rate mode, measure physical HDMI input timing and unique source frame identifiers, duplicates, discontinuities and drops over a stated duration. USB frame cadence alone is insufficient.

For quality changes, retain the complete control exchange, matching input image/timing, JPEG DQT tables and compressed-size distributions before and after. USB completion status does not establish an encoder effect.

For latency, separate callback arrival, host queue age, decode time and presentation age. State clock domains and uncertainty, and use an independent HDMI/optical stimulus reference for device latency. First USB payload completion to EOF does not measure HDMI-to-host latency.

For hardware ROI, demonstrate moved image bounds and reduced device-transferred bytes before host cropping, with sustained unique frames. Status dimensions alone do not locate the crop in the processing pipeline.
