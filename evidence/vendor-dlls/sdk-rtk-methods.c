// FUNCTION 1800ccfa0 FUN_1800ccfa0
// XREF 18025ae0c null
// XREF 1801f0650 null

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1800ccfa0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong local_40 [2];
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_18024df98 ^ (ulonglong)auStack_68;
  local_48 = (longlong *)FUN_180184f54(0x30);
  plVar10 = (longlong *)0x0;
  plVar4 = plVar10;
  if (local_48 != (longlong *)0x0) {
    plVar4 = (longlong *)FUN_1800c1800(local_48,&DAT_18024ddb0);
  }
  *(longlong **)(param_1 + 0x98) = plVar4;
  local_48 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  pcVar5 = AVTSDK::AvtString::getString((AvtString *)(param_2 + 0x10));
  local_30 = 0;
  local_28 = 0xf;
  local_40[0] = 0;
  lVar9 = -1;
  do {
    lVar9 = lVar9 + 1;
  } while (pcVar5[lVar9] != '\0');
  FUN_180005250(local_40,pcVar5);
  uVar2 = FUN_180039620(local_40,param_1 + 0xa0,param_1 + 0xa4);
  if (0xf < local_28) {
    if (0xfff < local_28 + 1) {
      if (0x1f < (local_40[0] - *(longlong *)(local_40[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        FUN_1801b4328(*(longlong *)(local_40[0] + -8),local_28 + 0x28);
      }
    }
    thunk_FUN_1801b8da8();
  }
  plVar6 = (longlong *)(ulonglong)uVar2;
  if (uVar2 != 0) goto LAB_1800cd200;
  if (DAT_180253028 == '\0') {
    iVar3 = initialize();
    if (iVar3 != 0) {
      plVar6 = (longlong *)0xffffffff;
      goto LAB_1800cd200;
    }
    DAT_180253028 = '\x01';
  }
  iVar3 = FUN_180038bb0(param_2);
  if (*(char *)(param_1 + 0x44) == '\0') {
    *(undefined8 *)(param_1 + 200) = 0;
  }
  else {
    if (iVar3 == 0xe) {
      uVar8 = 0xf535;
LAB_1800cd112:
      plVar6 = (longlong *)hid_enumerate(0x7ca,uVar8);
    }
    else {
      if (iVar3 == 0x11) {
        uVar8 = 0xd553;
        goto LAB_1800cd112;
      }
      plVar6 = plVar10;
      if (iVar3 == 0x17) {
        uVar8 = 0xe575;
        goto LAB_1800cd112;
      }
    }
    *(undefined8 *)(param_1 + 200) = 0;
    plVar7 = plVar6;
    if (plVar6 == (longlong *)0x0) {
LAB_1800cd168:
      hid_free_enumeration(plVar6);
    }
    else {
      do {
        if (((short)plVar7[6] == -0x8e) || ((short)plVar7[6] == -0xff)) {
          uVar8 = hid_open_path(*plVar7);
          *(undefined8 *)(param_1 + 200) = uVar8;
          goto LAB_1800cd168;
        }
        plVar1 = plVar7 + 7;
        plVar7 = (longlong *)*plVar1;
      } while ((longlong *)*plVar1 != (longlong *)0x0);
      hid_free_enumeration(plVar6);
    }
  }
  *(undefined1 *)(param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  *(undefined1 *)(param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0xfc) = 0;
  *(undefined1 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 8;
  lVar9 = _Xtime_get_ticks();
  *(longlong *)(param_1 + 0x120) = lVar9 / 10000;
  *(undefined1 *)(param_1 + 0x128) = 1;
  plVar6 = plVar10;
LAB_1800cd200:
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return plVar6;
}


// FUNCTION 1800c8360 FUN_1800c8360
// XREF 18025ac74 null
// XREF 1801f0660 null

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1800c8360(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  DWORD DVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined1 auStack_4e8 [32];
  undefined4 local_4c8;
  longlong *local_4c0;
  char local_4b8;
  char local_4b7;
  char local_4b6 [2];
  int local_4b4;
  longlong *local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  ulonglong local_480;
  char local_478 [4];
  char local_474 [2];
  undefined1 local_472;
  undefined8 local_470;
  ulonglong local_468;
  longlong local_460 [2];
  undefined8 local_450;
  ulonglong local_448;
  char local_438 [1024];
  ulonglong local_38;
  
  local_38 = DAT_18024df98 ^ (ulonglong)auStack_4e8;
  plVar1 = *(longlong **)(param_1 + 0x98);
  local_4b0 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  iVar4 = FUN_1800cd240();
  if (iVar4 != 0) goto LAB_1800c8944;
  *param_2 = 2;
  local_4b6[0] = '\0';
  if (*(char *)(param_1 + 0x68) != '\0') {
    iVar4 = AT_GPIO_Get_Param(1,2,local_4b6);
    if (iVar4 != 0) {
      iVar4 = -1;
      goto LAB_1800c8944;
    }
    FUN_1800c7aa0(param_1,100);
  }
  local_4b7 = '\0';
  if ((*(char *)(param_1 + 0x6a) != '\0') || (*(char *)(param_1 + 0x69) != '\0')) {
    iVar4 = AT_GPIO_Get_Param(1,0,&local_4b7);
    if (iVar4 != 0) {
      iVar4 = -1;
      goto LAB_1800c8944;
    }
    FUN_1800c7aa0(param_1,100);
  }
  *(bool *)(param_2 + 0xf) = local_4b6[0] == '\x01';
  *(bool *)((longlong)param_2 + 0x3d) = local_4b7 == '\x01';
  *(bool *)((longlong)param_2 + 0x3e) = local_4b7 == '\x01';
  FUN_1800c7aa0(param_1,100);
  FUN_1800c7aa0(param_1,100);
  FUN_1800c7aa0(param_1,100);
  FUN_1800c7aa0(param_1,100);
  FUN_1800c7aa0(param_1,100);
  FUN_1800c7aa0(param_1,100);
  uVar9 = 0;
  local_4b4 = 0;
  iVar4 = AT_HdmiRX_Get_VideoStable(&local_4b4);
  FUN_1800c7aa0(param_1,100);
  if (iVar4 != 0) {
    iVar4 = -1;
    goto LAB_1800c8944;
  }
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_498 = 0;
  uStack_490 = 0;
  local_488 = 0;
  if (local_4b4 == 1) {
    iVar4 = AT_HdmiRX_GetRawTimingInfo(&local_4a8);
    FUN_1800c7aa0(param_1,100);
    if (iVar4 != 0) {
      iVar4 = -1;
      goto LAB_1800c8944;
    }
  }
  if (((ushort)uStack_4a0 == 0) || (local_4a8._6_2_ == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_2 + 1) = uVar3;
  param_2[2] = (uint)(ushort)uStack_4a0;
  param_2[3] = (uint)local_4a8._6_2_;
  *(byte *)(param_2 + 4) = ~(byte)local_4a8 & 1;
  if ((local_4a8 & 1) != 0) {
    param_2[3] = (uint)local_4a8._6_2_ + (uint)local_4a8._6_2_;
  }
  if ((ushort)(uStack_4a0._6_2_ - 0xb55) < 0x62) {
    iVar4 = 0xbb5;
  }
  else if ((ushort)(uStack_4a0._6_2_ + 0xe8f3) < 0x61) {
    iVar4 = 0x176a;
  }
  else if ((ushort)(uStack_4a0._6_2_ - 0x8fd) < 99) {
    iVar4 = 0x95e;
  }
  else {
    iVar4 = (int)((double)uStack_4a0._6_2_ / _DAT_1801f0a80 + DAT_1801eb710) * 100;
  }
  param_2[5] = iVar4;
  if (*(char *)(param_1 + 0x39) == '\0') {
    param_2[6] = 0;
  }
  else if (uStack_490._3_1_ == '\0') {
    if (uStack_490._1_1_ == '\0') {
      param_2[6] = (uStack_490._2_1_ == '\x02') + 1;
    }
    else {
      param_2[6] = (uStack_490._2_1_ == '\x02') + 3;
    }
  }
  else if (uStack_490._3_1_ == '\x01') {
    uVar5 = 5;
    if (uStack_490._2_1_ == '\x02') {
      uVar5 = 9;
    }
    param_2[6] = uVar5;
  }
  else if (uStack_490._3_1_ == '\x02') {
    uVar5 = 6;
    if (uStack_490._2_1_ == '\x02') {
      uVar5 = 10;
    }
    param_2[6] = uVar5;
  }
  else if (uStack_490._3_1_ == '\x03') {
    param_2[6] = 7;
  }
  else if (uStack_490._3_1_ == '\x04') {
    param_2[6] = 8;
  }
  else if (uStack_490._3_1_ == '\x05') {
    param_2[6] = 0xb;
  }
  else if (uStack_490._3_1_ == '\x06') {
    param_2[6] = 0xc;
  }
  else if (uStack_490._3_1_ == '\a') {
    param_2[6] = 0xd;
  }
  if (*(char *)(param_1 + 0x7b) == '\0') {
    param_2[0xd] = 1;
  }
  else if (local_4a8._1_1_ == '\x01') {
    param_2[0xd] = 2;
  }
  else {
    uVar5 = 1;
    if (local_4a8._1_1_ == '\x02') {
      uVar5 = 3;
    }
    param_2[0xd] = uVar5;
  }
  if (*(char *)(param_1 + 0x3c) == '\0') {
    iVar4 = 1;
  }
  else {
    iVar4 = ((byte)(uStack_490._5_1_ - 1U) < 2) + 1;
  }
  param_2[7] = iVar4;
  if (*(char *)(param_1 + 0x3a) == '\0') {
    param_2[9] = 0;
  }
  else if ((char)uStack_490 == '\x04') {
    param_2[9] = 1;
  }
  else if ((char)uStack_490 == '\0') {
    param_2[9] = 2;
  }
  else if ((char)uStack_490 == '\x01') {
    param_2[9] = 3;
  }
  else if ((char)uStack_490 == '\x02') {
    param_2[9] = 4;
  }
  else if ((char)uStack_490 == '\x03') {
    param_2[9] = 5;
  }
  iVar4 = -1;
  if (*(char *)(param_1 + 0x3b) == '\0') {
LAB_1800c88a9:
    param_2[8] = 0;
  }
  else if (local_498._2_1_ == '\0') {
    param_2[8] = 1;
  }
  else {
    if (local_498._2_1_ != '\x10') {
      iVar7 = FUN_18001d010();
      if (1 < iVar7) {
        FUN_18000f920(local_438,0x3ff,"Only support HDR 10. [Dynamic Range: %d]",local_498._2_1_);
        local_450 = 0;
        local_448 = 0xf;
        local_460[0] = 0;
        lVar8 = -1;
        do {
          lVar2 = lVar8 + 1;
          lVar8 = lVar8 + 1;
        } while (local_438[lVar2] != '\0');
        FUN_180005250(local_460,local_438);
        local_468 = 0xf;
        local_470 = 0xe;
        local_480._0_1_ = s_getDeviceState_1801ec460[0];
        local_480._1_1_ = s_getDeviceState_1801ec460[1];
        local_480._2_1_ = s_getDeviceState_1801ec460[2];
        local_480._3_1_ = s_getDeviceState_1801ec460[3];
        local_480._4_1_ = s_getDeviceState_1801ec460[4];
        local_480._5_1_ = s_getDeviceState_1801ec460[5];
        local_480._6_1_ = s_getDeviceState_1801ec460[6];
        local_480._7_1_ = s_getDeviceState_1801ec460[7];
        local_478[0] = s_getDeviceState_1801ec460[8];
        local_478[1] = s_getDeviceState_1801ec460[9];
        local_478[2] = s_getDeviceState_1801ec460[10];
        local_478[3] = s_getDeviceState_1801ec460[0xb];
        local_474[0] = s_getDeviceState_1801ec460[0xc];
        local_474[1] = s_getDeviceState_1801ec460[0xd];
        local_472 = 0;
        DVar6 = GetCurrentThreadId();
        local_4c0 = local_460;
        local_4c8 = 0x1c6;
        FUN_18001dc80(2,DVar6,&DAT_18024dd90,&local_480);
        if (0xf < local_468) {
          if (0xfff < local_468 + 1) {
            if (0x1f < (local_480 - *(longlong *)(local_480 - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
              FUN_1801b4328(*(longlong *)(local_480 - 8),local_468 + 0x28);
            }
          }
          thunk_FUN_1801b8da8();
        }
        local_470 = 0;
        local_468 = 0xf;
        local_480 = local_480 & 0xffffffffffffff00;
        if (0xf < local_448) {
          if (0xfff < local_448 + 1) {
            if (0x1f < (local_460[0] - *(longlong *)(local_460[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
              FUN_1801b4328(*(longlong *)(local_460[0] + -8),local_448 + 0x28);
            }
          }
          thunk_FUN_1801b8da8();
        }
      }
      goto LAB_1800c88a9;
    }
    param_2[8] = 2;
  }
  param_2[10] = 0;
  if (*(char *)(param_1 + 0x3e) == '\0') {
    param_2[0xb] = 0;
  }
  else {
    local_4b8 = '\0';
    iVar7 = AT_Audio_Get_HdmiRX_AudioSamplingRate(&local_4b8);
    if (iVar7 != 0) goto LAB_1800c8944;
    FUN_1800c7aa0(param_1,100);
    if (local_4b8 == '\x01') {
      param_2[0xb] = 1;
    }
    else if (local_4b8 == '\x04') {
      param_2[0xb] = 2;
    }
    else {
      if (local_4b8 == '\a') {
        uVar9 = 3;
      }
      param_2[0xb] = uVar9;
    }
  }
  *param_2 = 0;
  if (*(char *)(param_1 + 0x8f) == '\0') {
    bVar10 = false;
  }
  else {
    iVar7 = AT_Audio_Get_HdmiRX_AudioFormat(&local_4b8);
    if (iVar7 != 0) goto LAB_1800c8944;
    FUN_1800c7aa0(param_1,100);
    bVar10 = local_4b8 == '\x14';
  }
  *(bool *)(param_2 + 0xc) = bVar10;
  iVar4 = 0;
LAB_1800c8944:
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return iVar4;
}


// FUNCTION 1800cac60 FUN_1800cac60
// XREF 18025ad88 null
// XREF 1801f06e8 null

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1800cac60(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_158 [32];
  longlong *local_138;
  char local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_18024df98 ^ (ulonglong)auStack_158;
  plVar1 = *(longlong **)(param_1 + 0x98);
  local_138 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  iVar3 = FUN_1800cd240(param_1);
  if (iVar3 == 0) {
    FUN_1801afe40(local_128,0,0x100);
    iVar3 = AT_Get_System_Info(local_128,0x100);
    if (iVar3 == 0) {
      FUN_1800c7aa0(param_1,100);
      lVar4 = -1;
      do {
        lVar2 = lVar4 + 1;
        lVar4 = lVar4 + 1;
      } while (local_128[lVar2] != '\0');
      FUN_180005250(param_2,local_128);
      iVar3 = 0;
    }
    else {
      iVar3 = -0xf;
    }
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return iVar3;
}


