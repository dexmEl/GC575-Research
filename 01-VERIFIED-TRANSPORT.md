# Independently verified private transport

Device: AVerMedia GC575, USB VID:PID `07ca:0575`. Experiment date: 2026-11-08. Streaming Center was absent during the independent query.

| Layer | Observed identity |
|---|---|
| Private property GUID | `961073c7-49f7-44f2-ab42-e940405940c2` |
| Windows KS topology | Node 3, device-specific node, `IKsControl` |
| USB VideoControl interface / XU entity | Interface 0 / entity 4 |
| Selector 2 | Two-byte little-endian outgoing/pending length |
| Selector 1 | Protocol request/response bytes |

Windows node 3 and USB entity 4 are different identifiers. Node indices and USB addresses should be enumerated for each environment rather than copied from this observation.

The independent command was service 1, AT `0x23` (`AT_Get_System_Info`):

```text
Request:  a1 06 00 00 23 00 00 00 36
Response: a1 0e 00 00 44 42 32 30 35 39 23 31 36 30 35 00 0c
Result:   DB2059#1605 (NUL terminated)
```

Both checksums validate. The response exactly matches two earlier application-generated exchanges. The string is an observed system-information result; its interpretation as a particular firmware version is not established.

The four principal stages below are captured setup bytes, not an instruction to replay arbitrary commands. Additional GET_LEN transactions are present in the capture.

| Stage | Setup bytes | Data |
|---|---|---|
| SET_CUR selector 2 | `21 01 00 02 00 04 02 00` | `09 00` |
| SET_CUR selector 1 | `21 01 00 01 00 04 09 00` | 9-byte request above |
| GET_CUR selector 2 | `a1 81 00 02 00 04 02 00` | `11 00` returned |
| GET_CUR selector 1 | `a1 81 00 01 00 04 11 00` | 17-byte response above |

The exchange took 37.913 ms. This is control-command latency, not video latency. All KS calls returned HRESULT 0; all 12 control IRPs completed successfully. The 1,304-byte capture contains 26 packets and one complete AT exchange. An unrelated endpoint-0x85 interrupt request was canceled at release. A zero-pending preflight is retained; capture loss counters were unavailable.

The earlier 7,666-byte application startup capture also contains service-0 capability command `0x67`, service-1 `0xb1` USB-description-index query, and a `0xb0` setter. These are observations of ordinary application startup, not independently tested commands. Service and transport are part of command identity: service-0 `0x67` is not service-1 headphone-gain `0x67`.

Included sources: [independent capture](evidence/gc575-independent-at23-20261108.pcap), [startup capture](evidence/gc575-startup-20261108.pcap), and [selected AT23 results](evidence/at23-results.json). Offline decoder sources are included; see [offline analysis](06-OFFLINE-ANALYSIS.md) and the [source map](evidence/README.md).
