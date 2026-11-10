// FUNCTION 1800cd240 FUN_1800cd240
// XREF 18025ae18 null
// XREF 1800c7925 FUN_1800c78d0
// XREF 1800c9249 FUN_1800c9210
// XREF 1800c81a1 FUN_1800c8170
// XREF 1800c8245 FUN_1800c8200
// XREF 1800c8301 FUN_1800c82d0
// XREF 1800c83b6 FUN_1800c8360
// XREF 1800c8c11 FUN_1800c8be0
// XREF 1800c9be0 FUN_1800c9bb0
// XREF 1800c9c90 FUN_1800c9c60
// XREF 1800c9d51 FUN_1800c9d20
// XREF 1800c9de0 FUN_1800c9db0
// XREF 1800c9eee FUN_1800c9eb0
// XREF 1800c9fbe FUN_1800c9f80
// XREF 1800ca0af FUN_1800ca070
// XREF 1800ca1a1 FUN_1800ca170
// XREF 1800ca23e FUN_1800ca200
// XREF 1800ca301 FUN_1800ca2d0
// XREF 1800ca3d2 FUN_1800ca380
// XREF 1800ca7e5 FUN_1800ca7a0
// XREF 1800caa2e FUN_1800ca9f0
// XREF 1800caafe FUN_1800caac0
// XREF 1800cabf0 FUN_1800cabb0
// XREF 1800caca5 FUN_1800cac60
// XREF 1800cad8e FUN_1800cad50
// XREF 1800cae5e FUN_1800cae20
// XREF 1800caf5f FUN_1800caf10
// XREF 1800cb0af FUN_1800cb070
// XREF 1800cca0f FUN_1800cc9e0
// XREF 1800cdc39 FUN_1800cdc00
// XREF 1800cd7c8 FUN_1800cd790
// XREF 1800cd859 FUN_1800cd820
// XREF 1800cdba8 FUN_1800cdb70
// XREF 1800cf929 FUN_1800cf8f0
// XREF 1800cf9f8 FUN_1800cf9a0
// XREF 1800cfa88 FUN_1800cfa50
// XREF 1800cfb9e FUN_1800cfae0
// XREF 1800cfc49 FUN_1800cfc10
// XREF 1800cfce0 FUN_1800cfcb0
// XREF 1800cfe59 FUN_1800cfe20
// XREF 1800cfee1 FUN_1800cfeb0
// XREF 1800cff88 FUN_1800cff50
// XREF 1800d0422 FUN_1800d03d0
// XREF 1800d0c91 FUN_1800d0c60
// XREF 1800d1009 FUN_1800d0fd0
// XREF 1800d10a9 FUN_1800d1070
// XREF 1800d1232 FUN_1800d11f0
// XREF 1800d12e9 FUN_1800d12b0
// XREF 1800d1380 FUN_1800d1350
// XREF 1800d1528 FUN_1800d14c0
// XREF 1800d1668 FUN_1800d1630

undefined8 FUN_1800cd240(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *_Buf2;
  
  if (*(char *)(param_1 + 0x128) == '\0') {
    return 0xfffffff5;
  }
  if ((DAT_180253020 == *(int *)(param_1 + 0xa0)) && (DAT_180253024 == *(int *)(param_1 + 0xa4))) {
    _Buf2 = (void *)(param_1 + 0xa8);
    if (0xf < *(ulonglong *)(param_1 + 0xc0)) {
      _Buf2 = *(void **)(param_1 + 0xa8);
    }
    puVar3 = &DAT_18024ddd0;
    if (0xf < DAT_18024dde8) {
      puVar3 = DAT_18024ddd0;
    }
    if (DAT_18024dde0 != *(size_t *)(param_1 + 0xb8)) goto LAB_1800cd2d7;
    iVar1 = memcmp(puVar3,_Buf2,DAT_18024dde0);
    if (iVar1 != 0) goto LAB_1800cd2d7;
LAB_1800cd37d:
    uVar2 = 0;
  }
  else {
LAB_1800cd2d7:
    closePort();
    FUN_1800c7aa0(param_1,100);
    puVar3 = (undefined8 *)(param_1 + 0xa8);
    puVar4 = puVar3;
    if (0xf < *(ulonglong *)(param_1 + 0xc0)) {
      puVar4 = (undefined8 *)*puVar3;
    }
    iVar1 = setDevice(puVar4,0,*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
    FUN_1800c7aa0(param_1,100);
    if (iVar1 == 0) {
      iVar1 = openPort();
      FUN_1800c7aa0(param_1,100);
      if (iVar1 == 0) {
        DAT_180253020 = *(int *)(param_1 + 0xa0);
        DAT_180253024 = *(int *)(param_1 + 0xa4);
        if ((undefined8 **)puVar3 != &DAT_18024ddd0) {
          if (0xf < *(ulonglong *)(param_1 + 0xc0)) {
            puVar3 = (undefined8 *)*puVar3;
          }
          FUN_180005250(&DAT_18024ddd0,puVar3,*(undefined8 *)(param_1 + 0xb8));
        }
        goto LAB_1800cd37d;
      }
    }
    uVar2 = 0xfffffff5;
  }
  return uVar2;
}


