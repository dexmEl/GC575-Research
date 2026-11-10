# Firmware reverse-engineering findings

The principal baseline is `GC575_FW_1.1.7.1_20260604.img`, 2,498,016 bytes, SHA-256 `c51aab22540afc7e7d1fd053c4668509a4e3d161d2de3011f13c20d7fd0267e9`. Historical descriptor experiments used a separately reported installed build; the baseline image is not independently paired to the physical device. All positions below are file/section offsets unless explicitly identified as auxiliary analysis addresses.

## Container and independently readable resources

The DTUPIMG directory has 25 entries. LE32 count is at `0x28`; records begin at `0x80`, each `0x80` bytes. Each record contains a 16-byte name at +0, payload offset at +`0x10`, stored length at +`0x14`, type/flags at +`0x20`, and payload SHA-256 at +`0x60`. The [section inventory](evidence/firmware/sections.json) records exact offsets, lengths and hashes. All 25 payload hashes match their directory values.

The outer image header SHA-256 at `0x08..0x27` covers the directory-bearing range from `0x28` to the end of the entry table (`0xd00` for this baseline). A trailing 512-byte structure contains a 256-byte RSA signature followed by a 256-byte modulus. Exponent 65537 reproduces PKCS#1 v1.5 SHA-256 encoding over the pre-trailer bytes under the included public key. This establishes mathematical self-consistency; vendor trust, device enforcement and compatibility are separate questions. Recomputing directory hashes does not preserve that signature.

Readable resources include configuration/default tables, six wrapped USB descriptor templates, EDID data, color/HDR-related tables and nine fallback JPEG assets. These resources are useful independently of main-code recovery. Static JPEG dimensions and DQT tables describe fallback assets, not configurable live-encoder settings. Successful standalone descriptor programming is documented separately in [descriptor experiments](08-DESCRIPTOR-EXPERIMENTS.md); it does not establish that a modified full firmware image is accepted.

## Main payload: exact boundary, unresolved execution

The main `fw` section starts at outer `0xd00`, has length `0x226000` (2,252,800 bytes), and SHA-256 `10cd7322a0b8ea22281f5007f5dbe1af9056b9bc34a2686b80eb31222126ccd9`. Most populated regions have high entropy; padding and selected data patterns are identified. No verified main ISA, load address, entry point, decrypt/decompress transform or executable main-SoC dispatcher has been recovered. High entropy does not select between encryption, compression and other transforms.

The captured AT23 result `DB2059#1605` and exact request are absent from the bounded stored-byte search. This does not exclude runtime transformation, formatting, split strings or ROM data. No string-construction or AT23 handler address is established.

The host updater path transfers original selected section bytes in chunks up to `0x1000`. The inspected path does not identify a main-payload decoder. Its byte preservation localizes an unresolved boundary; it does not prove where or how the device interprets the bytes.

## Auxiliary Cortex-M code: real recovery, separate subsystem

Both raw auxiliary binaries have coherent Cortex-M Thumb vectors/code with base-zero analysis. Their [source identities and vectors](evidence/firmware/auxiliary-identities.json) are included. Analysis addresses below equal raw file offsets under that base; they are not Realtek main-SoC addresses.

| Component | Recovered path | Interpretation and limit |
|---|---|---|
| ENE | `0xbe4` reads setup bytes from `0x40001c18..0x40001c1f` → `0xb6c` | Auxiliary USB setup dispatch |
| ENE | `0xb6c`, request `0x87`, index 4/5 → descriptor data `0x13b6` / `0x13de` | Microsoft OS/WINUSB-like descriptor handling |
| ENE | `0xb6c`, vendor requests `0x80/0x81` → `0xf28/0x1104` | Apparent auxiliary memory transfer; not a validated diagnostic interface |
| ENE | `0x4418` → `0x4648` | HID/report mode and color handling; no capture rectangle established |
| MCU | `0x12b8` → state bank `0x200000ec` | I²C slave/state interface |
| MCU | `0x15fc`, switch `0x1628` → `0x1652/0x1676` → `0x1f2c/0x1e10` | LED/peripheral state paths |
| MCU | `0xf78` → `0xd6c/0xd28` → `0x2644/0x2602` → `0x2be6/0x2b08` | Auxiliary version access through software I²C |
| MCU | `0x27c8`, state+`0x19 == 0xc0` | Persistence/update lead; not a normal capture-control path |

The retained analysis recovered 143 MCU and 233 ENE functions. [MCU instructions/xrefs](evidence/firmware/mcu-control-trace.txt), [switch reconstruction](evidence/firmware/mcu-recovered-switch.txt), and [ENE instructions/xrefs](evidence/firmware/ene-control-trace.txt) support review without a Ghidra database. Auxiliary USB, reset and I²C routines must not be substituted for the main UVC video receiver or AT dispatcher.

## Rescue cryptographic record

The 131,072-byte RESCUE payload has SHA-256 `fe4fc491aceac004f5a21618a6360133656a73618e7418c4188db5d8bb97e5b6`. Relative offsets `0xfc00`, `0xfd00`, `0xfe00` contain 256-byte big-endian N, Montgomery R² and signature S. The exact relation `R² = 2^4096 mod N` holds; `S^65537 mod N` recovers well-formed PKCS#1 v1.5 SHA-256 DigestInfo. The carried digest is `70522daa4c6545b6c20425143ec46bbaf5d9539d9a87255ecf89e8997283c52d`.

The digest has not been bound to the tested raw payload ranges or a verified transform. Therefore this inner record does not establish payload integrity, decryption, device trust or executable-loader architecture. [Exact record bytes and mathematics](evidence/firmware/rescue-inner-record.json) are included. The inner modulus differs from the outer container modulus.

## Cross-image structural comparison

The preserved GC575 and GC553G2 main payloads share the first 240 bytes and one exact 96 KiB nonconstant range at relative `0x130000..0x147fff`. Equal-byte run starts in the main body follow an observed 48 KiB grid, with ends aligned to 16 bytes. This is a comparison pattern, not a proved block size, cipher, ISA or loader layout.

The compared rescue containers have different hashes but identical complete RESCUE payloads; differences are outer timestamp/hash/signature metadata. Shared rescue content does not prove cross-device compatibility. [Structural comparison evidence](evidence/firmware/loader-structure.json) and the [bounded host key search](evidence/firmware/loader-key-host-search.json) retain the exact identities and search limits.

The next missing static link is a verified consumer of the rescue record or a matching main-payload transform, followed by an established executable mapping. Firmware opacity does not block using already verified host/XU transport and descriptor findings.
