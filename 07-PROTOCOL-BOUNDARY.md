# Protocol, descriptor and address boundaries

## Device interface

The verified path in this export is USB Video Class control through a private Extension Unit. Windows `IKsControl` is the observed host API; the wire evidence identifies class/interface control transfers to XU entity 4 on VideoControl interface 0. No PCI BAR, DMA-engine or VFIO programming model has been recovered for GC575 by this investigation.

A Linux implementation could use an appropriate USB/UVC control interface for an established request contract. No Linux live execution is claimed here. Standard streaming negotiation and endpoint configuration require their own active descriptors and observations; the private command channel is not a complete video-capture implementation.

## AT framing recovered from the host SDK

The ordinary AT body is LE32(command ID) followed by caller payload. In the inspected class, the marker is `(service - 0x60) & 0xff`, producing `a1` for service 1 and `a0` for service 0. Let `L = 4 + payload length`.

- For `L < 127`, the three header bytes after the marker are `(L+2)&0x7f`, `00`, `00`.
- Otherwise they are `0x80 | ((L+1)>>8)`, `(L+1)&0xff`, `00`.
- The final checksum is `-sum(all previous bytes) & 0xff`.

The short-length mask has an anomalous boundary at body length 126; implementations should preserve and explicitly handle the recovered behavior rather than silently substituting a conventional length encoding. The included codec is offline source evidence, not a generic hardware sender.

The independent AT23 response has a different envelope length convention from the request. Use the included response decoder, not the request serializer in reverse. The common exchange checks marker/complement and checksum; an AT-specific prefix is then removed to expose SDK result bytes. RBUS uses its own big-endian body and must not have an AT result prefix removed. SDK protocol states, KS HRESULTs and USB completion status belong to distinct namespaces.

## Stored descriptor provenance

The [descriptor evidence](evidence/firmware-xu-match.json) comes from outer file offset `0x258f25` of `GC575_FW_1.1.7.1_20260604.img`, SHA-256 `c51aab22540afc7e7d1fd053c4668509a4e3d161d2de3011f13c20d7fd0267e9`.

```text
1c 24 06 04 c7 73 10 96 f7 49 f2 44 ab 42 e9 40
40 59 40 c2 11 01 03 03 0f fe 01 00
```

It declares entity 4, GUID `961073c7-49f7-44f2-ab42-e940405940c2`, 17 controls, source entity 3 and control bitmap `0f fe 01` (selectors 1–4 and 10–17). The GUID and selectors 1/2 have separate live capture corroboration. Advertisement of other selectors does not identify their handlers or payloads. The stored image is not independently paired to the installed unit.

## Address and implementation limits

SDK VAs and vtable offsets are host program locations. Firmware file offsets are positions in an artifact. Neither supplies a device execution address or register map. The receiving firmware dispatcher, main firmware ISA/load map and command-handler PCs remain unresolved.

A recovered host request, an advertised selector and a matching numeric command value are insufficient to bind protocols. Transport, service, GUID, selector, payload, response and observed effect must retain their separate identities.
