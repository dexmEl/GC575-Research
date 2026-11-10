# Official audio-control path relevant to capture applications

The official AVerMedia OBS MultichannelAudio repository explicitly lists GC575. The pinned review used commit `7d1250b42e42f964b4fa3a6bcb7269cc09a1e798` of https://github.com/AVerMedia-Technologies-Inc/obs-MultichannelAudio.

Static analysis of its prebuilt `avt_device_opener.dll` established the actual dynamically resolved RTICE symbols below. This is stronger than a header-only association, but is not a GC575 hardware audio test.

| Helper method | Resolved RTICE symbol | Recovered host request |
|---|---|---|
| `getAudioFormat` | `AT_Audio_Get_HdmiRX_AudioFormat` | Service 1 AT04, empty payload |
| `getNonPcmOnOff` | `AT_Audio_CSR_Get_Send_Non_Pcm_Data_On_off` | Service 1 AT95, empty payload |
| `setNonPcmOnOff` | `AT_Audio_Send_Non_Pcm_Data` | Service 1 AT94, four-byte input |
| `getSerialNum` | `AT_USB_Get_SerialNum` | Service 1 AT50; output-size contract needs verification |

The helper dynamically loads `RTK_IO_x64` and `RTICE_SDK_x64` from its application/caller directory and uses a named `RTK_SDK_LOCK_NAME` mutex around sampled calls. The helper does not pin the hashes of DLLs loaded at runtime. Public signatures and host assembly must be checked together; decompiler placeholder function types are not reliable FFI declarations.

Initialization behavior: `SwitchDeviceThenDetectAudioFormat` can automatically call `setNonPcmOnOff(1)`. Consequently, the whole opener/monitor is not just passive format detection. Initialization and detection should be distinguished from an intentional audio-mode change when designing application behavior and logs.

The official OBS source decodes compressed audio through FFmpeg when its detected status indicates non-PCM. This offers a concrete integration reference for multichannel/non-PCM capture, but no GC575 audio-switch success, accepted codec list or passthrough behavior is claimed here. GC553G2 results from other projects do not verify GC575.

The wrapper reports version `1.0.49`; SHA-256 `7eccf391ac25e932bd36961fb278ea69f8501b2e557c3381cd290af374f37e6e` (65,024 bytes). No vendor DLL is included in this package.

Detailed project source: `research/OFFICIAL_AUDIO_WRAPPER_ANALYSIS.md`; exact retained decompilation: `phase3/analysis/official-device-opener.c` and `official-device-opener-internal.c`. No audio command was independently executed for this research.
