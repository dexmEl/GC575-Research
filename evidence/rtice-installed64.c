// FUNCTION 180002b10 AT_UVC_Set_HDR_P010_OnOff CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 180015bc0 FUN_180015bc0
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000001 rtk_openPort
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong AT_UVC_Set_HDR_P010_OnOff(undefined1 param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined1 local_228 [16];
  ulonglong local_218 [64];
  ulonglong local_18;
  
                    /* 0x2b10  120  AT_UVC_Set_HDR_P010_OnOff */
  local_18 = DAT_1800329e0 ^ (ulonglong)auStack_258;
  local_228[0] = param_1;
  FUN_180015bc0(local_218,0,0x200);
  uVar3 = 0;
  iVar1 = rtk_isOpen();
  if (iVar1 != 0) {
    uVar2 = rtk_openPort();
    uVar3 = uVar2 & 0xffffffff;
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  local_238 = 1;
  iVar1 = rtk_sendATCommand(0x1d,local_228,local_218,1);
  if (iVar1 < 0) {
    uVar3 = 10;
  }
  return uVar3;
}


// FUNCTION 180002ba0 AT_UVC_Set_HDR_NV12_OnOff CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 180015bc0 FUN_180015bc0
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000001 rtk_openPort
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong AT_UVC_Set_HDR_NV12_OnOff(undefined1 param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined1 local_228 [16];
  ulonglong local_218 [64];
  ulonglong local_18;
  
                    /* 0x2ba0  119  AT_UVC_Set_HDR_NV12_OnOff */
  local_18 = DAT_1800329e0 ^ (ulonglong)auStack_258;
  local_228[0] = param_1;
  FUN_180015bc0(local_218,0,0x200);
  uVar3 = 0;
  iVar1 = rtk_isOpen();
  if (iVar1 != 0) {
    uVar2 = rtk_openPort();
    uVar3 = uVar2 & 0xffffffff;
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  local_238 = 1;
  iVar1 = rtk_sendATCommand(0x1e,local_228,local_218,1);
  if (iVar1 < 0) {
    uVar3 = 10;
  }
  return uVar3;
}


// FUNCTION 180002c30 AT_HDR2SDR_OnOff CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 180015bc0 FUN_180015bc0
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000001 rtk_openPort
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong AT_HDR2SDR_OnOff(undefined1 param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined1 local_228 [16];
  ulonglong local_218 [64];
  ulonglong local_18;
  
                    /* 0x2c30  69  AT_HDR2SDR_OnOff */
  local_18 = DAT_1800329e0 ^ (ulonglong)auStack_258;
  local_228[0] = param_1;
  FUN_180015bc0(local_218,0,0x200);
  uVar3 = 0;
  iVar1 = rtk_isOpen();
  if (iVar1 != 0) {
    uVar2 = rtk_openPort();
    uVar3 = uVar2 & 0xffffffff;
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  local_238 = 1;
  iVar1 = rtk_sendATCommand(0x1f,local_228,local_218,1);
  if (iVar1 < 0) {
    uVar3 = 10;
  }
  return uVar3;
}


// FUNCTION 1800038c0 AT_HdmiRX_GetRawTimingInfo CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 180015bc0 FUN_180015bc0
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000001 rtk_openPort
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong AT_HdmiRX_GetRawTimingInfo(ulonglong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  ulonglong local_218;
  ulonglong uStack_210;
  ulonglong local_208;
  ulonglong uStack_200;
  ulonglong local_1f8;
  ulonglong local_18;
  
                    /* 0x38c0  71  AT_HdmiRX_GetRawTimingInfo */
  local_18 = DAT_1800329e0 ^ (ulonglong)auStack_248;
  FUN_180015bc0(&local_218,0,0x200);
  uVar3 = 0;
  iVar1 = rtk_isOpen();
  if (iVar1 != 0) {
    uVar2 = rtk_openPort();
    uVar3 = uVar2 & 0xffffffff;
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  local_228 = 1;
  iVar1 = rtk_sendATCommand(0x37,0,&local_218,0);
  if (iVar1 < 0) {
    uVar3 = 10;
  }
  else if ((int)uVar3 == 0) {
    *param_1 = local_218;
    param_1[1] = uStack_210;
    param_1[2] = local_208;
    param_1[3] = uStack_200;
    param_1[4] = local_1f8;
  }
  return uVar3;
}


// FUNCTION 180003980 AT_HdmiRX_Get_VideoStable CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 180015bc0 FUN_180015bc0
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000001 rtk_openPort
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 AT_HdmiRX_Get_VideoStable(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined4 local_218 [128];
  ulonglong local_18;
  
                    /* 0x3980  75  AT_HdmiRX_Get_VideoStable */
  local_18 = DAT_1800329e0 ^ (ulonglong)auStack_248;
  FUN_180015bc0((ulonglong *)local_218,0,0x200);
  iVar1 = rtk_isOpen();
  if ((iVar1 == 0) || (uVar2 = rtk_openPort(), (int)uVar2 == 0)) {
    local_228 = 1;
    iVar1 = rtk_sendATCommand(0x38,0,local_218,0);
    if (iVar1 < 0) {
      uVar2 = 10;
    }
    else {
      *param_1 = local_218[0];
      uVar2 = 0;
    }
  }
  return uVar2;
}


// FUNCTION 180003ca0 AT_HdmiTX_Get_EDID_Valid CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 180015bc0 FUN_180015bc0
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000001 rtk_openPort
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 AT_HdmiTX_Get_EDID_Valid(undefined1 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined1 local_218 [512];
  ulonglong local_18;
  
                    /* 0x3ca0  77  AT_HdmiTX_Get_EDID_Valid */
  local_18 = DAT_1800329e0 ^ (ulonglong)auStack_248;
  FUN_180015bc0((ulonglong *)local_218,0,0x200);
  iVar1 = rtk_isOpen();
  if ((iVar1 == 0) || (uVar2 = rtk_openPort(), (int)uVar2 == 0)) {
    local_228 = 1;
    iVar1 = rtk_sendATCommand(0x43,0,local_218,0);
    if (iVar1 < 0) {
      uVar2 = 10;
    }
    else {
      *param_1 = local_218[0];
      uVar2 = 0;
    }
  }
  return uVar2;
}


// FUNCTION 180003d40 AT_UVC_Get_Output_Timing CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 180015bc0 FUN_180015bc0
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000001 rtk_openPort
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 AT_UVC_Get_Output_Timing(ulonglong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  ulonglong local_218;
  undefined4 local_210;
  ulonglong local_18;
  
                    /* 0x3d40  117  AT_UVC_Get_Output_Timing */
  local_18 = DAT_1800329e0 ^ (ulonglong)auStack_248;
  FUN_180015bc0(&local_218,0,0x200);
  iVar1 = rtk_isOpen();
  if ((iVar1 == 0) || (uVar2 = rtk_openPort(), (int)uVar2 == 0)) {
    local_228 = 1;
    iVar1 = rtk_sendATCommand(0x44,0,&local_218,0);
    if (iVar1 < 0) {
      uVar2 = 10;
    }
    else {
      *param_1 = local_218;
      *(undefined4 *)(param_1 + 1) = local_210;
      uVar2 = 0;
    }
  }
  return uVar2;
}


// FUNCTION 180003df0 AT_UVC_Get_VideoFormat CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 180015bc0 FUN_180015bc0
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000001 rtk_openPort
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 AT_UVC_Get_VideoFormat(undefined1 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  ulonglong local_218;
  undefined1 local_20c;
  ulonglong local_18;
  
                    /* 0x3df0  118  AT_UVC_Get_VideoFormat */
  local_18 = DAT_1800329e0 ^ (ulonglong)auStack_248;
  FUN_180015bc0(&local_218,0,0x200);
  iVar1 = rtk_isOpen();
  if ((iVar1 == 0) || (uVar2 = rtk_openPort(), (int)uVar2 == 0)) {
    local_228 = 1;
    iVar1 = rtk_sendATCommand(0x45,0,&local_218,0);
    if (iVar1 < 0) {
      uVar2 = 10;
    }
    else {
      *param_1 = local_20c;
      uVar2 = 0;
    }
  }
  return uVar2;
}


// FUNCTION 180004390 AT_EDID_Set_EDID_mode CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 180015bc0 FUN_180015bc0
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000001 rtk_openPort
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong AT_EDID_Set_EDID_mode(undefined4 param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined4 local_228 [4];
  ulonglong local_218 [64];
  ulonglong local_18;
  
                    /* 0x4390  45  AT_EDID_Set_EDID_mode */
  local_18 = DAT_1800329e0 ^ (ulonglong)auStack_258;
  local_228[0] = param_1;
  FUN_180015bc0(local_218,0,0x200);
  uVar3 = 0;
  iVar1 = rtk_isOpen();
  if (iVar1 != 0) {
    uVar2 = rtk_openPort();
    uVar3 = uVar2 & 0xffffffff;
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  local_238 = 1;
  iVar1 = rtk_sendATCommand(0x4d,local_228,local_218,4);
  if (iVar1 < 0) {
    uVar3 = 10;
  }
  return uVar3;
}


// FUNCTION 180004420 AT_EDID_Get_EDID_mode CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 180015bc0 FUN_180015bc0
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000001 rtk_openPort
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 AT_EDID_Get_EDID_mode(undefined1 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined1 local_218 [512];
  ulonglong local_18;
  
                    /* 0x4420  43  AT_EDID_Get_EDID_mode */
  local_18 = DAT_1800329e0 ^ (ulonglong)auStack_248;
  FUN_180015bc0((ulonglong *)local_218,0,0x200);
  iVar1 = rtk_isOpen();
  if ((iVar1 == 0) || (uVar2 = rtk_openPort(), (int)uVar2 == 0)) {
    local_228 = 1;
    iVar1 = rtk_sendATCommand(0x4e,0,local_218,0);
    if (iVar1 < 0) {
      uVar2 = 10;
    }
    else {
      *param_1 = local_218[0];
      uVar2 = 0;
    }
  }
  return uVar2;
}


// FUNCTION 1800047b0 AT_EDID_Flash_Get_table CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 1800129a0 memcpy
// CALL 180015bc0 FUN_180015bc0
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000001 rtk_openPort
// CALL EXTERNAL:00000018 rtk_isOpen
// CALLER 180004970 AT_EDID_Flash_Set_table

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001800047e7) */

int AT_EDID_Flash_Get_table(byte param_1,longlong param_2,ushort param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  undefined1 auStack_488 [32];
  undefined4 local_468;
  int local_458;
  undefined8 local_448;
  ulonglong local_248 [64];
  ulonglong local_48;
  
                    /* 0x47b0  40  AT_EDID_Flash_Get_table */
  local_48 = DAT_1800329e0 ^ (ulonglong)auStack_488;
  if ((param_3 & 0x1f) == 0) {
    iVar2 = 0;
    FUN_180015bc0(&local_448,0,0x200);
    iVar5 = 0;
    local_458 = (int)((param_3 - 1) + ((int)(param_3 - 1) >> 0x1f & 0x7fU)) >> 7;
    iVar1 = local_458 + 1;
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        uVar6 = 0x80;
        local_448._0_2_ = (ushort)param_1 * 0x200 + (short)iVar5 * 0x80;
        if (iVar5 == local_458) {
          uVar6 = param_3 + (short)iVar5 * -0x80;
        }
        local_448._2_2_ = uVar6;
        FUN_180015bc0(local_248,0,0x200);
        iVar3 = 0;
        iVar2 = rtk_isOpen();
        if ((iVar2 == 0) || (iVar3 = rtk_openPort(), iVar3 == 0)) {
          local_468 = 1;
          iVar2 = rtk_sendATCommand(0x54,&local_448,local_248,4);
          if (iVar2 < 0) {
            iVar3 = 10;
          }
        }
        if (iVar3 != 0) {
          return iVar3;
        }
        memcpy((void *)(iVar4 + param_2),local_248,(ulonglong)uVar6);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x80;
        iVar2 = 0;
      } while (iVar5 < iVar1);
    }
  }
  else {
    iVar2 = 0x11;
  }
  return iVar2;
}


// FUNCTION 180004970 AT_EDID_Flash_Set_table CONVENTION __fastcall
// CALL 1800129a0 memcpy
// CALL 180015bc0 FUN_180015bc0
// CALL 1800108f4 thunk_FUN_180012d8c
// CALL 1800047b0 AT_EDID_Flash_Get_table
// CALL 180012cd4 free
// CALL EXTERNAL:00000015 rtk_burnEDID

/* WARNING: Removing unreachable block (ram,0x000180004994) */

int AT_EDID_Flash_Set_table(byte param_1,void *param_2,ushort param_3)

{
  int iVar1;
  ulonglong *_Memory;
  
                    /* 0x4970  42  AT_EDID_Flash_Set_table */
  if ((param_3 & 0x1f) == 0) {
    _Memory = (ulonglong *)thunk_FUN_180012d8c(0xe00);
    FUN_180015bc0(_Memory,0,0xe00);
    iVar1 = AT_EDID_Flash_Get_table(0,(longlong)_Memory,0xe00);
    if (iVar1 == 0) {
      memcpy((void *)((longlong)(int)((uint)param_1 << 9) + (longlong)_Memory),param_2,
             (ulonglong)param_3);
      iVar1 = rtk_burnEDID(_Memory,0xe00);
      free(_Memory);
    }
    else {
      free(_Memory);
    }
    return iVar1;
  }
  return 0x11;
}


// FUNCTION 180004a50 AT_EDID_Flash_Set_Default_table CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 180015bc0 FUN_180015bc0
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000001 rtk_openPort
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong AT_EDID_Flash_Set_Default_table(undefined1 param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined1 local_228 [16];
  ulonglong local_218 [64];
  ulonglong local_18;
  
                    /* 0x4a50  41  AT_EDID_Flash_Set_Default_table */
  local_18 = DAT_1800329e0 ^ (ulonglong)auStack_258;
  local_228[0] = param_1;
  FUN_180015bc0(local_218,0,0x200);
  uVar3 = 0;
  iVar1 = rtk_isOpen();
  if (iVar1 != 0) {
    uVar2 = rtk_openPort();
    uVar3 = uVar2 & 0xffffffff;
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  local_238 = 1;
  iVar1 = rtk_sendATCommand(0x55,local_228,local_218,1);
  if (iVar1 < 0) {
    uVar3 = 10;
  }
  return uVar3;
}


// FUNCTION 180004ae0 AT_EDID_Flash_Get_Default_table CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 180015bc0 FUN_180015bc0
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000001 rtk_openPort
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 AT_EDID_Flash_Get_Default_table(undefined1 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined1 local_218 [512];
  ulonglong local_18;
  
                    /* 0x4ae0  39  AT_EDID_Flash_Get_Default_table */
  local_18 = DAT_1800329e0 ^ (ulonglong)auStack_248;
  FUN_180015bc0((ulonglong *)local_218,0,0x200);
  iVar1 = rtk_isOpen();
  if ((iVar1 == 0) || (uVar2 = rtk_openPort(), (int)uVar2 == 0)) {
    local_228 = 1;
    iVar1 = rtk_sendATCommand(0x56,0,local_218,0);
    if (iVar1 < 0) {
      uVar2 = 10;
    }
    else {
      *param_1 = local_218[0];
      uVar2 = 0;
    }
  }
  return uVar2;
}


// FUNCTION 180004b80 AT_EDID_DDC_Set_RX_table CONVENTION __fastcall
// CALL 1800129a0 memcpy
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 180015bc0 FUN_180015bc0
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000001 rtk_openPort
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180004bb3) */
/* WARNING: Type propagation algorithm not settling */

int AT_EDID_DDC_Set_RX_table(ushort param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  undefined1 auStack_478 [32];
  undefined4 local_458;
  undefined8 local_448;
  ulonglong local_248 [64];
  ulonglong local_48;
  
                    /* 0x4b80  38  AT_EDID_DDC_Set_RX_table */
  local_48 = DAT_1800329e0 ^ (ulonglong)auStack_478;
  if ((param_1 & 0x1f) == 0) {
    FUN_180015bc0(local_248,0,0x200);
    FUN_180015bc0(&local_448,0,0x200);
    iVar3 = 0;
    iVar5 = 0;
    iVar2 = (int)((param_1 - 1) + ((int)(param_1 - 1) >> 0x1f & 0x7fU)) >> 7;
    iVar1 = iVar2 + 1;
    if (0 < iVar1) {
      iVar6 = 0;
      do {
        uVar7 = 0x80;
        local_448._0_1_ = iVar5 == iVar2;
        if ((bool)(undefined1)local_448) {
          uVar7 = param_1 + (short)iVar5 * -0x80;
        }
        local_448._1_1_ = 0;
        local_448._2_2_ = uVar7;
        local_448._4_2_ = param_1;
        memcpy((undefined1 *)((longlong)&local_448 + 6),(void *)(iVar6 + param_2),(ulonglong)uVar7);
        iVar4 = 0;
        iVar3 = rtk_isOpen();
        if ((iVar3 == 0) || (iVar4 = rtk_openPort(), iVar4 == 0)) {
          local_458 = 1;
          iVar3 = rtk_sendATCommand(0x57,&local_448,local_248,uVar7 + 6);
          if (iVar3 < 0) {
            iVar4 = 10;
          }
        }
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x80;
        iVar3 = 0;
      } while (iVar5 < iVar1);
    }
  }
  else {
    iVar3 = 0x11;
  }
  return iVar3;
}


// FUNCTION 180004d30 AT_EDID_DDC_Get_RX_table CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 1800129a0 memcpy
// CALL 180015bc0 FUN_180015bc0
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000001 rtk_openPort
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180004d63) */

int AT_EDID_DDC_Get_RX_table(ushort param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  undefined1 auStack_478 [32];
  undefined4 local_458;
  undefined1 local_448;
  undefined1 local_447;
  ushort local_446;
  ushort local_444;
  ulonglong local_248 [64];
  ulonglong local_48;
  
                    /* 0x4d30  37  AT_EDID_DDC_Get_RX_table */
  local_48 = DAT_1800329e0 ^ (ulonglong)auStack_478;
  if ((param_1 & 0x1f) == 0) {
    FUN_180015bc0((ulonglong *)&local_448,0,0x200);
    iVar3 = 0;
    iVar6 = 0;
    iVar2 = (int)((param_1 - 1) + ((int)(param_1 - 1) >> 0x1f & 0x7fU)) >> 7;
    iVar1 = iVar2 + 1;
    if (0 < iVar1) {
      iVar5 = 0;
      do {
        uVar7 = 0x80;
        local_448 = iVar6 == iVar2;
        if ((bool)local_448) {
          uVar7 = param_1 + (short)iVar6 * -0x80;
        }
        local_447 = 0;
        local_446 = uVar7;
        local_444 = param_1;
        FUN_180015bc0(local_248,0,0x200);
        iVar4 = 0;
        iVar3 = rtk_isOpen();
        if ((iVar3 == 0) || (iVar4 = rtk_openPort(), iVar4 == 0)) {
          local_458 = 1;
          iVar3 = rtk_sendATCommand(0x58,&local_448,local_248,6);
          if (iVar3 < 0) {
            iVar4 = 10;
          }
        }
        if (iVar4 != 0) {
          return iVar4;
        }
        memcpy((void *)(iVar5 + param_2),local_248,(ulonglong)uVar7);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x80;
        iVar3 = 0;
      } while (iVar6 < iVar1);
    }
  }
  else {
    iVar3 = 0x11;
  }
  return iVar3;
}


// FUNCTION 180004ee0 AT_EDID_Get_TX_table CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 1800129a0 memcpy
// CALL 180015bc0 FUN_180015bc0
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000001 rtk_openPort
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180004f11) */

