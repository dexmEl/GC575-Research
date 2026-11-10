# Evidence guide

The two PCAP files are byte-identical copies of the project's original portable fixtures. They can be opened offline in Wireshark. No new traffic was acquired for this package.

`at23-results.json` selects result, transfer and limitation fields from `research/evidence/independent-ks-at23-20261108.json`. Machine-specific environment paths/identifiers and runner/capture metadata are omitted; this is a derived summary, not an original raw log. The PCAP is the original wire evidence.

`encoder-gates.c` and `encoder-evidence.json` are unchanged copies of retained Phase 4 static evidence. Their historical project paths identify original evidence locations and are not portable links. The original vendor DLL is not included. `encoder_quality_model.py` is the unchanged offline buffer-transformation model, not a GC575 request sender.

Local project source map (paths relative to the project root, outside this folder):

| Topic | Canonical source |
|---|---|
| Independent execution and run limitations | `research/INDEPENDENT_KS_AT23.md` |
| KS/USB correlation and historical transport analysis | `research/GC575_USB_TRANSPORT.md` |
| MJPEG gates, exact byte provenance and scope | `research/PHASE4_ENCODER.md` |
| Scaler/ROI and cross-family applicability | `research/PHASE4_SCALER_ROI.md` |
| Historical latency baseline and host queues | `research/BUFFER_LATENCY_ANALYSIS.md` |
| RBUS hazards and branch provenance | `research/RBUS_ACCESS_ANALYSIS.md`, `research/RBUS_BRANCH_PROVENANCE.md` |
| SDK export and command catalogs | `research/REALTEK_SDK_FUNCTION_INVENTORY.md`, `research/REALTEK_COMMAND_CATALOG.md` |
| Native diagnostic source | `phase3/diagnostics/src` |
| Parsers, fixture notes and regressions | `tools/usb_protocol` |
| Central project index and command map | `research/EVIDENCE_INDEX.md`, `research/GC575_COMMAND_MAP.md` |

These source-map paths identify additional original evidence. The main findings pages and included evidence can be read independently of that project tree. This package introduces no new hardware or binary-analysis claims.

The sibling `tools` directory contains unchanged offline parser/decoder dependencies from `tools/usb_protocol`. See `06-OFFLINE-ANALYSIS.md` in the package root for runnable commands. The audio report derives from the pinned official-wrapper report named above; it adds no hardware claim.

Additional unchanged static evidence:

| File | Original project path | Scope |
|---|---|---|
| `command-catalog.json` | `phase3/analysis/command-catalog.json` | Host literal dispatch sites, source identities and limitations |
| `sdk-functions.csv` | `phase3/analysis/sdk-functions.csv` | Export inventory; candidate prototypes are not verified ABI headers |
| `rtice-installed64.c` | `phase3/analysis/capabilities/rtice-installed64.c` | Selected installed RTICE wrapper excerpts |
| `firmware-xu-match.json` | `research/evidence/phase2-static/firmware-xu-match.json` | Stored descriptor bytes, artifact hash and file offset |

Historical paths in retained evidence are provenance strings, not bundled dependencies. No firmware image is included. Source and binary identities remain distinct from hardware execution evidence.

Recovered historical descriptor experiments are under `descriptor-experiments/`; `provenance.json` identifies every copied source and its hash. Read `08-DESCRIPTOR-EXPERIMENTS.md` at the export root for the distinction between descriptor exposure, negotiated rate and measured distinct-frame delivery. No raw private session history is included.
