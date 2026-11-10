# Vendor DLL reverse-engineering findings

The recovered code provides concrete host-side request construction and backend selection. It is not a device firmware implementation. Addresses below are preferred Windows PE VAs; x86/x64 vtable offsets and object layouts are not interchangeable.

## Source identities

| Artifact/build | SHA-256 |
|---|---|
| Streaming Center `avtsdk.dll` x64 | `fce2953c0ef9e1d35f180448d712c3d83ebaa01c404850ea65e6193071038dd0` |
| Installed `RTICE_SDK_x64.dll` | `d9fb4935318664bd5fada38f3e705dcf97a4b7fbd581f27f3b70d7d28392c826` |
| Installed `RTK_IO_x64.dll` | `b5c60027e04979106e37567bb35274c9ebeeb6f05c6e1037a6e58991d881a1c7` |
| Updater `RTK_IO_x86.dll` | `ff92321af82a24a107bc2f31fd05a1a455c02b9477cedab1f66b37d38c50c382` |
| Assist `avtsdk.dll` x64, distinct build | `0b4109cbfe0f16d1cab30adaa4603ba02059c6ba06c8d2bdab64cd5865b1d9d4` |

The [export inventory](evidence/sdk-functions.csv) and [command catalog](evidence/command-catalog.json) retain further build identities and source locations. A 104-wrapper x86/x64 comparison found matching literal AT IDs; it does not establish identical complete payloads, side effects or state gates. The [comparison evidence](evidence/vendor-dlls/at-semantic-comparison.json) preserves that scope.

## Normal application backend selection

Streaming Center imports `avtsdk`, which imports the Realtek libraries. In the inspected GC575 record, generic-XU backend row+`0x1c` is 0, Realtek backend row+`0x7b` is 1, and main-version capability row+`0x46` is 1. Generic-XU rejection therefore does not disable the separate Realtek command transport. Assist uses a different row layout and cannot inherit these offsets.

| Operation | Host call path |
|---|---|
| Open | `avtsdk 0x1800632c0` → `0x180095be0` → RTK constructor `0x1800c77c0` → vslot+8 `0x1800ccfa0` |
| State | `0x18004fd70` → `0x18007d630` → backend `0x1800c8360`; stable query, then raw timing only if stable=1 |
| Main version | `0x18005d160` → `0x18008d080` → backend `0x1800cac60` → RTICE `AT_Get_System_Info` |
| Device selection | `0x1800cd240` → closePort / setDevice / openPort when cached selection differs |

The main-version path uses AT23, rather than simply returning the customer-version resource. Open/state paths can include other queries and auxiliary HID behavior; they are not equivalent to one isolated read. [Backend methods](evidence/vendor-dlls/sdk-rtk-methods.c), [selection](evidence/vendor-dlls/sdk-device-selection.c), [record gates](evidence/vendor-dlls/gc575-gates.json) and [vtable reads](evidence/vendor-dlls/vtable-slots.json) are included.

## AT dispatch resolved through concrete vtables

For the identified x86 RTD2801 host class:

```text
rtk_sendATCommand
 → host forwarder 0x6b42ab20
 → CIoInstance slot +0x2f4 = 0x6b428ca0
 → prepend command ID LE32 to payload
 → protocol slot +0x124 = 0x6b38b1f0
 → frame / exchange / current port
```

The protocol object selection is part of the evidence; arbitrary similarly named classes are not assumed equivalent. [Exact assembly, pointers and pseudocode](evidence/vendor-dlls/host-dispatch-boundary.txt) identify this as host forwarding, not a firmware loader or receiving AT dispatcher.

## x64 UVC/KS implementation

RTICE `setDevice` at `0x18000fc30` selects the UVC extension transport before device selection. The RTK type-6 port uses a lazy QextUVCPort and submits a 32-byte `KSP_NODE` to `IKsControl::KsProperty`.

Primary send sets property 2 with LE16 length, then property 1 with protocol data. Primary receive checks property 2, then gets property 1 into a 512-byte host buffer and caches actual returned bytes. Host capacity is not USB `wLength`: the independent AT23 capture transfers a 17-byte response. The wire mapping is independently documented in [verified transport](01-VERIFIED-TRANSPORT.md).

Included sources: [RTICE selection](evidence/vendor-dlls/rtice-selection-x64.c), [UVC port](evidence/vendor-dlls/uvc-port-x64.c), [bridge](evidence/vendor-dlls/uvc-bridge-x64.c), [KS boundary](evidence/vendor-dlls/ks-boundary-x64.c).

## RBUS and I²C: layouts recovered, execution scope unresolved

Both inspected RTK architectures implement `D0 05 <normalized address:BE32> 01 LRC` for a single-word RBUS request. Response words are big-endian, without an AT result prefix. SDK success can follow a short body; a strict implementation must check actual length before claiming a full word.

The byte-reader helper can conditionally write `0x1801a7ec`, set bit `0x10000000`, read, and restore, with failure capable of bypassing restoration. Those values describe a recovered internal workaround, not a proposed register target. Field provenance separates chip type, protocol ID and connection type. Cold chip54/protocol36 excludes the particular chip45/protocol25 branch while that state persists; reused instances and other initialization effects remain unresolved.

The separate I²C sender pads/truncates frames to 150 bytes, transmits through ordinary selectors 2/1 and reads through the alternate selector-3 path. External MCU AT1b/1c can carry arbitrary outgoing bus bytes. Getter naming does not establish read-only behavior.

[RBUS/I²C evidence](evidence/vendor-dlls/rbus-i2c-evidence.json), [reader implementation](evidence/vendor-dlls/rbus-x64-deep.c) and [branch provenance](evidence/vendor-dlls/rbus-branch-source-audit.json) are included. A recovered legacy report separately claims live RBUS use; raw exchanges and side-effect context have not been reconciled with this evidence set. No safe register allowlist is established by this export.

## Other recovered surfaces

- [MJPEG quality](02-MJPEG-QUALITY.md): actual GET/modify/SET nibble mapping and two disabled GC575 generic gates; no Realtek quality fallback identified.
- [Audio controls](05-AUDIO-CONTROLS.md): actual dynamic symbol resolution, named SDK mutex, and possible automatic non-PCM enable. [Internal helper code](evidence/vendor-dlls/official-audio-helper-internal.c) is included.
- [Descriptor programming](08-DESCRIPTOR-EXPERIMENTS.md): successful historical standalone resource burn, private-reader name correction, profile reselection and physical readback.
- Updater: identified section/chunk forwarders preserve selected payload bytes. Transfer framing is separate from a main-firmware decoder. No updater execution was used to prepare this export.

The practical reusable result is the combination of transport framing, exact buffer layouts, build-specific gates and observed hardware correlation. Full vendor initialization, guessed C++ layouts and incomplete decompiler prototypes should not be copied as a clean standalone control contract.
