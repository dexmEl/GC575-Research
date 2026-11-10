// FUNCTION 6afa1a10 FUN_6afa1a10
// XREF 6b3fa234 null
// XREF 6af1c55c FUN_6af1c4f0

void FUN_6afa1a10(longlong param_1)

{
  FUN_6afa2b90(*(undefined8 *)(param_1 + 0x10));
  return;
}


// FUNCTION 6afa1a40 FUN_6afa1a40
// XREF 6b3fa258 null
// XREF 6af1d4e0 FUN_6af1d4a0

void FUN_6afa1a40(longlong param_1)

{
  FUN_6afa2fd0(*(undefined8 *)(param_1 + 0x10));
  return;
}


// FUNCTION 6af1c2f0 FUN_6af1c2f0
// XREF 6b3f7c3c null
// XREF 6af1c36b FUN_6af1c360
// XREF 6af1c394 FUN_6af1c390
// XREF 6af1c3bf FUN_6af1c3b0
// XREF 6af1c50e FUN_6af1c4f0
// XREF 6af1ca5e FUN_6af1ca40
// XREF 6af1cf8e FUN_6af1cf70
// XREF 6af1d4bc FUN_6af1d4a0
// XREF 6af1dd9c FUN_6af1dd80
// XREF 6af1e2fc FUN_6af1e2e0
// XREF 6af1f096 FUN_6af1f080
// XREF 6af1f996 FUN_6af1f980

longlong FUN_6af1c2f0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 800) != 0) {
    return *(longlong *)(param_1 + 800);
  }
  lVar1 = FUN_6b267bd0(0x18);
  FUN_6afa1700(lVar1,0);
  *(longlong *)(param_1 + 800) = lVar1;
  return lVar1;
}