int AT_EDID_Get_TX_table(ushort param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  undefined1 auStack_478 [32];
  undefined4 local_458;
  undefined1 local_448;
  undefined1 local_447;
  ushort local_446;
  ushort local_444;
  ulonglong local_248 [64];
  ulonglong local_48;
  
                    /* 0x4ee0  44  AT_EDID_Get_TX_table */
  local_48 = DAT_1800329e0 ^ (ulonglong)auStack_478;
  if ((param_1 & 0x1f) == 0) {
    iVar3 = 0;
    iVar6 = 0;
    iVar2 = (int)((param_1 - 1) + ((int)(param_1 - 1) >> 0x1f & 0x7fU)) >> 7;
    iVar1 = iVar2 + 1;
    if (0 < iVar1) {
      iVar5 = 0;
      do {
        uVar7 = 0x80;
        local_448 = iVar6 == iVar2;
        if ((bool)local_448) {
          uVar7 = param_1 + (short)iVar6 * -0x80;
        }
        local_447 = 0;
        local_446 = uVar7;
        local_444 = param_1;
        FUN_180015bc0(local_248,0,0x200);
        iVar4 = 0;
        iVar3 = rtk_isOpen();
        if ((iVar3 == 0) || (iVar4 = rtk_openPort(), iVar4 == 0)) {
          local_458 = 1;
          iVar3 = rtk_sendATCommand(0x59,&local_448,local_248,6);
          if (iVar3 < 0) {
            iVar4 = 10;
          }
        }
        if (iVar4 != 0) {
          return iVar4;
        }
        memcpy((void *)(iVar5 + param_2),local_248,(ulonglong)uVar7);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x80;
        iVar3 = 0;
      } while (iVar6 < iVar1);
    }
  }
  else {
    iVar3 = 0x11;
  }
  return iVar3;
}


