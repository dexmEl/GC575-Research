# Recovered host control reference

Except where explicitly marked captured, these are static SDK implementations, not tested GC575 commands. IDs are hexadecimal and service 1 unless specified. Getter names do not establish side-effect-free receiving behavior.

Source SDK: installed `RTICE_SDK_x64.dll`, SHA-256 `d9fb4935318664bd5fada38f3e705dcf97a4b7fbd581f27f3b70d7d28392c826`. Addresses below are preferred host PE VAs.

| AT ID | SDK operation / VA | Request payload | Recovered SDK result handling | Evidence |
|---|---|---|---|---|
| `23` | Get_System_Info / `0x180002cc0` | Empty | Observed NUL-terminated `DB2059#1605` | Captured and independently executed |
| `37` | HdmiRX_GetRawTimingInfo / `0x1800038c0` | Empty | Copies 40 bytes; field meanings not established here | Static; normal application calls after stable=1 |
| `38` | HdmiRX_Get_VideoStable / `0x180003980` | Empty | First LE32 | Static normal-application call path |
| `44` | UVC_Get_Output_Timing / `0x180003d40` | Empty | Copies 12 bytes; field names unresolved | Static |
| `45` | UVC_Get_VideoFormat / `0x180003df0` | Empty | Byte at SDK result+12 | Static; not the first result byte |
| `86` | HdmiRX_Video_Vfreq | Empty | Frequency-query candidate; units not specified here | Static |
| `1d` | UVC_Set_HDR_P010_OnOff / `0x180002b10` | u8 | Host send success only | Static setter; enum/persistence unknown |
| `1e` | UVC_Set_HDR_NV12_OnOff / `0x180002ba0` | u8 | Host send success only | Static setter; applicability unknown |
| `1f` | HDR2SDR_OnOff / `0x180002c30` | u8 | Host send success only | Static setter; applicability unknown |
| `79` | Get_ColorImetry / `0x180005f80` | Query u8, zero u8 | First result byte | Static; assembly confirms two input bytes |
| `7a` | Set_ColorImetry / `0x180006030` | Two bytes from caller buffer | Host send success only | Static; field meanings unknown |
| `7b` | Get_ColorRange / `0x1800060d0` | Query u8, zero u8 | First result byte | Static; assembly confirms two input bytes |
| `7c` | Set_ColorRange / `0x180006180` | Two bytes from caller buffer | Host send success only | Static; not a u64 immediate |
| `88` | Get_VRR_follow_mode / `0x180006760` | Empty | First result byte | Static |
| `89` | Set_VRR_follow_mode / `0x180006810` | u8 | Host send success only | Static setter; not a demonstrated mode unlock |
| `b0` | Set_USB_decription_Index / `0x180007120` | LE32(1), LE32(index) | Host success/error | Captured application startup setter; not independently replayed |
| `b1` | Get_USB_decription_Index / `0x1800071f0` | Empty | Byte at SDK result+4, zero-extended to u32 | Captured application startup query |

“SDK result” is after transport handling, not necessarily the start of the raw USB response. Return 0, USB success and a measured functional change are separate outcomes. The index-to-descriptor-template mapping is unresolved; index traffic alone does not establish a hidden format.

## Inventory coverage

The included [command catalog](evidence/command-catalog.json) records 229 literal dispatch sites across 119 transport/service/ID identities from four exact SDK binaries. The [export inventory](evidence/sdk-functions.csv) records 326 exports. These counts describe recovered host code, not supported device commands or complete indirect-dispatch coverage. Prototype candidates are not trusted FFI headers.

Selected timing/color/format source is included in [rtice-installed64.c](evidence/rtice-installed64.c). The central project retains exact byte spans and assembly in `phase3/analysis/capabilities/capability-evidence.json` and `phase3/analysis/rtice-x64-exports.asm.txt`.

## RBUS and external MCU boundary

The static single-word RBUS frame is `D0 05 <normalized address:BE32> 01 <LRC8>`, with additive checksum and a BE32 response word. It is a separate protocol from AT. No physical GC575 D0 response or side-effect-free register is established in the reconciled evidence set. A newly recovered legacy report claims earlier live RBUS reads; that separate claim awaits raw-log and side-effect review and is not validated by the descriptor recovery.

The SDK read helper can conditionally write an internal register and fail before restoring it. Proven cold chip/protocol state excludes that particular branch, but does not establish warm-instance state or the entire path as write-free. A readiness gate can require a stop state. No register address in this export is nominated for hardware probing.

The separate I²C/MCU sender constructs an AT frame then pads/truncates it to 150 bytes. Transmission uses selectors 2/1; alternate reception uses selector 3 with a 1024-byte host buffer rather than the ordinary pending-length sequence. AT1b/1c carry caller-controlled outgoing bus data. Their names do not make them read-only. No GC575 acceptance is captured.

Detailed project sources: `research/RBUS_ACCESS_ANALYSIS.md` and `research/RBUS_BRANCH_PROVENANCE.md`. A working XU transport does not establish a usable register-access or MCU-control interface.