// FUNCTION 180005f80 AT_Get_ColorImetry CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 180015bc0 FUN_180015bc0
// CALL EXTERNAL:00000001 rtk_openPort
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 AT_Get_ColorImetry(undefined1 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined1 local_228;
  undefined1 local_227;
  undefined1 local_218 [512];
  ulonglong local_18;
  
                    /* 0x5f80  52  AT_Get_ColorImetry */
  local_18 = DAT_1800329e0 ^ (ulonglong)auStack_258;
  local_227 = 0;
  local_228 = param_1;
  FUN_180015bc0((ulonglong *)local_218,0,0x200);
  iVar1 = rtk_isOpen();
  if ((iVar1 == 0) || (uVar2 = rtk_openPort(), (int)uVar2 == 0)) {
    local_238 = 1;
    iVar1 = rtk_sendATCommand(0x79,&local_228,local_218);
    if (iVar1 < 0) {
      uVar2 = 10;
    }
    else {
      *param_2 = local_218[0];
      uVar2 = 0;
    }
  }
  return uVar2;
}


// FUNCTION 180006030 AT_Set_ColorImetry CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 180015bc0 FUN_180015bc0
// CALL EXTERNAL:00000001 rtk_openPort
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong AT_Set_ColorImetry(undefined8 param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  ulonglong local_218 [64];
  ulonglong local_18;
  
                    /* 0x6030  91  AT_Set_ColorImetry */
  local_18 = DAT_1800329e0 ^ (ulonglong)auStack_248;
  FUN_180015bc0(local_218,0,0x200);
  uVar3 = 0;
  iVar1 = rtk_isOpen();
  if (iVar1 != 0) {
    uVar2 = rtk_openPort();
    uVar3 = uVar2 & 0xffffffff;
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  local_228 = 1;
  iVar1 = rtk_sendATCommand(0x7a,param_1,local_218,2);
  if (iVar1 < 0) {
    uVar3 = 10;
  }
  return uVar3;
}


// FUNCTION 1800060d0 AT_Get_ColorRange CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 180015bc0 FUN_180015bc0
// CALL EXTERNAL:00000001 rtk_openPort
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 AT_Get_ColorRange(undefined1 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined1 local_228;
  undefined1 local_227;
  undefined1 local_218 [512];
  ulonglong local_18;
  
                    /* 0x60d0  53  AT_Get_ColorRange */
  local_18 = DAT_1800329e0 ^ (ulonglong)auStack_258;
  local_227 = 0;
  local_228 = param_1;
  FUN_180015bc0((ulonglong *)local_218,0,0x200);
  iVar1 = rtk_isOpen();
  if ((iVar1 == 0) || (uVar2 = rtk_openPort(), (int)uVar2 == 0)) {
    local_238 = 1;
    iVar1 = rtk_sendATCommand(0x7b,&local_228,local_218);
    if (iVar1 < 0) {
      uVar2 = 10;
    }
    else {
      *param_2 = local_218[0];
      uVar2 = 0;
    }
  }
  return uVar2;
}


// FUNCTION 180006180 AT_Set_ColorRange CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 180015bc0 FUN_180015bc0
// CALL EXTERNAL:00000001 rtk_openPort
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong AT_Set_ColorRange(undefined8 param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  ulonglong local_218 [64];
  ulonglong local_18;
  
                    /* 0x6180  92  AT_Set_ColorRange */
  local_18 = DAT_1800329e0 ^ (ulonglong)auStack_248;
  FUN_180015bc0(local_218,0,0x200);
  uVar3 = 0;
  iVar1 = rtk_isOpen();
  if (iVar1 != 0) {
    uVar2 = rtk_openPort();
    uVar3 = uVar2 & 0xffffffff;
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  local_228 = 1;
  iVar1 = rtk_sendATCommand(0x7c,param_1,local_218,2);
  if (iVar1 < 0) {
    uVar3 = 10;
  }
  return uVar3;
}


// FUNCTION 1800066b0 AT_Get_HdmiRX_Video_Vfreq CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 180015bc0 FUN_180015bc0
// CALL EXTERNAL:00000001 rtk_openPort
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 AT_Get_HdmiRX_Video_Vfreq(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined4 local_218 [128];
  ulonglong local_18;
  
                    /* 0x66b0  60  AT_Get_HdmiRX_Video_Vfreq */
  local_18 = DAT_1800329e0 ^ (ulonglong)auStack_248;
  FUN_180015bc0((ulonglong *)local_218,0,0x200);
  iVar1 = rtk_isOpen();
  if ((iVar1 == 0) || (uVar2 = rtk_openPort(), (int)uVar2 == 0)) {
    local_228 = 1;
    iVar1 = rtk_sendATCommand(0x86,0,local_218,0);
    if (iVar1 < 0) {
      uVar2 = 10;
    }
    else {
      *param_1 = local_218[0];
      uVar2 = 0;
    }
  }
  return uVar2;
}


// FUNCTION 180006760 AT_Get_VRR_follow_mode CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 180015bc0 FUN_180015bc0
// CALL EXTERNAL:00000001 rtk_openPort
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 AT_Get_VRR_follow_mode(undefined1 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined1 local_218 [512];
  ulonglong local_18;
  
                    /* 0x6760  68  AT_Get_VRR_follow_mode */
  local_18 = DAT_1800329e0 ^ (ulonglong)auStack_248;
  FUN_180015bc0((ulonglong *)local_218,0,0x200);
  iVar1 = rtk_isOpen();
  if ((iVar1 == 0) || (uVar2 = rtk_openPort(), (int)uVar2 == 0)) {
    local_228 = 1;
    iVar1 = rtk_sendATCommand(0x88,0,local_218,0);
    if (iVar1 < 0) {
      uVar2 = 10;
    }
    else {
      *param_1 = local_218[0];
      uVar2 = 0;
    }
  }
  return uVar2;
}


// FUNCTION 180006810 AT_Set_VRR_follow_mode CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 180015bc0 FUN_180015bc0
// CALL EXTERNAL:00000001 rtk_openPort
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong AT_Set_VRR_follow_mode(undefined1 param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined1 local_228 [16];
  ulonglong local_218 [64];
  ulonglong local_18;
  
                    /* 0x6810  96  AT_Set_VRR_follow_mode */
  local_18 = DAT_1800329e0 ^ (ulonglong)auStack_258;
  local_228[0] = param_1;
  FUN_180015bc0(local_218,0,0x200);
  uVar3 = 0;
  iVar1 = rtk_isOpen();
  if (iVar1 != 0) {
    uVar2 = rtk_openPort();
    uVar3 = uVar2 & 0xffffffff;
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  local_238 = 1;
  iVar1 = rtk_sendATCommand(0x89,local_228,local_218,1);
  if (iVar1 < 0) {
    uVar3 = 10;
  }
  return uVar3;
}


// FUNCTION 180007120 AT_Set_USB_decription_Index CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 180001a40 FUN_180001a40
// CALL 180015bc0 FUN_180015bc0
// CALL EXTERNAL:00000001 rtk_openPort
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int AT_Set_USB_decription_Index(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_448 [32];
  undefined4 local_428;
  undefined4 local_418;
  undefined4 local_414;
  ulonglong local_218 [64];
  ulonglong local_18;
  
                    /* 0x7120  94  AT_Set_USB_decription_Index */
  local_18 = DAT_1800329e0 ^ (ulonglong)auStack_448;
  iVar1 = FUN_180001a40();
  if (iVar1 == 0) {
    FUN_180015bc0((ulonglong *)&local_418,0,0x200);
    FUN_180015bc0(local_218,0,0x200);
    iVar1 = 0;
    local_418 = 1;
    local_414 = param_1;
    iVar2 = rtk_isOpen();
    if ((iVar2 == 0) || (iVar1 = rtk_openPort(), iVar1 == 0)) {
      local_428 = 1;
      iVar2 = rtk_sendATCommand(0xb0,&local_418,local_218,8);
      if (iVar2 < 0) {
        iVar1 = 10;
      }
    }
  }
  else {
    iVar1 = 0x1a;
  }
  return iVar1;
}


// FUNCTION 1800071f0 AT_Get_USB_decription_Index CONVENTION __fastcall
// CALL EXTERNAL:00000017 rtk_sendATCommand
// CALL 180001a40 FUN_180001a40
// CALL 180015bc0 FUN_180015bc0
// CALL EXTERNAL:00000001 rtk_openPort
// CALL 1800125b0 __security_check_cookie
// CALL EXTERNAL:00000018 rtk_isOpen

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int AT_Get_USB_decription_Index(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_448 [32];
  undefined4 local_428;
  undefined4 local_418 [128];
  undefined8 local_218;
  ulonglong local_18;
  
                    /* 0x71f0  65  AT_Get_USB_decription_Index */
  local_18 = DAT_1800329e0 ^ (ulonglong)auStack_448;
  iVar1 = FUN_180001a40();
  if (iVar1 == 0) {
    FUN_180015bc0(&local_218,0,0x200);
    FUN_180015bc0((ulonglong *)local_418,0,0x200);
    iVar1 = 0;
    iVar2 = rtk_isOpen();
    if ((iVar2 == 0) || (iVar1 = rtk_openPort(), iVar1 == 0)) {
      local_428 = 1;
      iVar2 = rtk_sendATCommand(0xb1,0,&local_218,0);
      if (iVar2 < 0) {
        iVar1 = 10;
      }
      else if (iVar1 == 0) {
        local_418[0] = CONCAT31(local_418[0]._1_3_,local_218._4_1_);
        *param_1 = local_418[0];
      }
    }
  }
  else {
    iVar1 = 0x1a;
  }
  return iVar1;
}


