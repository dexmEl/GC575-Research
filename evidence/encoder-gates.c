// FUNCTION 18005cc30 getMJPEGEncodingQuality

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: enum AVTSDK::AvtResult __cdecl
   AVTSDK::Device::Controller::AvtAVTDeviceController::getMJPEGEncodingQuality(enum
   AVTSDK::Device::Controller::AvtEncodeQuality & __ptr64) __ptr64 */

AvtResult __thiscall
AVTSDK::Device::Controller::AvtAVTDeviceController::getMJPEGEncodingQuality
          (AvtAVTDeviceController *this,AvtEncodeQuality *param_1)

{
  undefined8 uVar1;
  int iVar2;
  DWORD DVar3;
  AvtResult AVar4;
  longlong lVar5;
  longlong lVar7;
  undefined1 auStack_498 [32];
  undefined4 local_478;
  longlong *local_470;
  char *local_468 [2];
  undefined8 local_458;
  ulonglong local_450;
  longlong local_448 [2];
  undefined8 local_438;
  ulonglong local_430;
  char local_428 [1024];
  ulonglong local_28;
  longlong lVar6;
  
                    /* 0x5cc30  869
                       ?getMJPEGEncodingQuality@AvtAVTDeviceController@Controller@Device@AVTSDK@@QEAA?AW4AvtResult@4@AEAW4AvtEncodeQuality@234@@Z
                        */
  local_28 = DAT_18024df98 ^ (ulonglong)auStack_498;
  iVar2 = FUN_18001d010();
  lVar6 = -1;
  if (3 < iVar2) {
    FUN_18000f920(local_428,0x3ff,"Enter");
    local_438 = 0;
    local_430 = 0xf;
    local_448[0] = 0;
    lVar7 = lVar6;
    do {
      lVar5 = lVar7 + 1;
      lVar7 = lVar7 + 1;
    } while (local_428[lVar5] != '\0');
    FUN_180005250(local_448,local_428);
    local_458 = 0;
    local_450 = 0xf;
    local_468[0] = (char *)0x0;
    local_468[0] = (char *)FUN_180184f54(0x20);
    uVar1 = s_getMJPEGEncodingQuality_1801ec9e8._8_8_;
    local_458 = 0x17;
    local_450 = 0x1f;
    *(undefined8 *)local_468[0] = s_getMJPEGEncodingQuality_1801ec9e8._0_8_;
    *(undefined8 *)(local_468[0] + 8) = uVar1;
    *(undefined4 *)(local_468[0] + 0x10) = s_getMJPEGEncodingQuality_1801ec9e8._16_4_;
    *(undefined2 *)(local_468[0] + 0x14) = s_getMJPEGEncodingQuality_1801ec9e8._20_2_;
    local_468[0][0x16] = s_getMJPEGEncodingQuality_1801ec9e8[0x16];
    local_468[0][0x17] = '\0';
    DVar3 = GetCurrentThreadId();
    local_470 = local_448;
    local_478 = 0x1e9;
    FUN_18001dc80(4,DVar3,&DAT_18024d318,local_468);
    if (0xf < local_450) {
      if (0xfff < local_450 + 1) {
        if ((char *)0x1f < local_468[0] + (-8 - *(longlong *)(local_468[0] + -8))) {
                    /* WARNING: Subroutine does not return */
          FUN_1801b4328(*(longlong *)(local_468[0] + -8),local_450 + 0x28);
        }
      }
      thunk_FUN_1801b8da8();
    }
    local_458 = 0;
    local_450 = 0xf;
    local_468[0] = (char *)((ulonglong)local_468[0] & 0xffffffffffffff00);
    if (0xf < local_430) {
      if (0xfff < local_430 + 1) {
        if (0x1f < (local_448[0] - *(longlong *)(local_448[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          FUN_1801b4328(*(longlong *)(local_448[0] + -8),local_430 + 0x28);
        }
      }
      thunk_FUN_1801b8da8();
    }
  }
  AVar4 = FUN_18008cc80(*(undefined8 *)this,param_1);
  if ((AVar4 + 2 & 0xfffffffd) != 0) {
    iVar2 = FUN_18001d010();
    if (0 < iVar2) {
      FUN_18000f920(local_428,0x3ff,"Failed to get mjpeg encode quality.");
      local_438 = 0;
      local_430 = 0xf;
      local_448[0] = 0;
      lVar7 = lVar6;
      do {
        lVar5 = lVar7 + 1;
        lVar7 = lVar7 + 1;
      } while (local_428[lVar5] != '\0');
      FUN_180005250(local_448,local_428);
      local_458 = 0;
      local_450 = 0xf;
      local_468[0] = (char *)0x0;
      local_468[0] = (char *)FUN_180184f54(0x20);
      uVar1 = s_getMJPEGEncodingQuality_1801ec9e8._8_8_;
      local_458 = 0x17;
      local_450 = 0x1f;
      *(undefined8 *)local_468[0] = s_getMJPEGEncodingQuality_1801ec9e8._0_8_;
      *(undefined8 *)(local_468[0] + 8) = uVar1;
      *(undefined4 *)(local_468[0] + 0x10) = s_getMJPEGEncodingQuality_1801ec9e8._16_4_;
      *(undefined2 *)(local_468[0] + 0x14) = s_getMJPEGEncodingQuality_1801ec9e8._20_2_;
      local_468[0][0x16] = s_getMJPEGEncodingQuality_1801ec9e8[0x16];
      local_468[0][0x17] = '\0';
      DVar3 = GetCurrentThreadId();
      local_470 = local_448;
      local_478 = 0x1ed;
      FUN_18001dc80(1,DVar3,&DAT_18024d318,local_468);
      if (0xf < local_450) {
        if (0xfff < local_450 + 1) {
          if ((char *)0x1f < local_468[0] + (-8 - *(longlong *)(local_468[0] + -8))) {
                    /* WARNING: Subroutine does not return */
            FUN_1801b4328(*(longlong *)(local_468[0] + -8),local_450 + 0x28);
          }
        }
        thunk_FUN_1801b8da8();
      }
      local_458 = 0;
      local_450 = 0xf;
      local_468[0] = (char *)((ulonglong)local_468[0] & 0xffffffffffffff00);
      if (0xf < local_430) {
        if (0xfff < local_430 + 1) {
          if (0x1f < (local_448[0] - *(longlong *)(local_448[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
            FUN_1801b4328(*(longlong *)(local_448[0] + -8),local_430 + 0x28);
          }
        }
        thunk_FUN_1801b8da8();
      }
    }
  }
  iVar2 = FUN_18001d010();
  if (3 < iVar2) {
    FUN_18000f920(local_428,0x3ff,"Leave");
    local_438 = 0;
    local_430 = 0xf;
    local_448[0] = 0;
    do {
      lVar5 = lVar6 + 1;
      lVar7 = lVar6 + 1;
      lVar6 = lVar5;
    } while (local_428[lVar7] != '\0');
    FUN_180005250(local_448,local_428,lVar5);
    local_458 = 0;
    local_450 = 0xf;
    local_468[0] = (char *)0x0;
    local_468[0] = (char *)FUN_180184f54(0x20);
    uVar1 = s_getMJPEGEncodingQuality_1801ec9e8._8_8_;
    local_458 = 0x17;
    local_450 = 0x1f;
    *(undefined8 *)local_468[0] = s_getMJPEGEncodingQuality_1801ec9e8._0_8_;
    *(undefined8 *)(local_468[0] + 8) = uVar1;
    *(undefined4 *)(local_468[0] + 0x10) = s_getMJPEGEncodingQuality_1801ec9e8._16_4_;
    *(undefined2 *)(local_468[0] + 0x14) = s_getMJPEGEncodingQuality_1801ec9e8._20_2_;
    local_468[0][0x16] = s_getMJPEGEncodingQuality_1801ec9e8[0x16];
    local_468[0][0x17] = '\0';
    DVar3 = GetCurrentThreadId();
    local_470 = local_448;
    local_478 = 0x1ef;
    FUN_18001dc80(4,DVar3,&DAT_18024d318,local_468);
    if (0xf < local_450) {
      if (0xfff < local_450 + 1) {
        if ((char *)0x1f < local_468[0] + (-8 - *(longlong *)(local_468[0] + -8))) {
                    /* WARNING: Subroutine does not return */
          FUN_1801b4328(*(longlong *)(local_468[0] + -8),local_450 + 0x28);
        }
      }
      thunk_FUN_1801b8da8();
    }
    local_458 = 0;
    local_450 = 0xf;
    local_468[0] = (char *)((ulonglong)local_468[0] & 0xffffffffffffff00);
    if (0xf < local_430) {
      if (0xfff < local_430 + 1) {
        if (0x1f < (local_448[0] - *(longlong *)(local_448[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          FUN_1801b4328(*(longlong *)(local_448[0] + -8),local_430 + 0x28);
        }
      }
      thunk_FUN_1801b8da8();
    }
  }
  return AVar4;
}



// FUNCTION 180071fb0 setMJPEGEncodingQuality

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: enum AVTSDK::AvtResult __cdecl
   AVTSDK::Device::Controller::AvtAVTDeviceController::setMJPEGEncodingQuality(enum
   AVTSDK::Device::Controller::AvtEncodeQuality const & __ptr64) __ptr64 */

AvtResult __thiscall
AVTSDK::Device::Controller::AvtAVTDeviceController::setMJPEGEncodingQuality
          (AvtAVTDeviceController *this,AvtEncodeQuality *param_1)

{
  undefined8 uVar1;
  int iVar2;
  DWORD DVar3;
  AvtResult AVar4;
  longlong lVar5;
  longlong lVar7;
  undefined1 auStack_498 [32];
  undefined4 local_478;
  longlong *local_470;
  char *local_468 [2];
  undefined8 local_458;
  ulonglong local_450;
  longlong local_448 [2];
  undefined8 local_438;
  ulonglong local_430;
  char local_428 [1024];
  ulonglong local_28;
  longlong lVar6;
  
                    /* 0x71fb0  1134
                       ?setMJPEGEncodingQuality@AvtAVTDeviceController@Controller@Device@AVTSDK@@QEAA?AW4AvtResult@4@AEBW4AvtEncodeQuality@234@@Z
                        */
  local_28 = DAT_18024df98 ^ (ulonglong)auStack_498;
  iVar2 = FUN_18001d010();
  lVar6 = -1;
  if (3 < iVar2) {
    FUN_18000f920(local_428,0x3ff,"Enter");
    local_438 = 0;
    local_430 = 0xf;
    local_448[0] = 0;
    lVar7 = lVar6;
    do {
      lVar5 = lVar7 + 1;
      lVar7 = lVar7 + 1;
    } while (local_428[lVar5] != '\0');
    FUN_180005250(local_448,local_428);
    local_458 = 0;
    local_450 = 0xf;
    local_468[0] = (char *)0x0;
    local_468[0] = (char *)FUN_180184f54(0x20);
    uVar1 = s_setMJPEGEncodingQuality_1801eca28._8_8_;
    local_458 = 0x17;
    local_450 = 0x1f;
    *(undefined8 *)local_468[0] = s_setMJPEGEncodingQuality_1801eca28._0_8_;
    *(undefined8 *)(local_468[0] + 8) = uVar1;
    *(undefined4 *)(local_468[0] + 0x10) = s_setMJPEGEncodingQuality_1801eca28._16_4_;
    *(undefined2 *)(local_468[0] + 0x14) = s_setMJPEGEncodingQuality_1801eca28._20_2_;
    local_468[0][0x16] = s_setMJPEGEncodingQuality_1801eca28[0x16];
    local_468[0][0x17] = '\0';
    DVar3 = GetCurrentThreadId();
    local_470 = local_448;
    local_478 = 0x1f6;
    FUN_18001dc80(4,DVar3,&DAT_18024d318,local_468);
    if (0xf < local_450) {
      if (0xfff < local_450 + 1) {
        if ((char *)0x1f < local_468[0] + (-8 - *(longlong *)(local_468[0] + -8))) {
                    /* WARNING: Subroutine does not return */
          FUN_1801b4328(*(longlong *)(local_468[0] + -8),local_450 + 0x28);
        }
      }
      thunk_FUN_1801b8da8();
    }
    local_458 = 0;
    local_450 = 0xf;
    local_468[0] = (char *)((ulonglong)local_468[0] & 0xffffffffffffff00);
    if (0xf < local_430) {
      if (0xfff < local_430 + 1) {
        if (0x1f < (local_448[0] - *(longlong *)(local_448[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          FUN_1801b4328(*(longlong *)(local_448[0] + -8),local_430 + 0x28);
        }
      }
      thunk_FUN_1801b8da8();
    }
  }
  AVar4 = FUN_1800ab0c0(*(undefined8 *)this,param_1);
  if (AVar4 != 0) {
    iVar2 = FUN_18001d010();
    if (0 < iVar2) {
      FUN_18000f920(local_428,0x3ff,"Failed to set mjpeg encode quality.");
      local_438 = 0;
      local_430 = 0xf;
      local_448[0] = 0;
      lVar7 = lVar6;
      do {
        lVar5 = lVar7 + 1;
        lVar7 = lVar7 + 1;
      } while (local_428[lVar5] != '\0');
      FUN_180005250(local_448,local_428);
      local_458 = 0;
      local_450 = 0xf;
      local_468[0] = (char *)0x0;
      local_468[0] = (char *)FUN_180184f54(0x20);
      uVar1 = s_setMJPEGEncodingQuality_1801eca28._8_8_;
      local_458 = 0x17;
      local_450 = 0x1f;
      *(undefined8 *)local_468[0] = s_setMJPEGEncodingQuality_1801eca28._0_8_;
      *(undefined8 *)(local_468[0] + 8) = uVar1;
      *(undefined4 *)(local_468[0] + 0x10) = s_setMJPEGEncodingQuality_1801eca28._16_4_;
      *(undefined2 *)(local_468[0] + 0x14) = s_setMJPEGEncodingQuality_1801eca28._20_2_;
      local_468[0][0x16] = s_setMJPEGEncodingQuality_1801eca28[0x16];
      local_468[0][0x17] = '\0';
      DVar3 = GetCurrentThreadId();
      local_470 = local_448;
      local_478 = 0x1fa;
      FUN_18001dc80(1,DVar3,&DAT_18024d318,local_468);
      if (0xf < local_450) {
        if (0xfff < local_450 + 1) {
          if ((char *)0x1f < local_468[0] + (-8 - *(longlong *)(local_468[0] + -8))) {
                    /* WARNING: Subroutine does not return */
            FUN_1801b4328(*(longlong *)(local_468[0] + -8),local_450 + 0x28);
          }
        }
        thunk_FUN_1801b8da8();
      }
      local_458 = 0;
      local_450 = 0xf;
      local_468[0] = (char *)((ulonglong)local_468[0] & 0xffffffffffffff00);
      if (0xf < local_430) {
        if (0xfff < local_430 + 1) {
          if (0x1f < (local_448[0] - *(longlong *)(local_448[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
            FUN_1801b4328(*(longlong *)(local_448[0] + -8),local_430 + 0x28);
          }
        }
        thunk_FUN_1801b8da8();
      }
    }
  }
  iVar2 = FUN_18001d010();
  if (3 < iVar2) {
    FUN_18000f920(local_428,0x3ff,"Leave");
    local_438 = 0;
    local_430 = 0xf;
    local_448[0] = 0;
    do {
      lVar5 = lVar6 + 1;
      lVar7 = lVar6 + 1;
      lVar6 = lVar5;
    } while (local_428[lVar7] != '\0');
    FUN_180005250(local_448,local_428,lVar5);
    local_458 = 0;
    local_450 = 0xf;
    local_468[0] = (char *)0x0;
    local_468[0] = (char *)FUN_180184f54(0x20);
    uVar1 = s_setMJPEGEncodingQuality_1801eca28._8_8_;
    local_458 = 0x17;
    local_450 = 0x1f;
    *(undefined8 *)local_468[0] = s_setMJPEGEncodingQuality_1801eca28._0_8_;
    *(undefined8 *)(local_468[0] + 8) = uVar1;
    *(undefined4 *)(local_468[0] + 0x10) = s_setMJPEGEncodingQuality_1801eca28._16_4_;
    *(undefined2 *)(local_468[0] + 0x14) = s_setMJPEGEncodingQuality_1801eca28._20_2_;
    local_468[0][0x16] = s_setMJPEGEncodingQuality_1801eca28[0x16];
    local_468[0][0x17] = '\0';
    DVar3 = GetCurrentThreadId();
    local_470 = local_448;
    local_478 = 0x1fc;
    FUN_18001dc80(4,DVar3,&DAT_18024d318,local_468);
    if (0xf < local_450) {
      if (0xfff < local_450 + 1) {
        if ((char *)0x1f < local_468[0] + (-8 - *(longlong *)(local_468[0] + -8))) {
                    /* WARNING: Subroutine does not return */
          FUN_1801b4328(*(longlong *)(local_468[0] + -8),local_450 + 0x28);
        }
      }
      thunk_FUN_1801b8da8();
    }
    local_458 = 0;
    local_450 = 0xf;
    local_468[0] = (char *)((ulonglong)local_468[0] & 0xffffffffffffff00);
    if (0xf < local_430) {
      if (0xfff < local_430 + 1) {
        if (0x1f < (local_448[0] - *(longlong *)(local_448[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          FUN_1801b4328(*(longlong *)(local_448[0] + -8),local_430 + 0x28);
        }
      }
      thunk_FUN_1801b8da8();
    }
  }
  return AVar4;
}



// FUNCTION 1800d2aa0 FUN_1800d2aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1800d2aa0(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined1 auStack_498 [32];
  int local_478;
  longlong *local_470;
  ulonglong local_468;
  char local_460 [2];
  undefined1 local_45e;
  undefined8 local_458;
  ulonglong local_450;
  longlong local_448 [2];
  undefined8 local_438;
  ulonglong local_430;
  char local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_18024df98 ^ (ulonglong)auStack_498;
  lVar5 = DAT_180252ed0;
  do {
    if (lVar5 == DAT_180252ed8) {
LAB_1800d2b03:
      iVar3 = FUN_18001d010();
      if (1 < iVar3) {
        local_478 = param_3;
        FUN_18000f920(local_428,0x3ff,"UVC Extension is not supported [VID: %d PID: %d].",param_2);
        local_438 = 0;
        local_430 = 0xf;
        local_448[0] = 0;
        lVar5 = -1;
        do {
          lVar2 = lVar5 + 1;
          lVar5 = lVar5 + 1;
        } while (local_428[lVar2] != '\0');
        FUN_180005250(local_448,local_428);
        local_450 = 0xf;
        local_458 = 10;
        local_468._0_1_ = s_updateGUID_1801f0bc8[0];
        local_468._1_1_ = s_updateGUID_1801f0bc8[1];
        local_468._2_1_ = s_updateGUID_1801f0bc8[2];
        local_468._3_1_ = s_updateGUID_1801f0bc8[3];
        local_468._4_1_ = s_updateGUID_1801f0bc8[4];
        local_468._5_1_ = s_updateGUID_1801f0bc8[5];
        local_468._6_1_ = s_updateGUID_1801f0bc8[6];
        local_468._7_1_ = s_updateGUID_1801f0bc8[7];
        local_460[0] = s_updateGUID_1801f0bc8[8];
        local_460[1] = s_updateGUID_1801f0bc8[9];
        local_45e = 0;
        DVar4 = GetCurrentThreadId();
        local_470 = local_448;
        local_478 = 0xc4;
        FUN_18001dc80(2,DVar4,&DAT_18024ddf0,&local_468);
        if (0xf < local_450) {
          if (0xfff < local_450 + 1) {
            if (0x1f < (local_468 - *(longlong *)(local_468 - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
              FUN_1801b4328(*(longlong *)(local_468 - 8),local_450 + 0x28);
            }
          }
          thunk_FUN_1801b8da8();
        }
        local_458 = 0;
        local_450 = 0xf;
        local_468 = local_468 & 0xffffffffffffff00;
        if (0xf < local_430) {
          if (0xfff < local_430 + 1) {
            if (0x1f < (local_448[0] - *(longlong *)(local_448[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
              FUN_1801b4328(*(longlong *)(local_448[0] + -8),local_430 + 0x28);
            }
          }
          thunk_FUN_1801b8da8();
        }
      }
      return 0xfffffffe;
    }
    if ((*(int *)(lVar5 + 8) == param_2) && (*(int *)(lVar5 + 0xc) == param_3)) {
      if (*(char *)(lVar5 + 0x1c) != '\0') {
        uVar1 = *(undefined8 *)(lVar5 + 0x28);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar5 + 0x20);
        *(undefined8 *)(param_1 + 0x10) = uVar1;
        return 0;
      }
      goto LAB_1800d2b03;
    }
    lVar5 = lVar5 + 0x90;
  } while( true );
}



// FUNCTION 18008cc80 FUN_18008cc80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18008cc80(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_4a8 [32];
  longlong *local_488;
  longlong *local_480;
  longlong local_478;
  undefined1 local_470 [8];
  char *local_468 [2];
  undefined8 local_458;
  ulonglong local_450;
  longlong local_448 [2];
  undefined8 local_438;
  ulonglong local_430;
  char local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_18024df98 ^ (ulonglong)auStack_4a8;
  local_478 = 0;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    iVar3 = FUN_18001d010();
    if (1 < iVar3) {
      FUN_18000f920(local_428,0x3ff,"Device is not opened");
      local_438 = 0;
      local_430 = 0xf;
      local_448[0] = 0;
      lVar6 = -1;
      do {
        lVar7 = lVar6 + 1;
        lVar6 = lVar6 + 1;
      } while (local_428[lVar7] != '\0');
      FUN_180005250(local_448,local_428);
      local_458 = 0;
      local_450 = 0xf;
      local_468[0] = (char *)0x0;
      local_468[0] = (char *)FUN_180184f54(0x20);
      uVar2 = s_getMJPEGEncodingQuality_1801ec9e8._8_8_;
      local_458 = 0x17;
      local_450 = 0x1f;
      *(undefined8 *)local_468[0] = s_getMJPEGEncodingQuality_1801ec9e8._0_8_;
      *(undefined8 *)(local_468[0] + 8) = uVar2;
      *(undefined4 *)(local_468[0] + 0x10) = s_getMJPEGEncodingQuality_1801ec9e8._16_4_;
      *(undefined2 *)(local_468[0] + 0x14) = s_getMJPEGEncodingQuality_1801ec9e8._20_2_;
      local_468[0][0x16] = s_getMJPEGEncodingQuality_1801ec9e8[0x16];
      local_468[0][0x17] = '\0';
      DVar4 = GetCurrentThreadId();
      local_480 = local_448;
      local_488 = (longlong *)CONCAT44(local_488._4_4_,0x65d);
      FUN_18001dc80(2,DVar4,&DAT_18024d338,local_468);
      if (0xf < local_450) {
        if (0xfff < local_450 + 1) {
          if ((char *)0x1f < local_468[0] + (-8 - *(longlong *)(local_468[0] + -8))) {
                    /* WARNING: Subroutine does not return */
            FUN_1801b4328(*(longlong *)(local_468[0] + -8),local_450 + 0x28);
          }
        }
        thunk_FUN_1801b8da8();
      }
      local_458 = 0;
      local_450 = 0xf;
      local_468[0] = (char *)((ulonglong)local_468[0] & 0xffffffffffffff00);
      if (0xf < local_430) {
        if (0xfff < local_430 + 1) {
          if (0x1f < (local_448[0] - *(longlong *)(local_448[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
            FUN_1801b4328(*(longlong *)(local_448[0] + -8),local_430 + 0x28);
          }
        }
        thunk_FUN_1801b8da8();
      }
    }
    iVar3 = -0xc;
  }
  else {
    local_488 = &local_478;
    iVar3 = FUN_180081ee0(param_1,*(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x40),0xb,
                          local_470);
    lVar6 = local_478;
    if (iVar3 == 0) {
      if ((*(byte *)(local_478 + 8) & 0xf) == 0) {
        *param_2 = 3;
      }
      else {
        *param_2 = ((*(byte *)(local_478 + 8) & 0xf) == 1) + 1;
      }
      iVar3 = 0;
    }
    else if (iVar3 != -2) {
      iVar5 = FUN_18001d010();
      if (1 < iVar5) {
        FUN_18000f920(local_428,0x3ff,"Failed to get extension.");
        local_438 = 0;
        local_430 = 0xf;
        local_448[0] = 0;
        lVar7 = -1;
        do {
          lVar1 = lVar7 + 1;
          lVar7 = lVar7 + 1;
        } while (local_428[lVar1] != '\0');
        FUN_180005250(local_448,local_428);
        local_458 = 0;
        local_450 = 0xf;
        local_468[0] = (char *)0x0;
        local_468[0] = (char *)FUN_180184f54(0x20);
        uVar2 = s_getMJPEGEncodingQuality_1801ec9e8._8_8_;
        local_458 = 0x17;
        local_450 = 0x1f;
        *(undefined8 *)local_468[0] = s_getMJPEGEncodingQuality_1801ec9e8._0_8_;
        *(undefined8 *)(local_468[0] + 8) = uVar2;
        *(undefined4 *)(local_468[0] + 0x10) = s_getMJPEGEncodingQuality_1801ec9e8._16_4_;
        *(undefined2 *)(local_468[0] + 0x14) = s_getMJPEGEncodingQuality_1801ec9e8._20_2_;
        local_468[0][0x16] = s_getMJPEGEncodingQuality_1801ec9e8[0x16];
        local_468[0][0x17] = '\0';
        DVar4 = GetCurrentThreadId();
        local_480 = local_448;
        local_488 = (longlong *)CONCAT44(local_488._4_4_,0x666);
        FUN_18001dc80(2,DVar4,&DAT_18024d338,local_468);
        if (0xf < local_450) {
          if (0xfff < local_450 + 1) {
            if ((char *)0x1f < local_468[0] + (-8 - *(longlong *)(local_468[0] + -8))) {
                    /* WARNING: Subroutine does not return */
              FUN_1801b4328(*(longlong *)(local_468[0] + -8),local_450 + 0x28);
            }
          }
          thunk_FUN_1801b8da8();
        }
        local_458 = 0;
        local_450 = 0xf;
        local_468[0] = (char *)((ulonglong)local_468[0] & 0xffffffffffffff00);
        if (0xf < local_430) {
          if (0xfff < local_430 + 1) {
            if (0x1f < (local_448[0] - *(longlong *)(local_448[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
              FUN_1801b4328(*(longlong *)(local_448[0] + -8),local_430 + 0x28);
            }
          }
          thunk_FUN_1801b8da8();
        }
      }
    }
    if (lVar6 != 0) {
      thunk_FUN_1801b8da8(lVar6);
    }
  }
  return iVar3;
}



// FUNCTION 180095be0 FUN_180095be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

int FUN_180095be0(int *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  char *pcVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_4d8 [32];
  longlong *local_4b8;
  ulonglong *local_4b0;
  undefined4 local_4a8;
  undefined4 local_4a4;
  int local_4a0 [2];
  longlong *local_498;
  longlong *local_490;
  ulonglong local_488;
  char local_480 [2];
  undefined1 local_47e;
  undefined8 local_478;
  ulonglong local_470;
  ulonglong local_468;
  char local_460 [2];
  undefined1 local_45e;
  undefined8 local_458;
  ulonglong local_450;
  ulonglong local_448 [2];
  undefined8 local_438;
  ulonglong local_430;
  char local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_18024df98 ^ (ulonglong)auStack_4d8;
  if (*(longlong *)(param_1 + 0x14) != 0) {
    iVar3 = FUN_18001d010();
    if (1 < iVar3) {
      FUN_18000f920(local_428,0x3ff,"AVTDevice is already opend");
      local_478 = 0;
      local_470 = 0xf;
      local_488 = 0;
      lVar14 = -1;
      do {
        lVar13 = lVar14 + 1;
        lVar15 = lVar14 + 1;
        lVar14 = lVar13;
      } while (local_428[lVar15] != '\0');
      FUN_180005250(&local_488,local_428,lVar13);
      local_450 = 0xf;
      local_458 = 10;
      local_468._0_1_ = s_openDevice_1801ee5b8[0];
      local_468._1_1_ = s_openDevice_1801ee5b8[1];
      local_468._2_1_ = s_openDevice_1801ee5b8[2];
      local_468._3_1_ = s_openDevice_1801ee5b8[3];
      local_468._4_1_ = s_openDevice_1801ee5b8[4];
      local_468._5_1_ = s_openDevice_1801ee5b8[5];
      local_468._6_1_ = s_openDevice_1801ee5b8[6];
      local_468._7_1_ = s_openDevice_1801ee5b8[7];
      local_460[0] = s_openDevice_1801ee5b8[8];
      local_460[1] = s_openDevice_1801ee5b8[9];
      local_45e = 0;
      DVar4 = GetCurrentThreadId();
      local_4b0 = &local_488;
      local_4b8 = (longlong *)CONCAT44(local_4b8._4_4_,0xa3);
      FUN_18001dc80(2,DVar4,&DAT_18024d338,&local_468);
      if (0xf < local_450) {
        if (0xfff < local_450 + 1) {
          if (0x1f < (local_468 - *(longlong *)(local_468 - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
            FUN_1801b4328(*(longlong *)(local_468 - 8),local_450 + 0x28);
          }
        }
        thunk_FUN_1801b8da8();
      }
      local_458 = 0;
      local_450 = 0xf;
      local_468 = local_468 & 0xffffffffffffff00;
      if (0xf < local_470) {
        if (0xfff < local_470 + 1) {
          if (0x1f < (local_488 - *(longlong *)(local_488 - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
            FUN_1801b4328(*(longlong *)(local_488 - 8),local_470 + 0x28);
          }
        }
        thunk_FUN_1801b8da8();
      }
    }
    iVar3 = -0x17;
    goto LAB_18009686f;
  }
  if (1 < param_1[10] - 1U) {
    if (param_1[10] == 4) {
      pcVar6 = AVTSDK::AvtString::getString((AvtString *)(param_1 + 4));
      plVar7 = (longlong *)0x0;
      local_478 = 0;
      local_470 = 0xf;
      local_488 = 0;
      lVar14 = -1;
      do {
        lVar14 = lVar14 + 1;
      } while (pcVar6[lVar14] != '\0');
      FUN_180005250(&local_488,pcVar6,lVar14);
      iVar3 = FUN_180039910(&local_488,&local_4a8,&local_4a4,local_4a0);
      if (0xf < local_470) {
        if (0xfff < local_470 + 1) {
          if (0x1f < (local_488 - *(longlong *)(local_488 - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
            FUN_1801b4328(*(longlong *)(local_488 - 8),local_470 + 0x28);
          }
        }
        thunk_FUN_1801b8da8();
      }
      if (iVar3 != 0) goto LAB_18009686f;
      local_498 = (longlong *)FUN_180184f54(0x90);
      local_4b8 = plVar7;
      if (local_498 != (longlong *)0x0) {
        local_4b8 = (longlong *)FUN_180044080(local_498);
      }
      *(longlong **)(param_1 + 0x14) = local_4b8;
      iVar3 = FUN_1800441b0(param_1[10],local_4a8,local_4a4,local_4a0[0]);
      if (iVar3 != 0) goto LAB_18009686f;
      if (*param_1 == 1) {
        if ((**(int **)(param_1 + 0x14) - 0x14U & 0xfffffffd) != 0) {
          return 0;
        }
        local_498 = (longlong *)FUN_180184f54(0xf8);
        if (local_498 != (longlong *)0x0) {
          plVar7 = (longlong *)FUN_1800bbba0(local_498,*(undefined8 *)(param_1 + 0x14));
        }
        *(longlong **)(param_1 + 0xe) = plVar7;
        iVar3 = (**(code **)(*plVar7 + 8))(plVar7,param_1);
        if (iVar3 == 0) {
          return 0;
        }
        goto LAB_18009686f;
      }
    }
    goto LAB_18009686a;
  }
  pcVar6 = AVTSDK::AvtString::getString((AvtString *)(param_1 + 4));
  plVar7 = (longlong *)0x0;
  local_478 = 0;
  local_470 = 0xf;
  local_488 = 0;
  lVar14 = -1;
  lVar15 = -1;
  do {
    lVar15 = lVar15 + 1;
  } while (pcVar6[lVar15] != '\0');
  FUN_180005250(&local_488,pcVar6);
  iVar3 = FUN_180039620(&local_488,&local_4a4,&local_4a8);
  if (0xf < local_470) {
    if (0xfff < local_470 + 1) {
      if (0x1f < (local_488 - *(longlong *)(local_488 - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        FUN_1801b4328(*(longlong *)(local_488 - 8),local_470 + 0x28);
      }
    }
    thunk_FUN_1801b8da8();
  }
  if (iVar3 != 0) goto LAB_18009686f;
  local_498 = (longlong *)FUN_180184f54(0x90);
  plVar8 = plVar7;
  if (local_498 != (longlong *)0x0) {
    plVar8 = (longlong *)FUN_180044080(local_498);
  }
  *(longlong **)(param_1 + 0x14) = plVar8;
  iVar3 = FUN_180044120(param_1[10],local_4a4,local_4a8,plVar8);
  if (iVar3 != 0) goto LAB_18009686f;
  piVar1 = *(int **)(param_1 + 0x14);
  iVar5 = *piVar1;
  iVar3 = *param_1;
  if (iVar3 == 1) {
    plVar8 = plVar7;
    if ((char)piVar1[7] == '\0') {
      if (iVar5 != 0x13) {
        if (*(char *)((longlong)piVar1 + 0x7b) != '\0') {
          local_498 = (longlong *)FUN_180184f54(0x130);
          if (local_498 != (longlong *)0x0) {
            plVar8 = (longlong *)FUN_1800c77c0(local_498,*(undefined8 *)(param_1 + 0x14));
          }
          *(longlong **)(param_1 + 0xe) = plVar8;
          goto LAB_180096048;
        }
        if (iVar5 != 6) {
          iVar5 = **(int **)(param_1 + 0x14);
          goto LAB_18009608f;
        }
      }
LAB_18009686a:
      iVar3 = -2;
      goto LAB_18009686f;
    }
    local_498 = (longlong *)FUN_180184f54(0x38);
    if (local_498 != (longlong *)0x0) {
      plVar8 = (longlong *)FUN_1800d16c0(local_498);
    }
    *(longlong **)(param_1 + 0xc) = plVar8;
LAB_180096048:
    iVar3 = (**(code **)(*plVar8 + 8))(plVar8,param_1);
    if (iVar3 != 0) goto LAB_18009686f;
    iVar5 = **(int **)(param_1 + 0x14);
  }
  else if (((iVar3 == 2) || (iVar3 != 4)) || (iVar5 == 5)) goto LAB_18009686a;
LAB_18009608f:
  if (iVar5 == 0x18) {
    local_498 = (longlong *)FUN_180184f54(0x1a8);
    plVar8 = plVar7;
    if (local_498 != (longlong *)0x0) {
      plVar8 = (longlong *)FUN_1800b4a60(local_498,*(undefined8 *)(param_1 + 0x14));
    }
    *(longlong **)(param_1 + 0x10) = plVar8;
    iVar3 = (**(code **)(*plVar8 + 8))(plVar8,param_1);
    if (iVar3 == 0) goto LAB_180096222;
    iVar5 = FUN_18001d010();
    if (iVar5 < 2) goto LAB_18009686f;
    FUN_18000f920(local_428,0x3ff,"Failed to open hid device");
    local_478 = 0;
    local_470 = 0xf;
    local_488 = 0;
    do {
      lVar13 = lVar14 + 1;
      lVar15 = lVar14 + 1;
      lVar14 = lVar13;
    } while (local_428[lVar15] != '\0');
    FUN_180005250(&local_488,local_428,lVar13);
    local_450 = 0xf;
    local_458 = 10;
    local_468._0_1_ = s_openDevice_1801ee5b8[0];
    local_468._1_1_ = s_openDevice_1801ee5b8[1];
    local_468._2_1_ = s_openDevice_1801ee5b8[2];
    local_468._3_1_ = s_openDevice_1801ee5b8[3];
    local_468._4_1_ = s_openDevice_1801ee5b8[4];
    local_468._5_1_ = s_openDevice_1801ee5b8[5];
    local_468._6_1_ = s_openDevice_1801ee5b8[6];
    local_468._7_1_ = s_openDevice_1801ee5b8[7];
    local_460[0] = s_openDevice_1801ee5b8[8];
    local_460[1] = s_openDevice_1801ee5b8[9];
    local_45e = 0;
    DVar4 = GetCurrentThreadId();
    local_4b0 = &local_488;
    local_4b8 = (longlong *)CONCAT44(local_4b8._4_4_,0xfd);
    FUN_18001dc80(2,DVar4,&DAT_18024d338,&local_468);
    if (0xf < local_450) {
      if (0xfff < local_450 + 1) {
        if (0x1f < (local_468 - *(longlong *)(local_468 - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
          FUN_1801b4328(*(longlong *)(local_468 - 8),local_450 + 0x28);
        }
      }
      thunk_FUN_1801b8da8();
    }
    local_458 = 0;
    local_450 = 0xf;
    local_468 = local_468 & 0xffffffffffffff00;
    if (local_470 < 0x10) goto LAB_18009686f;
    if (0xfff < local_470 + 1) {
      if (0x1f < (local_488 - *(longlong *)(local_488 - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
        FUN_1801b4328(*(longlong *)(local_488 - 8),local_470 + 0x28);
      }
    }
  }
  else {
LAB_180096222:
    lVar15 = *(longlong *)(param_1 + 0x14);
    if ((*(int *)(lVar15 + 0xc) == 0x531) || (*(int *)(lVar15 + 0xc) == 0x553)) {
      local_458 = 0;
      local_450 = 0xf;
      local_468 = 0;
      pcVar6 = AVTSDK::AvtString::getString((AvtString *)(param_1 + 4));
      local_478 = 0;
      local_470 = 0xf;
      local_488 = 0;
      lVar15 = -1;
      do {
        lVar15 = lVar15 + 1;
      } while (pcVar6[lVar15] != '\0');
      FUN_180005250(&local_488,pcVar6);
      iVar3 = FUN_1800393b0(&local_488,&local_468);
      if (0xf < local_470) {
        if (0xfff < local_470 + 1) {
          if (0x1f < (local_488 - *(longlong *)(local_488 - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
            FUN_1801b4328(*(longlong *)(local_488 - 8),local_470 + 0x28);
          }
        }
        thunk_FUN_1801b8da8();
      }
      if (iVar3 == 0) {
        local_498 = (longlong *)FUN_180184f54(0x28);
        plVar8 = plVar7;
        if (local_498 != (longlong *)0x0) {
          plVar8 = (longlong *)FUN_1800af2f0(local_498);
        }
        *(longlong **)(param_1 + 0x12) = plVar8;
        uVar2 = FUN_1800958b0(param_1);
        local_4b8 = (longlong *)CONCAT71(local_4b8._1_7_,uVar2);
        iVar3 = FUN_1800b1ee0(*(undefined8 *)(param_1 + 0x12),local_4a4,local_4a8,&local_468);
        if (iVar3 == 0) {
          if (0xf < local_450) {
            uVar12 = local_450 + 1;
            uVar11 = local_468;
            if (0xfff < uVar12) {
              uVar12 = local_450 + 0x28;
              uVar11 = *(ulonglong *)(local_468 - 8);
              if (0x1f < (local_468 - uVar11) - 8) goto LAB_1800968f4;
            }
            thunk_FUN_1801b8da8(uVar11,uVar12);
          }
          lVar15 = *(longlong *)(param_1 + 0x14);
          goto LAB_18009650e;
        }
        iVar5 = FUN_18001d010();
        if (1 < iVar5) {
          FUN_18000f920(local_428,0x3ff,"Failed to open hid device");
          local_438 = 0;
          local_430 = 0xf;
          local_448[0] = 0;
          do {
            lVar13 = lVar14 + 1;
            lVar15 = lVar14 + 1;
            lVar14 = lVar13;
          } while (local_428[lVar15] != '\0');
          FUN_180005250(local_448,local_428,lVar13);
          local_470 = 0xf;
          local_478 = 10;
          local_488._0_1_ = s_openDevice_1801ee5b8[0];
          local_488._1_1_ = s_openDevice_1801ee5b8[1];
          local_488._2_1_ = s_openDevice_1801ee5b8[2];
          local_488._3_1_ = s_openDevice_1801ee5b8[3];
          local_488._4_1_ = s_openDevice_1801ee5b8[4];
          local_488._5_1_ = s_openDevice_1801ee5b8[5];
          local_488._6_1_ = s_openDevice_1801ee5b8[6];
          local_488._7_1_ = s_openDevice_1801ee5b8[7];
          local_480[0] = s_openDevice_1801ee5b8[8];
          local_480[1] = s_openDevice_1801ee5b8[9];
          local_47e = 0;
          DVar4 = GetCurrentThreadId();
          local_4b0 = local_448;
          local_4b8 = (longlong *)CONCAT44(local_4b8._4_4_,0x10b);
          FUN_18001dc80(2,DVar4,&DAT_18024d338,&local_488);
          if (0xf < local_470) {
            if (0xfff < local_470 + 1) {
              if (0x1f < (local_488 - *(longlong *)(local_488 - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
                FUN_1801b4328(*(longlong *)(local_488 - 8),local_470 + 0x28);
              }
            }
            thunk_FUN_1801b8da8();
          }
          local_478 = 0;
          local_470 = 0xf;
          local_488 = local_488 & 0xffffffffffffff00;
          if (0xf < local_430) {
            if (0xfff < local_430 + 1) {
              if (0x1f < (local_448[0] - *(longlong *)(local_448[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
                FUN_1801b4328(*(longlong *)(local_448[0] - 8),local_430 + 0x28);
              }
            }
            thunk_FUN_1801b8da8();
          }
        }
      }
      if (local_450 < 0x10) goto LAB_18009686f;
      if (0xfff < local_450 + 1) {
        uVar12 = local_450 + 0x28;
        uVar11 = *(ulonglong *)(local_468 - 8);
        if (0x1f < (local_468 - uVar11) - 8) {
LAB_1800968f4:
                    /* WARNING: Subroutine does not return */
          FUN_1801b4328(uVar11,uVar12);
        }
      }
    }
    else {
LAB_18009650e:
      if (*(char *)(lVar15 + 0x5e) == '\0') {
        return 0;
      }
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0xc) + 0x18))
                        (*(longlong **)(param_1 + 0xc),0xd,local_4a0);
      if (iVar3 == 0) {
        uVar9 = thunk_FUN_180184f54((longlong)local_4a0[0]);
        *(undefined8 *)(param_1 + 0x16) = uVar9;
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0xc) + 0x20))
                          (*(longlong **)(param_1 + 0xc),0xd,uVar9,local_4a0[0]);
        if (iVar3 == 0) {
          *(undefined1 *)(param_1 + 0x1a) = 0;
          plVar8 = (longlong *)FUN_180184f54(0x10);
          if (plVar8 != (longlong *)0x0) {
            local_498 = plVar8;
            plVar10 = (longlong *)FUN_180184f54(8);
            if (plVar10 != (longlong *)0x0) {
              *plVar10 = (longlong)param_1;
              plVar7 = plVar10;
            }
            local_4b8 = (longlong *)((ulonglong)local_4b8 & 0xffffffff00000000);
            local_4b0 = (ulonglong *)(plVar8 + 1);
            local_490 = plVar7;
            lVar14 = FUN_1801b4504(0,0,FUN_180075510,plVar7);
            *plVar8 = lVar14;
            plVar7 = plVar8;
            if (lVar14 == 0) {
              *(undefined4 *)(plVar8 + 1) = 0;
                    /* WARNING: Subroutine does not return */
              FUN_180186944(6);
            }
          }
          *(longlong **)(param_1 + 0x18) = plVar7;
          return 0;
        }
        iVar5 = FUN_18001d010();
        if (iVar5 < 2) goto LAB_18009686f;
        FUN_18000f920(local_428,0x3ff,"Failed to get volume data");
        local_438 = 0;
        local_430 = 0xf;
        local_448[0] = 0;
        do {
          lVar13 = lVar14 + 1;
          lVar15 = lVar14 + 1;
          lVar14 = lVar13;
        } while (local_428[lVar15] != '\0');
        FUN_180005250(local_448,local_428,lVar13);
        local_470 = 0xf;
        local_478 = 10;
        local_488._0_1_ = s_openDevice_1801ee5b8[0];
        local_488._1_1_ = s_openDevice_1801ee5b8[1];
        local_488._2_1_ = s_openDevice_1801ee5b8[2];
        local_488._3_1_ = s_openDevice_1801ee5b8[3];
        local_488._4_1_ = s_openDevice_1801ee5b8[4];
        local_488._5_1_ = s_openDevice_1801ee5b8[5];
        local_488._6_1_ = s_openDevice_1801ee5b8[6];
        local_488._7_1_ = s_openDevice_1801ee5b8[7];
        local_480[0] = s_openDevice_1801ee5b8[8];
        local_480[1] = s_openDevice_1801ee5b8[9];
        local_47e = 0;
        DVar4 = GetCurrentThreadId();
        local_4b0 = local_448;
        local_4b8 = (longlong *)CONCAT44(local_4b8._4_4_,0x11a);
        FUN_18001dc80(2,DVar4,&DAT_18024d338,&local_488);
        if (0xf < local_470) {
          if (0xfff < local_470 + 1) {
            if (0x1f < (local_488 - *(longlong *)(local_488 - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
              FUN_1801b4328(*(longlong *)(local_488 - 8),local_470 + 0x28);
            }
          }
          thunk_FUN_1801b8da8();
        }
        local_478 = 0;
        local_470 = 0xf;
        local_488 = local_488 & 0xffffffffffffff00;
        if (local_430 < 0x10) goto LAB_18009686f;
        if (0xfff < local_430 + 1) {
          if (0x1f < (local_448[0] - *(longlong *)(local_448[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
            FUN_1801b4328(*(longlong *)(local_448[0] - 8),local_430 + 0x28);
          }
        }
      }
      else {
        iVar5 = FUN_18001d010();
        if (iVar5 < 2) goto LAB_18009686f;
        FUN_18000f920(local_428,0x3ff,"Failed to get extension size");
        local_438 = 0;
        local_430 = 0xf;
        local_448[0] = 0;
        do {
          lVar13 = lVar14 + 1;
          lVar15 = lVar14 + 1;
          lVar14 = lVar13;
        } while (local_428[lVar15] != '\0');
        FUN_180005250(local_448,local_428,lVar13);
        local_470 = 0xf;
        local_478 = 10;
        local_488._0_1_ = s_openDevice_1801ee5b8[0];
        local_488._1_1_ = s_openDevice_1801ee5b8[1];
        local_488._2_1_ = s_openDevice_1801ee5b8[2];
        local_488._3_1_ = s_openDevice_1801ee5b8[3];
        local_488._4_1_ = s_openDevice_1801ee5b8[4];
        local_488._5_1_ = s_openDevice_1801ee5b8[5];
        local_488._6_1_ = s_openDevice_1801ee5b8[6];
        local_488._7_1_ = s_openDevice_1801ee5b8[7];
        local_480[0] = s_openDevice_1801ee5b8[8];
        local_480[1] = s_openDevice_1801ee5b8[9];
        local_47e = 0;
        DVar4 = GetCurrentThreadId();
        local_4b0 = local_448;
        local_4b8 = (longlong *)CONCAT44(local_4b8._4_4_,0x114);
        FUN_18001dc80(2,DVar4,&DAT_18024d338,&local_488);
        if (0xf < local_470) {
          if (0xfff < local_470 + 1) {
            if (0x1f < (local_488 - *(longlong *)(local_488 - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
              FUN_1801b4328(*(longlong *)(local_488 - 8),local_470 + 0x28);
            }
          }
          thunk_FUN_1801b8da8();
        }
        local_478 = 0;
        local_470 = 0xf;
        local_488 = local_488 & 0xffffffffffffff00;
        if (local_430 < 0x10) goto LAB_18009686f;
        if (0xfff < local_430 + 1) {
          if (0x1f < (local_448[0] - *(longlong *)(local_448[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
            FUN_1801b4328(*(longlong *)(local_448[0] - 8),local_430 + 0x28);
          }
        }
      }
    }
  }
  thunk_FUN_1801b8da8();
LAB_18009686f:
  FUN_180076480(param_1);
  return iVar3;
}



// FUNCTION 1800ab0c0 FUN_1800ab0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1800ab0c0(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  int iVar4;
  DWORD DVar5;
  int iVar6;
  longlong lVar7;
  byte bVar8;
  undefined1 auStack_4a8 [32];
  undefined1 **local_488;
  longlong *local_480;
  undefined4 local_478 [2];
  undefined1 *local_470;
  char *local_468 [2];
  undefined8 local_458;
  ulonglong local_450;
  longlong local_448 [2];
  undefined8 local_438;
  ulonglong local_430;
  char local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_18024df98 ^ (ulonglong)auStack_4a8;
  local_470 = (undefined1 *)0x0;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    iVar4 = FUN_18001d010();
    if (1 < iVar4) {
      FUN_18000f920(local_428,0x3ff,"Device is not opened");
      local_438 = 0;
      local_430 = 0xf;
      local_448[0] = 0;
      lVar7 = -1;
      do {
        lVar1 = lVar7 + 1;
        lVar7 = lVar7 + 1;
      } while (local_428[lVar1] != '\0');
      FUN_180005250(local_448,local_428);
      local_458 = 0;
      local_450 = 0xf;
      local_468[0] = (char *)0x0;
      local_468[0] = (char *)FUN_180184f54(0x20);
      uVar2 = s_setMJPEGEncodingQuality_1801eca28._8_8_;
      local_458 = 0x17;
      local_450 = 0x1f;
      *(undefined8 *)local_468[0] = s_setMJPEGEncodingQuality_1801eca28._0_8_;
      *(undefined8 *)(local_468[0] + 8) = uVar2;
      *(undefined4 *)(local_468[0] + 0x10) = s_setMJPEGEncodingQuality_1801eca28._16_4_;
      *(undefined2 *)(local_468[0] + 0x14) = s_setMJPEGEncodingQuality_1801eca28._20_2_;
      local_468[0][0x16] = s_setMJPEGEncodingQuality_1801eca28[0x16];
      local_468[0][0x17] = '\0';
      DVar5 = GetCurrentThreadId();
      local_480 = local_448;
      local_488 = (undefined1 **)CONCAT44(local_488._4_4_,0x682);
      FUN_18001dc80(2,DVar5,&DAT_18024d338,local_468);
      if (0xf < local_450) {
        if (0xfff < local_450 + 1) {
          if ((char *)0x1f < local_468[0] + (-8 - *(longlong *)(local_468[0] + -8))) {
                    /* WARNING: Subroutine does not return */
            FUN_1801b4328(*(longlong *)(local_468[0] + -8),local_450 + 0x28);
          }
        }
        thunk_FUN_1801b8da8();
      }
      local_458 = 0;
      local_450 = 0xf;
      local_468[0] = (char *)((ulonglong)local_468[0] & 0xffffffffffffff00);
      if (0xf < local_430) {
        if (0xfff < local_430 + 1) {
          if (0x1f < (local_448[0] - *(longlong *)(local_448[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
            FUN_1801b4328(*(longlong *)(local_448[0] + -8),local_430 + 0x28);
          }
        }
        thunk_FUN_1801b8da8();
      }
    }
    return -0xc;
  }
  local_488 = &local_470;
  iVar4 = FUN_180081ee0(param_1,*(undefined1 *)(*(longlong *)(param_1 + 0x50) + 0x40),0xb,local_478)
  ;
  puVar3 = local_470;
  if (iVar4 == 0) {
    if (*param_2 == 1) {
      bVar8 = 2;
    }
    else {
      bVar8 = *param_2 == 2;
    }
    *local_470 = 4;
    local_470[8] = local_470[8] & 0xf0;
    local_470[8] = local_470[8] | bVar8;
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
                      (*(longlong **)(param_1 + 0x30),0xb,local_470,local_478[0]);
    if (iVar4 == 0) {
      iVar4 = 0;
      goto LAB_1800ab613;
    }
    iVar6 = FUN_18001d010();
    if (iVar6 < 2) goto LAB_1800ab613;
    FUN_18000f920(local_428,0x3ff,"Failed to set mjpeg encode quality.");
    local_438 = 0;
    local_430 = 0xf;
    local_448[0] = 0;
    lVar7 = -1;
    do {
      lVar1 = lVar7 + 1;
      lVar7 = lVar7 + 1;
    } while (local_428[lVar1] != '\0');
    FUN_180005250(local_448,local_428);
    local_458 = 0;
    local_450 = 0xf;
    local_468[0] = (char *)0x0;
    local_468[0] = (char *)FUN_180184f54(0x20);
    uVar2 = s_setMJPEGEncodingQuality_1801eca28._8_8_;
    local_458 = 0x17;
    local_450 = 0x1f;
    *(undefined8 *)local_468[0] = s_setMJPEGEncodingQuality_1801eca28._0_8_;
    *(undefined8 *)(local_468[0] + 8) = uVar2;
    *(undefined4 *)(local_468[0] + 0x10) = s_setMJPEGEncodingQuality_1801eca28._16_4_;
    *(undefined2 *)(local_468[0] + 0x14) = s_setMJPEGEncodingQuality_1801eca28._20_2_;
    local_468[0][0x16] = s_setMJPEGEncodingQuality_1801eca28[0x16];
    local_468[0][0x17] = '\0';
    DVar5 = GetCurrentThreadId();
    local_480 = local_448;
    local_488 = (undefined1 **)CONCAT44(local_488._4_4_,0x69a);
    FUN_18001dc80(2,DVar5,&DAT_18024d338,local_468);
    if (0xf < local_450) {
      if (0xfff < local_450 + 1) {
        if ((char *)0x1f < local_468[0] + (-8 - *(longlong *)(local_468[0] + -8))) {
                    /* WARNING: Subroutine does not return */
          FUN_1801b4328(*(longlong *)(local_468[0] + -8),local_450 + 0x28);
        }
      }
      thunk_FUN_1801b8da8();
    }
    local_458 = 0;
    local_450 = 0xf;
    local_468[0] = (char *)((ulonglong)local_468[0] & 0xffffffffffffff00);
    if (local_430 < 0x10) goto LAB_1800ab613;
    if (0xfff < local_430 + 1) {
      if (0x1f < (local_448[0] - *(longlong *)(local_448[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        FUN_1801b4328(*(longlong *)(local_448[0] + -8),local_430 + 0x28);
      }
    }
  }
  else {
    iVar6 = FUN_18001d010();
    if (iVar6 < 2) goto LAB_1800ab613;
    FUN_18000f920(local_428,0x3ff,"Failed to get extension.");
    local_438 = 0;
    local_430 = 0xf;
    local_448[0] = 0;
    lVar7 = -1;
    do {
      lVar1 = lVar7 + 1;
      lVar7 = lVar7 + 1;
    } while (local_428[lVar1] != '\0');
    FUN_180005250(local_448,local_428);
    local_458 = 0;
    local_450 = 0xf;
    local_468[0] = (char *)0x0;
    local_468[0] = (char *)FUN_180184f54(0x20);
    uVar2 = s_setMJPEGEncodingQuality_1801eca28._8_8_;
    local_458 = 0x17;
    local_450 = 0x1f;
    *(undefined8 *)local_468[0] = s_setMJPEGEncodingQuality_1801eca28._0_8_;
    *(undefined8 *)(local_468[0] + 8) = uVar2;
    *(undefined4 *)(local_468[0] + 0x10) = s_setMJPEGEncodingQuality_1801eca28._16_4_;
    *(undefined2 *)(local_468[0] + 0x14) = s_setMJPEGEncodingQuality_1801eca28._20_2_;
    local_468[0][0x16] = s_setMJPEGEncodingQuality_1801eca28[0x16];
    local_468[0][0x17] = '\0';
    DVar5 = GetCurrentThreadId();
    local_480 = local_448;
    local_488 = (undefined1 **)CONCAT44(local_488._4_4_,0x68a);
    FUN_18001dc80(2,DVar5,&DAT_18024d338,local_468);
    if (0xf < local_450) {
      if (0xfff < local_450 + 1) {
        if ((char *)0x1f < local_468[0] + (-8 - *(longlong *)(local_468[0] + -8))) {
                    /* WARNING: Subroutine does not return */
          FUN_1801b4328(*(longlong *)(local_468[0] + -8),local_450 + 0x28);
        }
      }
      thunk_FUN_1801b8da8();
    }
    local_458 = 0;
    local_450 = 0xf;
    local_468[0] = (char *)((ulonglong)local_468[0] & 0xffffffffffffff00);
    if (local_430 < 0x10) goto LAB_1800ab613;
    if (0xfff < local_430 + 1) {
      if (0x1f < (local_448[0] - *(longlong *)(local_448[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        FUN_1801b4328(*(longlong *)(local_448[0] + -8),local_430 + 0x28);
      }
    }
  }
  local_450 = 0xf;
  local_458 = 0;
  thunk_FUN_1801b8da8();
LAB_1800ab613:
  if (puVar3 != (undefined1 *)0x0) {
    thunk_FUN_1801b8da8(puVar3);
  }
  return iVar4;
}



// FUNCTION 180044240 FUN_180044240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180044240(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined2 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined1 uStack_f7;
  undefined2 uStack_f6;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined4 uStack_f1;
  undefined1 uStack_ed;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  byte bStack_e8;
  undefined1 uStack_e7;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined1 uStack_e4;
  undefined1 uStack_e3;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined2 uStack_be;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined1 local_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined2 uStack_b2;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  ushort uStack_9a;
  
  puVar13 = DAT_180252ed8;
  uVar5 = _UNK_1801ec058;
  uVar12 = _UNK_1801ebf68;
  uVar3 = _DAT_1801ebf60;
  local_118 = 0;
  local_f8 = 1;
  uStack_f7 = 1;
  uStack_f6 = 0;
  uStack_f4 = 1;
  uStack_f3 = 0;
  uStack_f2 = 1;
  uStack_f1 = 0x10101;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_e9 = 0;
  uStack_e6 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_d4 = 0;
  uVar17 = uStack_d4;
  uStack_d0 = 0;
  uStack_cc = 1;
  uStack_cb = 0;
  uStack_ca = 1;
  uStack_c9 = 1;
  uVar18 = uStack_c9;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  uVar19 = uStack_b9;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uVar20 = uStack_b2;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 0;
  uStack_ab = 0;
  uStack_aa = 0;
  uStack_a9 = 0;
  uVar21 = uStack_a9;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uVar22 = uStack_a1;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  lVar9 = (ulonglong)uStack_9a << 0x30;
  uVar2 = CONCAT35((int3)(uStack_110 >> 0x28),0x100000000);
  uStack_eb = 1;
  uStack_ea = 1;
  uVar14 = uStack_ea;
  bStack_e8 = 1;
  uStack_e7 = 1;
  uStack_e2 = 1;
  uStack_e1 = 1;
  uVar15 = uStack_e1;
  uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
  uVar16 = uStack_e0;
  uStack_dc = 0x1a;
  uVar1 = CONCAT44(0x1a,uStack_e0);
  local_d8 = 4;
  uStack_c8 = 1;
  uStack_c7 = 1;
  uStack_c6 = 1;
  uStack_c1 = 1;
  local_128 = _DAT_1801ec050;
  uStack_120 = _UNK_1801ec058;
  local_108 = _DAT_1801ebf60;
  uStack_100 = _UNK_1801ebf68;
  uStack_110 = uVar2;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = _DAT_1801ec050;
    puVar13[1] = uVar5;
    puVar13[2] = 0;
    puVar13[3] = uVar2;
    puVar13[4] = uVar3;
    puVar13[5] = uVar12;
    puVar13[6] = 0x101000100000101;
    puVar13[7] = 0x1010000000101;
    puVar13[8] = 0x101000000000101;
    puVar13[9] = uVar1;
    puVar13[10] = 4;
    puVar13[0xb] = 0x101000100000000;
    puVar13[0xc] = 0x100000000010101;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = lVar9;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  uVar5 = local_128;
  puVar13 = DAT_180252ed8;
  uVar23 = (undefined4)uStack_120;
  uStack_120 = CONCAT44(0x3513,(undefined4)uStack_120);
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = local_128;
    puVar13[1] = uStack_120;
    puVar13[2] = 0;
    puVar13[3] = uVar2;
    puVar13[4] = uVar3;
    puVar13[5] = uVar12;
    puVar13[6] = 0x101000100000101;
    puVar13[7] = 0x1010000000101;
    puVar13[8] = 0x101000000000101;
    puVar13[9] = uVar1;
    puVar13[10] = 4;
    puVar13[0xb] = 0x101000100000000;
    puVar13[0xc] = 0x100000000010101;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = lVar9;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  local_128 = CONCAT44(SUB84(uVar5,4),9);
  uStack_120 = CONCAT44(0x1510,uVar23);
  local_118 = 0;
  local_108 = uVar3;
  uStack_100 = uVar12;
  local_f8 = 1;
  uStack_f7 = 1;
  uStack_f6 = 0;
  uStack_f4 = 1;
  uStack_f3 = 0;
  uStack_f2 = 1;
  uStack_f1 = 0x10101;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_eb = 1;
  uStack_e9 = 0;
  bStack_e8 = 1;
  uStack_e7 = 1;
  uStack_e6 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e2 = 1;
  uStack_dc = 0x1a;
  local_d8 = 4;
  uStack_d0 = 0;
  uStack_cc = 1;
  uStack_cb = 0;
  uStack_ca = 1;
  uStack_c8 = 1;
  uStack_c7 = 1;
  uStack_c6 = 1;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 1;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 0;
  uStack_ab = 0;
  uStack_aa = 0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  if (DAT_180252ed8 == DAT_180252ee0) {
    uStack_110 = uVar2;
    uStack_ea = uVar14;
    uStack_e1 = uVar15;
    uStack_e0 = uVar16;
    uStack_d4 = uVar17;
    uStack_c9 = uVar18;
    uStack_b9 = uVar19;
    uStack_b2 = uVar20;
    uStack_a9 = uVar21;
    uStack_a1 = uVar22;
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = local_128;
    puVar13[1] = uStack_120;
    puVar13[2] = 0;
    puVar13[3] = uVar2;
    puVar13[4] = uVar3;
    puVar13[5] = uVar12;
    puVar13[6] = 0x101000100000101;
    puVar13[7] = 0x1010000000101;
    puVar13[8] = 0x101000000000101;
    puVar13[9] = uVar1;
    puVar13[10] = 4;
    puVar13[0xb] = 0x101000100000000;
    puVar13[0xc] = 0x100000000010101;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = lVar9;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
    uStack_110 = uVar2;
    uStack_e0 = uVar16;
  }
  puVar13 = DAT_180252ed8;
  uVar5 = _UNK_1801ec048;
  uVar12 = _UNK_1801ebf68;
  uVar3 = _DAT_1801ebf60;
  uStack_eb = 1;
  uStack_ea = 1;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  local_118 = 0;
  local_f8 = 1;
  uStack_f7 = 1;
  uStack_f6 = 0;
  uStack_f4 = 1;
  uStack_f3 = 0;
  uStack_f2 = 1;
  uStack_f1 = 0x10001;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_e6 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 0;
  uStack_ab = 0;
  uStack_aa = 0;
  uStack_a9 = 0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  uVar4 = (ulonglong)uStack_9a;
  uVar2 = CONCAT35((int3)(uStack_110 >> 0x28),0x100000000);
  uStack_e7 = 1;
  uStack_e2 = 1;
  uStack_e1 = 1;
  uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
  uStack_dc = 0x1a;
  uVar1 = CONCAT44(0x1a,uStack_e0);
  local_d8 = 4;
  uStack_cc = 1;
  uStack_c1 = 1;
  local_108 = _DAT_1801ebf60;
  uStack_100 = _UNK_1801ebf68;
  local_128 = _DAT_1801ec040;
  uStack_120 = _UNK_1801ec048;
  uStack_110 = uVar2;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = _DAT_1801ec040;
    puVar13[1] = uVar5;
    puVar13[2] = 0;
    puVar13[3] = uVar2;
    puVar13[4] = uVar3;
    puVar13[5] = uVar12;
    puVar13[6] = 0x101000100000101;
    puVar13[7] = 0x1010000000100;
    puVar13[8] = 0x101000000000100;
    puVar13[9] = uVar1;
    puVar13[10] = 4;
    puVar13[0xb] = 0x100000000;
    puVar13[0xc] = 0x100000000000000;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = uVar4 << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uStack_120 = CONCAT44(0x3311,(undefined4)uStack_120);
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = local_128;
    puVar13[1] = uStack_120;
    puVar13[2] = 0;
    puVar13[3] = uVar2;
    puVar13[4] = uVar3;
    puVar13[5] = uVar12;
    puVar13[6] = 0x101000100000101;
    puVar13[7] = 0x1010000000100;
    puVar13[8] = 0x101000000000100;
    puVar13[9] = uVar1;
    puVar13[10] = 4;
    puVar13[0xb] = 0x100000000;
    puVar13[0xc] = 0x100000000000000;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = uVar4 << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uVar1 = _UNK_1801ec018;
  uVar26 = _UNK_1801ebfbc;
  uVar25 = _UNK_1801ebfb8;
  uVar24 = _UNK_1801ebfb4;
  uVar23 = _DAT_1801ebfb0;
  local_118 = 0;
  local_108 = CONCAT44(_UNK_1801ebfb4,_DAT_1801ebfb0);
  uStack_100 = CONCAT44(_UNK_1801ebfbc,_UNK_1801ebfb8);
  uStack_f6 = 0x101;
  uStack_f4 = 1;
  uStack_f3 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_eb = 1;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e7 = 1;
  uStack_e6 = 1;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 1;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 1;
  uStack_ab = 0;
  uStack_aa = 1;
  uStack_a9 = 1;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  local_128 = _DAT_1801ec010;
  uStack_120 = _UNK_1801ec018;
  uStack_110 = CONCAT35((int3)(uStack_110 >> 0x28),0x100000000);
  local_f8 = 1;
  uStack_f7 = 1;
  uStack_f2 = 1;
  uStack_f1 = 1;
  uStack_e2 = 1;
  uStack_e1 = 1;
  uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
  uStack_dc = 0x1a;
  local_d8 = 2;
  uStack_cc = 1;
  uStack_c1 = 1;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
    uVar23 = _DAT_1801ebfb0;
    uVar24 = _UNK_1801ebfb4;
    uVar25 = _UNK_1801ebfb8;
    uVar26 = _UNK_1801ebfbc;
  }
  else {
    *DAT_180252ed8 = _DAT_1801ec010;
    puVar13[1] = uVar1;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    *(undefined4 *)(puVar13 + 4) = uVar23;
    *(undefined4 *)((longlong)puVar13 + 0x24) = uVar24;
    *(undefined4 *)(puVar13 + 5) = uVar25;
    *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar26;
    puVar13[6] = 0x101000101010101;
    puVar13[7] = 0x10000000000;
    puVar13[8] = 0x101000000010100;
    puVar13[9] = CONCAT44(0x1a,uStack_e0);
    puVar13[10] = 2;
    puVar13[0xb] = 0x100000000;
    puVar13[0xc] = 0x100000000000000;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0x1000000;
    puVar13[0xf] = 0x101000100000000;
    puVar13[0x10] = 0;
    puVar13[0x11] = (ulonglong)uStack_9a << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uVar1 = _UNK_1801ebff8;
  local_128 = _DAT_1801ebff0;
  uStack_120 = _UNK_1801ebff8;
  local_118 = 0;
  uStack_f6 = 0x101;
  uStack_f4 = 1;
  uStack_f3 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_eb = 1;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e7 = 1;
  uStack_e6 = 1;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 1;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 1;
  uStack_ab = 0;
  uStack_aa = 1;
  uStack_a9 = 1;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  uStack_110 = CONCAT35((int3)(uStack_110 >> 0x28),0x100000000);
  local_108 = CONCAT44(uVar24,uVar23);
  uStack_100 = CONCAT44(uVar26,uVar25);
  local_f8 = 1;
  uStack_f7 = 1;
  uStack_f2 = 1;
  uStack_f1 = 1;
  uStack_e2 = 1;
  uStack_e1 = 1;
  uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
  uStack_dc = 0x1a;
  local_d8 = 2;
  uStack_cc = 1;
  uStack_c1 = 1;
  uStack_a8 = 1;
  uStack_a7 = 1;
  uStack_a6 = 1;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = _DAT_1801ebff0;
    puVar13[1] = uVar1;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    *(undefined4 *)(puVar13 + 4) = uVar23;
    *(undefined4 *)((longlong)puVar13 + 0x24) = uVar24;
    *(undefined4 *)(puVar13 + 5) = uVar25;
    *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar26;
    puVar13[6] = 0x101000101010101;
    puVar13[7] = 0x10000000000;
    puVar13[8] = 0x101000000010100;
    puVar13[9] = CONCAT44(0x1a,uStack_e0);
    puVar13[10] = 2;
    puVar13[0xb] = 0x100000000;
    puVar13[0xc] = 0x100000000000000;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0x1000000;
    puVar13[0xf] = 0x101000100000000;
    puVar13[0x10] = 0x10101;
    puVar13[0x11] = (ulonglong)uStack_9a << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  local_118 = 0;
  uStack_110 = uStack_110 & 0xffffff0000000000;
  uStack_f4 = 1;
  uStack_f3 = 0;
  uStack_f1 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e0 = uStack_e0 & 0xffffff00;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 1;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 1;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 1;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 1;
  uStack_a2 = 1;
  uStack_a1 = 1;
  uStack_a0 = 1;
  uStack_9f = 0;
  uStack_9e = 1;
  uStack_9d = 1;
  uStack_9c = 1;
  uStack_9b = 0;
  local_128 = 0x10000000d;
  uStack_120 = 0x1531000007ca;
  local_f8 = 1;
  uStack_f7 = 1;
  uStack_f6 = 0x101;
  uStack_f2 = 1;
  uStack_eb = 1;
  uStack_e2 = 1;
  uStack_e1 = 1;
  uStack_cc = 1;
  uStack_e7 = 1;
  uStack_e6 = 1;
  uStack_c9 = 1;
  uStack_a9 = 1;
  uStack_a8 = 1;
  uStack_a3 = 1;
  uStack_ac = 1;
  uStack_ab = 1;
  uStack_aa = 1;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = 0x10000000d;
    puVar13[1] = 0x1531000007ca;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    puVar13[4] = local_108;
    puVar13[5] = uStack_100;
    puVar13[6] = 0x1000101010101;
    puVar13[7] = 0x10000000000;
    puVar13[8] = 0x101000000010100;
    puVar13[9] = (ulonglong)uStack_e0;
    puVar13[10] = 0;
    puVar13[0xb] = 0x100000100000000;
    puVar13[0xc] = 0x1000000;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0x1000000;
    puVar13[0xf] = 0x101010101000000;
    puVar13[0x10] = 0x101010100000001;
    puVar13[0x11] = CONCAT26(uStack_9a,0x101010001);
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uVar1 = _UNK_1801ec0c8;
  local_128 = _DAT_1801ec0c0;
  uStack_120 = _UNK_1801ec0c8;
  local_118 = 0;
  uStack_110 = uStack_110 & 0xffffff0000000000;
  local_f8 = 0;
  uStack_f7 = 0;
  uStack_f6 = 0;
  uStack_f4 = 0;
  uStack_f3 = 0;
  uStack_f2 = 0;
  uStack_f1 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_eb = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e7 = 0;
  uStack_e6 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e2 = 0;
  uStack_e1 = 0;
  uStack_e0 = uStack_e0 & 0xffffff00;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 0;
  uStack_ab = 0;
  uStack_aa = 0;
  uStack_a9 = 0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = _DAT_1801ec0c0;
    puVar13[1] = uVar1;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    puVar13[4] = local_108;
    puVar13[5] = uStack_100;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[8] = 0;
    puVar13[9] = (ulonglong)uStack_e0;
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = (ulonglong)uStack_9a << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uVar1 = _UNK_1801ec088;
  local_128 = _DAT_1801ec080;
  uStack_120 = _UNK_1801ec088;
  local_118 = 0;
  uStack_110 = uStack_110 & 0xffffff0000000000;
  local_f8 = 0;
  uStack_f7 = 0;
  uStack_f6 = 0;
  uStack_f4 = 0;
  uStack_f3 = 0;
  uStack_f2 = 0;
  uStack_f1 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_eb = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e7 = 0;
  uStack_e6 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e2 = 0;
  uStack_e1 = 0;
  uStack_e0 = uStack_e0 & 0xffffff00;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 0;
  uStack_ab = 0;
  uStack_aa = 0;
  uStack_a9 = 0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = _DAT_1801ec080;
    puVar13[1] = uVar1;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    puVar13[4] = local_108;
    puVar13[5] = uStack_100;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[8] = 0;
    puVar13[9] = (ulonglong)uStack_e0;
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = (ulonglong)uStack_9a << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uVar1 = _UNK_1801ec0f8;
  local_128 = _DAT_1801ec0f0;
  uStack_120 = _UNK_1801ec0f8;
  local_118 = 0;
  uStack_110 = uStack_110 & 0xffffff0000000000;
  local_f8 = 0;
  uStack_f7 = 0;
  uStack_f6 = 0;
  uStack_f4 = 0;
  uStack_f3 = 0;
  uStack_f2 = 0;
  uStack_f1 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_eb = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e7 = 0;
  uStack_e6 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e2 = 0;
  uStack_e1 = 0;
  uStack_e0 = uStack_e0 & 0xffffff00;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 0;
  uStack_ab = 0;
  uStack_aa = 0;
  uStack_a9 = 0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = _DAT_1801ec0f0;
    puVar13[1] = uVar1;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    puVar13[4] = local_108;
    puVar13[5] = uStack_100;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[8] = 0;
    puVar13[9] = (ulonglong)uStack_e0;
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = (ulonglong)uStack_9a << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uVar1 = _UNK_1801ec0e8;
  local_128 = _DAT_1801ec0e0;
  uStack_120 = _UNK_1801ec0e8;
  local_118 = 0;
  uStack_110 = uStack_110 & 0xffffff0000000000;
  local_f8 = 0;
  uStack_f7 = 0;
  uStack_f6 = 0;
  uStack_f4 = 0;
  uStack_f3 = 0;
  uStack_f2 = 0;
  uStack_f1 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_eb = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e7 = 0;
  uStack_e6 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e2 = 0;
  uStack_e1 = 0;
  uStack_e0 = uStack_e0 & 0xffffff00;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 0;
  uStack_ab = 0;
  uStack_aa = 0;
  uStack_a9 = 0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = _DAT_1801ec0e0;
    puVar13[1] = uVar1;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    puVar13[4] = local_108;
    puVar13[5] = uStack_100;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[8] = 0;
    puVar13[9] = (ulonglong)uStack_e0;
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = (ulonglong)uStack_9a << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uVar1 = _UNK_1801ec0d8;
  local_128 = _DAT_1801ec0d0;
  uStack_120 = _UNK_1801ec0d8;
  local_118 = 0;
  uStack_110 = uStack_110 & 0xffffff0000000000;
  local_f8 = 0;
  uStack_f7 = 0;
  uStack_f6 = 0;
  uStack_f4 = 0;
  uStack_f3 = 0;
  uStack_f2 = 0;
  uStack_f1 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_eb = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e7 = 0;
  uStack_e6 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e2 = 0;
  uStack_e1 = 0;
  uStack_e0 = uStack_e0 & 0xffffff00;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 0;
  uStack_ab = 0;
  uStack_aa = 0;
  uStack_a9 = 0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = _DAT_1801ec0d0;
    puVar13[1] = uVar1;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    puVar13[4] = local_108;
    puVar13[5] = uStack_100;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[8] = 0;
    puVar13[9] = (ulonglong)uStack_e0;
    puVar13[10] = 0;
    puVar13[0xb] = 0;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = (ulonglong)uStack_9a << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uVar12 = _UNK_1801ec128;
  uVar3 = _UNK_1801ebf98;
  uVar2 = _DAT_1801ebf90;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_ab = 0;
  uStack_aa = 0;
  uStack_a9 = 0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  local_118 = 0;
  local_f8 = 0;
  uStack_f7 = 0;
  uStack_f6 = 0;
  uStack_f4 = 0;
  uStack_f3 = 0;
  uStack_f2 = 0;
  uStack_f1 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_eb = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e7 = 0;
  uStack_e6 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e2 = 0;
  uStack_e1 = 0;
  uStack_e0 = uStack_e0 & 0xffffff00;
  uVar4 = (ulonglong)uStack_e0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  uVar11 = (ulonglong)uStack_9a;
  uVar1 = CONCAT35((int3)(uStack_110 >> 0x28),0x100000000);
  uStack_cc = 1;
  local_108 = _DAT_1801ebf90;
  uStack_100 = _UNK_1801ebf98;
  local_128 = _DAT_1801ec120;
  uStack_120 = _UNK_1801ec128;
  uStack_110 = uVar1;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = _DAT_1801ec120;
    puVar13[1] = uVar12;
    puVar13[2] = 0;
    puVar13[3] = uVar1;
    puVar13[4] = uVar2;
    puVar13[5] = uVar3;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[8] = 0;
    puVar13[9] = uVar4;
    puVar13[10] = 0;
    puVar13[0xb] = 0x100000000;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = uVar11 << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uStack_120 = CONCAT44(0x513b,(undefined4)uStack_120);
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = local_128;
    puVar13[1] = uStack_120;
    puVar13[2] = 0;
    puVar13[3] = uVar1;
    puVar13[4] = uVar2;
    puVar13[5] = uVar3;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[8] = 0;
    puVar13[9] = uVar4;
    puVar13[10] = 0;
    puVar13[0xb] = 0x100000000;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = uVar11 << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uVar1 = _UNK_1801ebfd8;
  uVar26 = _UNK_1801ebf8c;
  uVar25 = _UNK_1801ebf88;
  uVar24 = _UNK_1801ebf84;
  uVar23 = _DAT_1801ebf80;
  local_118 = 0;
  local_108 = CONCAT44(_UNK_1801ebf84,_DAT_1801ebf80);
  uStack_100 = CONCAT44(_UNK_1801ebf8c,_UNK_1801ebf88);
  uStack_f7 = 0;
  uStack_f6 = 0;
  uStack_f4 = 0;
  uStack_f3 = 0;
  uStack_f2 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_eb = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e7 = 1;
  uStack_e6 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e2 = 1;
  uStack_e1 = 1;
  uStack_e0 = uStack_e0 & 0xffffff00;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 0;
  uStack_ab = 0;
  uStack_aa = 0;
  uStack_a9 = 0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  local_128 = _DAT_1801ebfd0;
  uStack_120 = _UNK_1801ebfd8;
  uStack_110 = CONCAT35((int3)(uStack_110 >> 0x28),0x100000000);
  local_f8 = 1;
  uStack_f1 = 1;
  uStack_cc = 1;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
    uVar23 = _DAT_1801ebf80;
    uVar24 = _UNK_1801ebf84;
    uVar25 = _UNK_1801ebf88;
    uVar26 = _UNK_1801ebf8c;
  }
  else {
    *DAT_180252ed8 = _DAT_1801ebfd0;
    puVar13[1] = uVar1;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    *(undefined4 *)(puVar13 + 4) = uVar23;
    *(undefined4 *)((longlong)puVar13 + 0x24) = uVar24;
    *(undefined4 *)(puVar13 + 5) = uVar25;
    *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar26;
    puVar13[6] = 0x100000000000001;
    puVar13[7] = 0;
    puVar13[8] = 0x101000000000100;
    puVar13[9] = (ulonglong)uStack_e0;
    puVar13[10] = 0;
    puVar13[0xb] = 0x100000000;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = (ulonglong)uStack_9a << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uVar1 = _UNK_1801ebfe8;
  local_128 = _DAT_1801ebfe0;
  uStack_120 = _UNK_1801ebfe8;
  local_118 = 0;
  uStack_f7 = 0;
  uStack_f6 = 0;
  uStack_f4 = 0;
  uStack_f3 = 0;
  uStack_f2 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_eb = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e7 = 0;
  uStack_e6 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e2 = 1;
  uStack_e1 = 1;
  uStack_e0 = uStack_e0 & 0xffffff00;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 0;
  uStack_ab = 0;
  uStack_aa = 0;
  uStack_a9 = 0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  uStack_110 = CONCAT35((int3)(uStack_110 >> 0x28),0x100000000);
  local_108 = CONCAT44(uVar24,uVar23);
  uStack_100 = CONCAT44(uVar26,uVar25);
  local_f8 = 1;
  uStack_f1 = 1;
  uStack_cc = 1;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = _DAT_1801ebfe0;
    puVar13[1] = uVar1;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    *(undefined4 *)(puVar13 + 4) = uVar23;
    *(undefined4 *)((longlong)puVar13 + 0x24) = uVar24;
    *(undefined4 *)(puVar13 + 5) = uVar25;
    *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar26;
    puVar13[6] = 0x100000000000001;
    puVar13[7] = 0;
    puVar13[8] = 0x101000000000000;
    puVar13[9] = (ulonglong)uStack_e0;
    puVar13[10] = 0;
    puVar13[0xb] = 0x100000000;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = (ulonglong)uStack_9a << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uVar1 = _UNK_1801ec038;
  uVar26 = _UNK_1801ebf7c;
  uVar25 = _UNK_1801ebf78;
  uVar24 = _UNK_1801ebf74;
  uVar23 = _DAT_1801ebf70;
  local_118 = 0;
  local_108 = CONCAT44(_UNK_1801ebf74,_DAT_1801ebf70);
  uStack_100 = CONCAT44(_UNK_1801ebf7c,_UNK_1801ebf78);
  local_f8 = 1;
  uStack_f7 = 0;
  uStack_f6 = 0x101;
  uStack_f4 = 1;
  uStack_f3 = 0;
  uStack_f2 = 1;
  uStack_f1 = 1;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_eb = 1;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e7 = 1;
  uStack_e6 = 1;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 0;
  uStack_ab = 0;
  uStack_aa = 0;
  uStack_a9 = 0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  local_128 = _DAT_1801ec030;
  uStack_120 = _UNK_1801ec038;
  uStack_110 = CONCAT35((int3)(uStack_110 >> 0x28),0x100000000);
  uStack_e2 = 1;
  uStack_e1 = 1;
  uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
  uStack_dc = 0x1a;
  local_d8 = 2;
  uStack_cc = 1;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,_DAT_1801ebf70,&local_128);
  }
  else {
    *DAT_180252ed8 = _DAT_1801ec030;
    puVar13[1] = uVar1;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    *(undefined4 *)(puVar13 + 4) = uVar23;
    *(undefined4 *)((longlong)puVar13 + 0x24) = uVar24;
    *(undefined4 *)(puVar13 + 5) = uVar25;
    *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar26;
    puVar13[6] = 0x101000101010001;
    puVar13[7] = 0x10000000000;
    puVar13[8] = 0x101000000010100;
    puVar13[9] = CONCAT44(0x1a,uStack_e0);
    puVar13[10] = 2;
    puVar13[0xb] = 0x100000000;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = (ulonglong)uStack_9a << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  local_118 = 0;
  uStack_110 = uStack_110 & 0xffffff0000000000;
  uStack_f4 = 1;
  uStack_f3 = 0;
  uStack_f1 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e7 = 1;
  uStack_e6 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e1 = 0;
  uStack_e0 = uStack_e0 & 0xffffff00;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 1;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 1;
  uStack_ac = 1;
  uStack_ab = 1;
  uStack_aa = 1;
  uStack_a9 = 1;
  uStack_a8 = 1;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 1;
  uStack_a1 = 0;
  uStack_a0 = 1;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  local_128 = 0x100000004;
  uStack_120 = 0x2113000007ca;
  local_f8 = 1;
  uStack_f7 = 1;
  uStack_f6 = 0x101;
  uStack_f2 = 1;
  uStack_eb = 1;
  uStack_cc = 1;
  uStack_e2 = 1;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = 0x100000004;
    puVar13[1] = 0x2113000007ca;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    puVar13[4] = local_108;
    puVar13[5] = uStack_100;
    puVar13[6] = 0x1000101010101;
    puVar13[7] = 0x10000000000;
    puVar13[8] = 0x1000000000100;
    puVar13[9] = (ulonglong)uStack_e0;
    puVar13[10] = 0;
    puVar13[0xb] = 0x100000000;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0x10000;
    puVar13[0xf] = 0x101010101000000;
    puVar13[0x10] = 0x1000000000001;
    puVar13[0x11] = CONCAT26(uStack_9a,1);
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uVar1 = _UNK_1801ec138;
  uVar26 = _UNK_1801ebfac;
  uVar25 = _UNK_1801ebfa8;
  uVar24 = _UNK_1801ebfa4;
  uVar23 = _DAT_1801ebfa0;
  local_118 = 0;
  local_108 = CONCAT44(_UNK_1801ebfa4,_DAT_1801ebfa0);
  uStack_100 = CONCAT44(_UNK_1801ebfac,_UNK_1801ebfa8);
  local_f8 = 0;
  uStack_f7 = 0;
  uStack_f6 = 0;
  uStack_f4 = 0;
  uStack_f3 = 0;
  uStack_f2 = 0;
  uStack_f1 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_eb = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e7 = 0;
  uStack_e6 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e2 = 1;
  uStack_e1 = 1;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 1;
  uStack_ad = 0;
  uStack_ac = 0;
  uStack_ab = 0;
  uStack_aa = 0;
  uStack_a9 = 0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  local_128 = _DAT_1801ec130;
  uStack_120 = _UNK_1801ec138;
  uStack_110 = CONCAT35((int3)(uStack_110 >> 0x28),0x100000000);
  uStack_bf = 1;
  uStack_be = 0x101;
  uStack_bc = 1;
  uStack_bb = 1;
  uStack_ba = 1;
  uStack_b9 = 1;
  uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
  uStack_dc = 0x1a;
  local_d8 = 4;
  uStack_cc = 1;
  uStack_ae = 1;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,_DAT_1801ebfa0,&local_128);
  }
  else {
    *DAT_180252ed8 = _DAT_1801ec130;
    puVar13[1] = uVar1;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    *(undefined4 *)(puVar13 + 4) = uVar23;
    *(undefined4 *)((longlong)puVar13 + 0x24) = uVar24;
    *(undefined4 *)(puVar13 + 5) = uVar25;
    *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar26;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[8] = 0x101000000000000;
    puVar13[9] = CONCAT44(0x1a,uStack_e0);
    puVar13[10] = 4;
    puVar13[0xb] = 0x100000000;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0x101010101010100;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0x10100;
    puVar13[0x10] = 0;
    puVar13[0x11] = (ulonglong)uStack_9a << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uVar1 = _UNK_1801ec108;
  uVar26 = _UNK_1801ebf7c;
  uVar25 = _UNK_1801ebf78;
  uVar24 = _UNK_1801ebf74;
  uVar23 = _DAT_1801ebf70;
  local_118 = 0;
  local_108 = CONCAT44(_UNK_1801ebf74,_DAT_1801ebf70);
  uStack_100 = CONCAT44(_UNK_1801ebf7c,_UNK_1801ebf78);
  local_f8 = 1;
  uStack_f7 = 0;
  uStack_f6 = 0x101;
  uStack_f4 = 1;
  uStack_f3 = 0;
  uStack_f1 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e2 = 0;
  uStack_e1 = 1;
  uStack_e0 = uStack_e0 & 0xffffff00;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 1;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 0;
  uStack_ab = 1;
  uStack_aa = 0;
  uStack_a9 = 0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  local_128 = _DAT_1801ec100;
  uStack_120 = _UNK_1801ec108;
  uStack_110 = CONCAT35((int3)(uStack_110 >> 0x28),0x100000000);
  uStack_f2 = 1;
  uStack_eb = 1;
  uStack_e7 = 1;
  uStack_e6 = 1;
  uStack_cc = 1;
  uStack_b5 = 1;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,_DAT_1801ebf70,&local_128);
  }
  else {
    *DAT_180252ed8 = _DAT_1801ec100;
    puVar13[1] = uVar1;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    *(undefined4 *)(puVar13 + 4) = uVar23;
    *(undefined4 *)((longlong)puVar13 + 0x24) = uVar24;
    *(undefined4 *)(puVar13 + 5) = uVar25;
    *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar26;
    puVar13[6] = 0x1000101010001;
    puVar13[7] = 0x10000000000;
    puVar13[8] = 0x100000000010100;
    puVar13[9] = (ulonglong)uStack_e0;
    puVar13[10] = 0;
    puVar13[0xb] = 0x100000000;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0x1010000;
    puVar13[0xf] = 0x10000000000;
    puVar13[0x10] = 0;
    puVar13[0x11] = (ulonglong)uStack_9a << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uVar1 = _UNK_1801ec118;
  uVar26 = _UNK_1801ebfac;
  uVar25 = _UNK_1801ebfa8;
  uVar24 = _UNK_1801ebfa4;
  uVar23 = _DAT_1801ebfa0;
  local_118 = 0;
  local_108 = CONCAT44(_UNK_1801ebfa4,_DAT_1801ebfa0);
  uStack_100 = CONCAT44(_UNK_1801ebfac,_UNK_1801ebfa8);
  local_f8 = 0;
  uStack_f7 = 0;
  uStack_f6 = 0;
  uStack_f4 = 0;
  uStack_f3 = 0;
  uStack_f2 = 0;
  uStack_f1 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_eb = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e7 = 0;
  uStack_e6 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e2 = 1;
  uStack_e1 = 1;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 1;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 0;
  uStack_ab = 0;
  uStack_aa = 0;
  uStack_a9 = 0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  local_128 = _DAT_1801ec110;
  uStack_120 = _UNK_1801ec118;
  uStack_110 = CONCAT35((int3)(uStack_110 >> 0x28),0x100000000);
  uStack_bf = 1;
  uStack_be = 0x101;
  uStack_bc = 1;
  uStack_bb = 1;
  uStack_ba = 1;
  uStack_b9 = 1;
  local_b8 = 1;
  uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
  uStack_dc = 0x1a;
  local_d8 = 4;
  uStack_cc = 1;
  uStack_b7 = 1;
  uStack_b4 = 1;
  uStack_b3 = 1;
  uStack_b2 = 0x101;
  uStack_b0 = 1;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,_DAT_1801ebfa0,&local_128);
  }
  else {
    *DAT_180252ed8 = _DAT_1801ec110;
    puVar13[1] = uVar1;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    *(undefined4 *)(puVar13 + 4) = uVar23;
    *(undefined4 *)((longlong)puVar13 + 0x24) = uVar24;
    *(undefined4 *)(puVar13 + 5) = uVar25;
    *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar26;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[8] = 0x101000000000000;
    puVar13[9] = CONCAT44(0x1a,uStack_e0);
    puVar13[10] = 4;
    puVar13[0xb] = 0x100000000;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0x101010101010101;
    puVar13[0xe] = 0x101010100000101;
    puVar13[0xf] = 1;
    puVar13[0x10] = 0;
    puVar13[0x11] = (ulonglong)uStack_9a << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uVar1 = _UNK_1801ec098;
  uVar26 = _UNK_1801ebfac;
  uVar25 = _UNK_1801ebfa8;
  uVar24 = _UNK_1801ebfa4;
  uVar23 = _DAT_1801ebfa0;
  local_118 = 0;
  local_108 = CONCAT44(_UNK_1801ebfa4,_DAT_1801ebfa0);
  uStack_100 = CONCAT44(_UNK_1801ebfac,_UNK_1801ebfa8);
  local_f8 = 0;
  uStack_f7 = 0;
  uStack_f6 = 0;
  uStack_f4 = 0;
  uStack_f3 = 0;
  uStack_f2 = 0;
  uStack_f1 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_eb = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e7 = 0;
  uStack_e6 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e2 = 1;
  uStack_e1 = 1;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 1;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 0;
  uStack_ab = 0;
  uStack_aa = 0;
  uStack_a9 = 0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  local_128 = _DAT_1801ec090;
  uStack_120 = _UNK_1801ec098;
  uStack_110 = CONCAT35((int3)(uStack_110 >> 0x28),0x100000000);
  uStack_bf = 1;
  uStack_be = 0x101;
  uStack_bc = 1;
  uStack_bb = 1;
  uStack_ba = 1;
  uStack_b9 = 1;
  local_b8 = 1;
  uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
  uStack_dc = 0x1a;
  local_d8 = 4;
  uStack_cc = 1;
  uStack_b7 = 1;
  uStack_b4 = 1;
  uStack_b3 = 1;
  uStack_b2 = 0x101;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,_DAT_1801ebfa0,&local_128);
  }
  else {
    *DAT_180252ed8 = _DAT_1801ec090;
    puVar13[1] = uVar1;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    *(undefined4 *)(puVar13 + 4) = uVar23;
    *(undefined4 *)((longlong)puVar13 + 0x24) = uVar24;
    *(undefined4 *)(puVar13 + 5) = uVar25;
    *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar26;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[8] = 0x101000000000000;
    puVar13[9] = CONCAT44(0x1a,uStack_e0);
    puVar13[10] = 4;
    puVar13[0xb] = 0x100000000;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0x101010101010101;
    puVar13[0xe] = 0x101010100000101;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = (ulonglong)uStack_9a << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uVar1 = _UNK_1801ec078;
  local_128 = _DAT_1801ec070;
  uStack_120 = _UNK_1801ec078;
  local_118 = 0;
  uStack_110 = uStack_110 & 0xffffff0000000000;
  uStack_f4 = 1;
  uStack_f3 = 0;
  uStack_f1 = 0x1000000;
  uStack_eb = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e2 = 1;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 1;
  uStack_c8 = 1;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 1;
  uStack_a9 = 1;
  uStack_a8 = 1;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_9e = 1;
  uStack_9d = 1;
  uStack_9c = 0;
  uStack_9b = 0;
  local_f8 = 1;
  uStack_f7 = 1;
  uStack_f6 = 0x101;
  uStack_f2 = 1;
  uStack_b5 = 1;
  uStack_a2 = 1;
  uStack_a1 = 1;
  uStack_ed = 1;
  uStack_ec = 1;
  uStack_e1 = 1;
  uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
  uStack_dc = 5;
  local_d8 = 2;
  uStack_cc = 1;
  uStack_e7 = 1;
  uStack_e6 = 1;
  uStack_c7 = 1;
  uStack_c6 = 1;
  uStack_c5 = 1;
  uStack_c4 = 1;
  uStack_c3 = 1;
  uStack_c2 = 1;
  uStack_a5 = 1;
  uStack_a4 = 1;
  uStack_a3 = 1;
  uStack_a0 = 1;
  uStack_9f = 1;
  uStack_ac = 1;
  uStack_ab = 1;
  uStack_aa = 1;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = _DAT_1801ec070;
    puVar13[1] = uVar1;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    puVar13[4] = local_108;
    puVar13[5] = uStack_100;
    puVar13[6] = 0x1000101010101;
    puVar13[7] = 0x101010000;
    puVar13[8] = 0x101000000010100;
    puVar13[9] = CONCAT44(5,uStack_e0);
    puVar13[10] = 2;
    puVar13[0xb] = 0x100000100000000;
    puVar13[0xc] = 0x1010101010101;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0x1000000;
    puVar13[0xf] = 0x101010101000000;
    puVar13[0x10] = 0x101010101000001;
    puVar13[0x11] = CONCAT26(uStack_9a,0x1010101);
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uVar1 = _UNK_1801ec028;
  local_128 = _DAT_1801ec020;
  uStack_120 = _UNK_1801ec028;
  local_118 = 0;
  uStack_110 = uStack_110 & 0xffffff0000000000;
  uStack_f4 = 1;
  uStack_f3 = 0;
  uStack_f1 = 0x1000000;
  uStack_eb = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e2 = 1;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 1;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 1;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 1;
  uStack_a9 = 1;
  uStack_a8 = 1;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a4 = 1;
  uStack_a3 = 0;
  uStack_a2 = 1;
  uStack_a1 = 1;
  uStack_9e = 1;
  uStack_9d = 1;
  uStack_9c = 0;
  uStack_9b = 0;
  local_f8 = 1;
  uStack_f7 = 1;
  uStack_f6 = 0x101;
  uStack_f2 = 1;
  uStack_ed = 1;
  uStack_ec = 1;
  uStack_e1 = 1;
  uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
  uStack_dc = 5;
  local_d8 = 2;
  uStack_cc = 1;
  uStack_e7 = 1;
  uStack_e6 = 1;
  uStack_c9 = 1;
  uStack_a5 = 1;
  uStack_a0 = 1;
  uStack_9f = 1;
  uStack_ac = 1;
  uStack_ab = 1;
  uStack_aa = 1;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = _DAT_1801ec020;
    puVar13[1] = uVar1;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    puVar13[4] = local_108;
    puVar13[5] = uStack_100;
    puVar13[6] = 0x1000101010101;
    puVar13[7] = 0x101010000;
    puVar13[8] = 0x101000000010100;
    puVar13[9] = CONCAT44(5,uStack_e0);
    puVar13[10] = 2;
    puVar13[0xb] = 0x100000100000000;
    puVar13[0xc] = 0x1000000;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0x1000000;
    puVar13[0xf] = 0x101010101000000;
    puVar13[0x10] = 0x101000101000001;
    puVar13[0x11] = CONCAT26(uStack_9a,0x1010101);
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uVar1 = _UNK_1801ec008;
  local_128 = _DAT_1801ec000;
  uStack_120 = _UNK_1801ec008;
  local_118 = 0;
  uStack_110 = uStack_110 & 0xffffff0000000000;
  uStack_f4 = 1;
  uStack_f3 = 0;
  uStack_f1 = 0;
  uStack_ed = 0;
  uStack_ec = 1;
  uStack_eb = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e7 = 1;
  uStack_e6 = 1;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e2 = 1;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 1;
  uStack_c8 = 1;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 1;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 1;
  uStack_a1 = 1;
  uStack_a0 = 1;
  uStack_9c = 1;
  uStack_9b = 0;
  local_f8 = 1;
  uStack_f7 = 1;
  uStack_f6 = 0x101;
  uStack_f2 = 1;
  uStack_b5 = 1;
  uStack_e1 = 1;
  uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
  uStack_dc = 5;
  local_d8 = 2;
  uStack_cc = 1;
  uStack_c7 = 1;
  uStack_c6 = 1;
  uStack_c5 = 1;
  uStack_c4 = 1;
  uStack_c3 = 1;
  uStack_c2 = 1;
  uStack_a9 = 1;
  uStack_a8 = 1;
  uStack_9f = 1;
  uStack_9e = 1;
  uStack_ac = 1;
  uStack_ab = 1;
  uStack_aa = 1;
  uStack_9d = 1;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = _DAT_1801ec000;
    puVar13[1] = uVar1;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    puVar13[4] = local_108;
    puVar13[5] = uStack_100;
    puVar13[6] = 0x1000101010101;
    puVar13[7] = 0x100000000;
    puVar13[8] = 0x101000000010100;
    puVar13[9] = CONCAT44(5,uStack_e0);
    puVar13[10] = 2;
    puVar13[0xb] = 0x100000100000000;
    puVar13[0xc] = 0x1010101010101;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0x1000000;
    puVar13[0xf] = 0x101010101000000;
    puVar13[0x10] = 0x101000000000001;
    puVar13[0x11] = CONCAT26(uStack_9a,0x101010101);
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  local_118 = 0;
  uStack_110 = uStack_110 & 0xffffff0000000000;
  uStack_f4 = 1;
  uStack_f3 = 0;
  uStack_f1 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e0 = uStack_e0 & 0xffffff00;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 1;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 1;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 1;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 1;
  uStack_a2 = 1;
  uStack_a1 = 1;
  uStack_a0 = 1;
  uStack_9f = 0;
  uStack_9e = 1;
  uStack_9d = 1;
  uStack_9c = 0;
  uStack_9b = 0;
  local_128 = 0x100000012;
  uStack_120 = 0x1553000007ca;
  local_f8 = 1;
  uStack_f7 = 1;
  uStack_f6 = 0x101;
  uStack_f2 = 1;
  uStack_eb = 1;
  uStack_e2 = 1;
  uStack_e1 = 1;
  uStack_cc = 1;
  uStack_e7 = 1;
  uStack_e6 = 1;
  uStack_c9 = 1;
  uStack_a9 = 1;
  uStack_a8 = 1;
  uStack_a3 = 1;
  uStack_ac = 1;
  uStack_ab = 1;
  uStack_aa = 1;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = 0x100000012;
    puVar13[1] = 0x1553000007ca;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    puVar13[4] = local_108;
    puVar13[5] = uStack_100;
    puVar13[6] = 0x1000101010101;
    puVar13[7] = 0x10000000000;
    puVar13[8] = 0x101000000010100;
    puVar13[9] = (ulonglong)uStack_e0;
    puVar13[10] = 0;
    puVar13[0xb] = 0x100000100000000;
    puVar13[0xc] = 0x1000000;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0x1000000;
    puVar13[0xf] = 0x101010101000000;
    puVar13[0x10] = 0x101010100000001;
    puVar13[0x11] = CONCAT26(uStack_9a,0x1010001);
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  local_118 = 0;
  uStack_110 = uStack_110 & 0xffffff0000000000;
  uStack_f4 = 1;
  uStack_f3 = 0;
  uStack_f1 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e0 = uStack_e0 & 0xffffff00;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 1;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 1;
  uStack_ac = 1;
  uStack_ab = 1;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 1;
  uStack_a1 = 0;
  uStack_a0 = 1;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  local_128 = 0x100000008;
  uStack_120 = 0x3112000007ca;
  local_f8 = 1;
  uStack_f7 = 1;
  uStack_f6 = 0x101;
  uStack_f2 = 1;
  uStack_eb = 1;
  uStack_e2 = 1;
  uStack_e1 = 1;
  uStack_cc = 1;
  uStack_e7 = 1;
  uStack_e6 = 1;
  uStack_c9 = 1;
  uStack_a9 = 1;
  uStack_a8 = 1;
  uStack_aa = 1;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = 0x100000008;
    puVar13[1] = 0x3112000007ca;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    puVar13[4] = local_108;
    puVar13[5] = uStack_100;
    puVar13[6] = 0x1000101010101;
    puVar13[7] = 0x10000000000;
    puVar13[8] = 0x101000000010100;
    puVar13[9] = (ulonglong)uStack_e0;
    puVar13[10] = 0;
    puVar13[0xb] = 0x100000100000000;
    puVar13[0xc] = 0x1000000;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0x101010101000000;
    puVar13[0x10] = 0x1000000000001;
    puVar13[0x11] = CONCAT26(uStack_9a,1);
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  local_118 = 0;
  uStack_110 = uStack_110 & 0xffffff0000000000;
  uStack_f4 = 1;
  uStack_f3 = 0;
  uStack_f1 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_eb = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e6 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e1 = 0;
  uStack_e0 = uStack_e0 & 0xffffff00;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 1;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 1;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 1;
  uStack_a1 = 0;
  uStack_a0 = 1;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  local_128 = 0x100000015;
  uStack_120 = 0x571000007ca;
  local_f8 = 1;
  uStack_f7 = 1;
  uStack_f6 = 0x101;
  uStack_f2 = 1;
  uStack_e2 = 1;
  uStack_cc = 1;
  uStack_e7 = 1;
  uStack_c9 = 1;
  uStack_a9 = 1;
  uStack_a8 = 1;
  uStack_ac = 1;
  uStack_ab = 1;
  uStack_aa = 1;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = 0x100000015;
    puVar13[1] = 0x571000007ca;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    puVar13[4] = local_108;
    puVar13[5] = uStack_100;
    puVar13[6] = 0x1000101010101;
    puVar13[7] = 0;
    puVar13[8] = 0x1000000000100;
    puVar13[9] = (ulonglong)uStack_e0;
    puVar13[10] = 0;
    puVar13[0xb] = 0x100000100000000;
    puVar13[0xc] = 0x1000000;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0x101010101000000;
    puVar13[0x10] = 0x1000000000001;
    puVar13[0x11] = CONCAT26(uStack_9a,1);
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uVar1 = _UNK_1801ec068;
  uVar26 = _UNK_1801ebfcc;
  uVar25 = _UNK_1801ebfc8;
  uVar24 = _UNK_1801ebfc4;
  uVar23 = _DAT_1801ebfc0;
  local_118 = 0;
  local_108 = CONCAT44(_UNK_1801ebfc4,_DAT_1801ebfc0);
  uStack_100 = CONCAT44(_UNK_1801ebfcc,_UNK_1801ebfc8);
  local_f8 = 1;
  uStack_f7 = 1;
  uStack_f6 = 0;
  uStack_f4 = 1;
  uStack_f3 = 0;
  uStack_f2 = 1;
  uStack_f1 = 0x10001;
  uStack_ed = 0;
  uStack_ec = 1;
  uStack_eb = 0;
  uStack_ea = 1;
  uStack_e9 = 1;
  bStack_e8 = 0;
  uStack_e7 = 1;
  uStack_e6 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 1;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 1;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 1;
  uStack_aa = 0;
  uStack_a9 = 0;
  uStack_a8 = 1;
  uStack_a7 = 1;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  local_128 = _DAT_1801ec060;
  uStack_120 = _UNK_1801ec068;
  uStack_110 = CONCAT35((int3)(uStack_110 >> 0x28),0x100000000);
  uStack_e5 = 1;
  uStack_e4 = 1;
  uStack_e3 = 1;
  uStack_e2 = 1;
  uStack_cc = 1;
  uStack_e1 = 1;
  uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
  uStack_dc = 0x19;
  local_d8 = 6;
  uStack_ab = 1;
  uStack_a6 = 1;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,_DAT_1801ebfc0,&local_128);
  }
  else {
    *DAT_180252ed8 = _DAT_1801ec060;
    puVar13[1] = uVar1;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    *(undefined4 *)(puVar13 + 4) = uVar23;
    *(undefined4 *)((longlong)puVar13 + 0x24) = uVar24;
    *(undefined4 *)(puVar13 + 5) = uVar25;
    *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar26;
    puVar13[6] = 0x101000100000101;
    puVar13[7] = 0x101000100000100;
    puVar13[8] = 0x101010101000100;
    puVar13[9] = CONCAT44(0x19,uStack_e0);
    puVar13[10] = 6;
    puVar13[0xb] = 0x100000000;
    puVar13[0xc] = 0x1000000010000;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0x10100000000;
    puVar13[0x10] = 0x10101;
    puVar13[0x11] = (ulonglong)uStack_9a << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uStack_120 = 0;
  uStack_110._4_4_ = (uint)(uStack_110 >> 0x20) & 0xffffff00;
  uStack_f4 = 0;
  uStack_f3 = 0;
  uStack_f1 = 0;
  uStack_ed = 0;
  uStack_ec = 1;
  uStack_eb = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e7 = 1;
  uStack_e6 = 1;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e2 = 0;
  uStack_e1 = 0;
  uStack_e0 = uStack_e0 & 0xffffff00;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 1;
  uStack_ab = 1;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  local_128 = 0x400000016;
  local_118 = 0x5400001461;
  uStack_110 = CONCAT44(uStack_110._4_4_,0x57301461);
  local_f8 = 1;
  uStack_f7 = 1;
  uStack_f6 = 0x101;
  uStack_f2 = 1;
  uStack_cc = 1;
  uStack_cb = 1;
  uStack_aa = 1;
  uStack_a9 = 1;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = 0x400000016;
    puVar13[1] = 0;
    puVar13[2] = 0x5400001461;
    puVar13[3] = uStack_110;
    puVar13[4] = local_108;
    puVar13[5] = uStack_100;
    puVar13[6] = 0x1000001010101;
    puVar13[7] = 0x100000000;
    puVar13[8] = 0x10100;
    puVar13[9] = (ulonglong)uStack_e0;
    puVar13[10] = 0;
    puVar13[0xb] = 0x10100000000;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0x101010100000000;
    puVar13[0x10] = 0;
    puVar13[0x11] = (ulonglong)uStack_9a << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uStack_120 = 0;
  uStack_110._4_4_ = (uint)(uStack_110 >> 0x20) & 0xffffff00;
  uStack_f4 = 0;
  uStack_f3 = 0;
  uStack_f1 = 0;
  uStack_ed = 0;
  uStack_ec = 1;
  uStack_eb = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e7 = 1;
  uStack_e6 = 1;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e2 = 0;
  uStack_e1 = 0;
  uStack_e0 = uStack_e0 & 0xffffff00;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 1;
  uStack_ab = 1;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  local_128 = 0x400000014;
  local_118 = 0x5400001461;
  uStack_110 = CONCAT44(uStack_110._4_4_,0x57001461);
  local_f8 = 1;
  uStack_f7 = 1;
  uStack_f6 = 0x101;
  uStack_f2 = 1;
  uStack_cc = 1;
  uStack_cb = 1;
  uStack_aa = 1;
  uStack_a9 = 1;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = 0x400000014;
    puVar13[1] = 0;
    puVar13[2] = 0x5400001461;
    puVar13[3] = uStack_110;
    puVar13[4] = local_108;
    puVar13[5] = uStack_100;
    puVar13[6] = 0x1000001010101;
    puVar13[7] = 0x100000000;
    puVar13[8] = 0x10100;
    puVar13[9] = (ulonglong)uStack_e0;
    puVar13[10] = 0;
    puVar13[0xb] = 0x10100000000;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0x101010100000000;
    puVar13[0x10] = 0;
    puVar13[0x11] = (ulonglong)uStack_9a << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uVar1 = _UNK_1801ec0b8;
  local_128 = _DAT_1801ec0b0;
  uStack_120 = _UNK_1801ec0b8;
  local_118 = 0;
  uStack_110 = uStack_110 & 0xffffff0000000000;
  local_f8 = 0;
  uStack_f7 = 0;
  uStack_f6 = 0;
  uStack_f4 = 0;
  uStack_f3 = 0;
  uStack_f2 = 0;
  uStack_f1 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_eb = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e7 = 1;
  uStack_e6 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e2 = 0;
  uStack_e1 = 0;
  uStack_e0 = uStack_e0 & 0xffffff00;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 0;
  uStack_ab = 0;
  uStack_aa = 0;
  uStack_a9 = 0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  uStack_cc = 1;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = _DAT_1801ec0b0;
    puVar13[1] = uVar1;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    puVar13[4] = local_108;
    puVar13[5] = uStack_100;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[8] = 0x100;
    puVar13[9] = (ulonglong)uStack_e0;
    puVar13[10] = 0;
    puVar13[0xb] = 0x100000000;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = (ulonglong)uStack_9a << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uVar1 = _UNK_1801ec0a8;
  local_128 = _DAT_1801ec0a0;
  uStack_120 = _UNK_1801ec0a8;
  local_118 = 0;
  uStack_110 = uStack_110 & 0xffffff0000000000;
  local_f8 = 0;
  uStack_f7 = 0;
  uStack_f6 = 0;
  uStack_f4 = 0;
  uStack_f3 = 0;
  uStack_f2 = 0;
  uStack_f1 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_eb = 0;
  uStack_ea = 0;
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e7 = 0;
  uStack_e6 = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e2 = 0;
  uStack_e1 = 0;
  uStack_e0 = uStack_e0 & 0xffffff00;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 0;
  uStack_ab = 0;
  uStack_aa = 0;
  uStack_a9 = 0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uStack_9b = 0;
  uStack_cc = 1;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = _DAT_1801ec0a0;
    puVar13[1] = uVar1;
    puVar13[2] = 0;
    puVar13[3] = uStack_110;
    puVar13[4] = local_108;
    puVar13[5] = uStack_100;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[8] = 0;
    puVar13[9] = (ulonglong)uStack_e0;
    puVar13[10] = 0;
    puVar13[0xb] = 0x100000000;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0;
    puVar13[0x10] = 0;
    puVar13[0x11] = (ulonglong)uStack_9a << 0x30;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uVar5 = _UNK_1801ec148;
  uVar1 = CONCAT44(_UNK_1801ebf74,_DAT_1801ebf70);
  uVar2 = CONCAT44(_UNK_1801ebf7c,_UNK_1801ebf78);
  uStack_e9 = 0;
  bStack_e8 = 0;
  uStack_e7 = 1;
  uStack_e6 = 1;
  uStack_cb = 0;
  uStack_ca = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c6 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_bb = 0;
  uStack_ba = 0;
  uStack_b9 = 0;
  local_b8 = 0;
  uStack_b7 = 0;
  uStack_b6 = 0;
  uStack_b5 = 0;
  uStack_b4 = 0;
  uStack_aa = 0;
  uStack_a9 = 0;
  uStack_a8 = 1;
  uStack_a7 = 0;
  local_118 = 0;
  local_f8 = 1;
  uStack_f7 = 0;
  uStack_f6 = 0x101;
  uStack_f4 = 1;
  uStack_f3 = 0;
  uStack_f1 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_eb = 0;
  uStack_ea = 0;
  uStack_e5 = 0;
  uStack_e4 = 0;
  uStack_e3 = 0;
  uStack_e2 = 1;
  uStack_e1 = 0;
  uStack_e0 = CONCAT31(uStack_e0._1_3_,1);
  uStack_dc = 0;
  uVar4 = (ulonglong)uStack_e0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_c3 = 0;
  uStack_c2 = 0;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_bf = 0;
  uStack_be = 0;
  uStack_bc = 0;
  uStack_b3 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uStack_ae = 0;
  uStack_ad = 0;
  uStack_ac = 1;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a1 = 0;
  uStack_a0 = 1;
  uStack_9f = 0;
  uStack_9e = 0;
  uStack_9d = 0;
  uStack_9c = 0;
  uVar12 = CONCAT35((int3)(uStack_110 >> 0x28),0x100000000);
  uStack_f2 = 1;
  uStack_cc = 1;
  local_d8 = 5;
  uStack_ab = 1;
  uStack_a6 = 1;
  uStack_9b = 1;
  uVar3 = CONCAT26(uStack_9a,0x10000000001);
  local_128 = _DAT_1801ec140;
  uStack_120 = _UNK_1801ec148;
  uStack_110 = uVar12;
  local_108 = uVar1;
  uStack_100 = uVar2;
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = _DAT_1801ec140;
    puVar13[1] = uVar5;
    puVar13[2] = 0;
    puVar13[3] = uVar12;
    puVar13[4] = uVar1;
    puVar13[5] = uVar2;
    puVar13[6] = 0x1000101010001;
    puVar13[7] = 0;
    puVar13[8] = 0x1000000010100;
    puVar13[9] = uVar4;
    puVar13[10] = 5;
    puVar13[0xb] = 0x100000000;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0x10100000000;
    puVar13[0x10] = 0x10001;
    puVar13[0x11] = uVar3;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uStack_120 = CONCAT44(0x7501,(undefined4)uStack_120);
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = local_128;
    puVar13[1] = uStack_120;
    puVar13[2] = 0;
    puVar13[3] = uVar12;
    puVar13[4] = uVar1;
    puVar13[5] = uVar2;
    puVar13[6] = 0x1000101010001;
    puVar13[7] = 0;
    puVar13[8] = 0x1000000010100;
    puVar13[9] = uVar4;
    puVar13[10] = 5;
    puVar13[0xb] = 0x100000000;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = 0;
    puVar13[0xf] = 0x10100000000;
    puVar13[0x10] = 0x10001;
    puVar13[0x11] = uVar3;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  uVar16 = uStack_e0;
  puVar13 = DAT_180252ed8;
  uStack_e0 = uStack_e0 & 0xffffff00;
  local_d8 = 0;
  uVar11 = (ulonglong)uStack_d4;
  uVar5 = CONCAT17(uStack_c9,CONCAT16(uStack_ca,CONCAT15(uStack_cb,CONCAT14(uStack_cc,uStack_d0))));
  uStack_ac = 0;
  uStack_ab = 0;
  uVar6 = CONCAT26(uStack_b2,
                   CONCAT15(uStack_b3,
                            CONCAT14(uStack_b4,
                                     CONCAT13(uStack_b5,
                                              CONCAT12(uStack_b6,CONCAT11(uStack_b7,local_b8))))));
  uVar7 = CONCAT17(uStack_a9,
                   CONCAT16(uStack_aa,
                            (uint6)CONCAT13(uStack_ad,
                                            CONCAT12(uStack_ae,CONCAT11(uStack_af,uStack_b0)))));
  uStack_a0 = 0;
  uStack_e7 = 0;
  uVar3 = CONCAT17(uStack_e1,
                   CONCAT16(uStack_e2,
                            CONCAT15(uStack_e3,
                                     CONCAT14(uStack_e4,
                                              CONCAT13(uStack_e5,
                                                       CONCAT12(uStack_e6,(ushort)bStack_e8))))));
  uVar4 = CONCAT44(uStack_dc,uVar16) & 0xffffffffffffff00;
  uStack_9b = 0;
  uVar8 = CONCAT17(uStack_a1,
                   CONCAT16(uStack_a2,
                            CONCAT15(uStack_a3,
                                     CONCAT14(uStack_a4,
                                              CONCAT13(uStack_a5,
                                                       CONCAT12(uStack_a6,
                                                                CONCAT11(uStack_a7,uStack_a8)))))));
  uVar10 = CONCAT26(uStack_9a,
                    (uint6)CONCAT13(uStack_9c,CONCAT12(uStack_9d,CONCAT11(uStack_9e,uStack_9f))) <<
                    8);
  uStack_120 = CONCAT44(0x7502,(undefined4)uStack_120);
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = local_128;
    puVar13[1] = uStack_120;
    puVar13[2] = 0;
    puVar13[3] = uVar12;
    puVar13[4] = uVar1;
    puVar13[5] = uVar2;
    puVar13[6] = 0x1000101010001;
    puVar13[7] = 0;
    puVar13[8] = uVar3;
    puVar13[9] = uVar4;
    puVar13[10] = uVar11 << 0x20;
    puVar13[0xb] = uVar5;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = uVar6;
    puVar13[0xf] = uVar7;
    puVar13[0x10] = uVar8;
    puVar13[0x11] = uVar10;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  puVar13 = DAT_180252ed8;
  uStack_120 = CONCAT44(0x7503,(undefined4)uStack_120);
  if (DAT_180252ed8 == DAT_180252ee0) {
    FUN_180043d80(&DAT_180252ed0,DAT_180252ed8,&local_128);
  }
  else {
    *DAT_180252ed8 = local_128;
    puVar13[1] = uStack_120;
    puVar13[2] = 0;
    puVar13[3] = uVar12;
    puVar13[4] = uVar1;
    puVar13[5] = uVar2;
    puVar13[6] = 0x1000101010001;
    puVar13[7] = 0;
    puVar13[8] = uVar3;
    puVar13[9] = uVar4;
    puVar13[10] = uVar11 << 0x20;
    puVar13[0xb] = uVar5;
    puVar13[0xc] = 0;
    puVar13[0xd] = 0;
    puVar13[0xe] = uVar6;
    puVar13[0xf] = uVar7;
    puVar13[0x10] = uVar8;
    puVar13[0x11] = uVar10;
    DAT_180252ed8 = DAT_180252ed8 + 0x12;
  }
  return;
}



// FUNCTION 180081ee0 FUN_180081ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180081ee0(longlong param_1,char param_2,undefined4 param_3,int *param_4,longlong *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_4b8 [32];
  undefined4 local_498;
  longlong *local_490;
  ulonglong local_488;
  char local_480 [4];
  undefined1 local_47c;
  undefined8 local_478;
  ulonglong local_470;
  longlong local_468 [2];
  undefined8 local_458;
  ulonglong local_450;
  char local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_18024df98 ^ (ulonglong)auStack_4b8;
  if (param_2 == '\0') {
    iVar3 = FUN_18001d010();
    if (3 < iVar3) {
      FUN_18000f920(local_448,0x3ff,"Not supported.");
      local_458 = 0;
      local_450 = 0xf;
      local_468[0] = 0;
      lVar6 = -1;
      do {
        lVar7 = lVar6 + 1;
        lVar6 = lVar6 + 1;
      } while (local_448[lVar7] != '\0');
      FUN_180005250(local_468,local_448);
      local_470 = 0xf;
      local_478 = 0xc;
      local_488._0_1_ = s_getExtension_1801eebb0[0];
      local_488._1_1_ = s_getExtension_1801eebb0[1];
      local_488._2_1_ = s_getExtension_1801eebb0[2];
      local_488._3_1_ = s_getExtension_1801eebb0[3];
      local_488._4_1_ = s_getExtension_1801eebb0[4];
      local_488._5_1_ = s_getExtension_1801eebb0[5];
      local_488._6_1_ = s_getExtension_1801eebb0[6];
      local_488._7_1_ = s_getExtension_1801eebb0[7];
      local_480[0] = s_getExtension_1801eebb0[8];
      local_480[1] = s_getExtension_1801eebb0[9];
      local_480[2] = s_getExtension_1801eebb0[10];
      local_480[3] = s_getExtension_1801eebb0[0xb];
      local_47c = 0;
      DVar4 = GetCurrentThreadId();
      local_490 = local_468;
      local_498 = 0x1a59;
      FUN_18001dc80(4,DVar4,&DAT_18024d338,&local_488);
      if (0xf < local_470) {
        if (0xfff < local_470 + 1) {
          if (0x1f < (local_488 - *(longlong *)(local_488 - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
            FUN_1801b4328(*(longlong *)(local_488 - 8),local_470 + 0x28);
          }
        }
        thunk_FUN_1801b8da8();
      }
      local_478 = 0;
      local_470 = 0xf;
      local_488 = local_488 & 0xffffffffffffff00;
      if (0xf < local_450) {
        if (0xfff < local_450 + 1) {
          if (0x1f < (local_468[0] - *(longlong *)(local_468[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
            FUN_1801b4328(*(longlong *)(local_468[0] + -8),local_450 + 0x28);
          }
        }
        thunk_FUN_1801b8da8();
      }
    }
    iVar3 = -2;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x30);
    if (plVar1 == (longlong *)0x0) {
      iVar3 = FUN_18001d010();
      if (1 < iVar3) {
        FUN_18000f920(local_448,0x3ff,"Device is not opened.");
        local_458 = 0;
        local_450 = 0xf;
        local_468[0] = 0;
        lVar6 = -1;
        do {
          lVar7 = lVar6 + 1;
          lVar6 = lVar6 + 1;
        } while (local_448[lVar7] != '\0');
        FUN_180005250(local_468,local_448);
        local_470 = 0xf;
        local_478 = 0xc;
        local_488._0_1_ = s_getExtension_1801eebb0[0];
        local_488._1_1_ = s_getExtension_1801eebb0[1];
        local_488._2_1_ = s_getExtension_1801eebb0[2];
        local_488._3_1_ = s_getExtension_1801eebb0[3];
        local_488._4_1_ = s_getExtension_1801eebb0[4];
        local_488._5_1_ = s_getExtension_1801eebb0[5];
        local_488._6_1_ = s_getExtension_1801eebb0[6];
        local_488._7_1_ = s_getExtension_1801eebb0[7];
        local_480[0] = s_getExtension_1801eebb0[8];
        local_480[1] = s_getExtension_1801eebb0[9];
        local_480[2] = s_getExtension_1801eebb0[10];
        local_480[3] = s_getExtension_1801eebb0[0xb];
        local_47c = 0;
        DVar4 = GetCurrentThreadId();
        local_490 = local_468;
        local_498 = 0x1a5f;
        FUN_18001dc80(2,DVar4,&DAT_18024d338,&local_488);
        if (0xf < local_470) {
          if (0xfff < local_470 + 1) {
            if (0x1f < (local_488 - *(longlong *)(local_488 - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
              FUN_1801b4328(*(longlong *)(local_488 - 8),local_470 + 0x28);
            }
          }
          thunk_FUN_1801b8da8();
        }
        local_478 = 0;
        local_470 = 0xf;
        local_488 = local_488 & 0xffffffffffffff00;
        if (0xf < local_450) {
          if (0xfff < local_450 + 1) {
            if (0x1f < (local_468[0] - *(longlong *)(local_468[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
              FUN_1801b4328(*(longlong *)(local_468[0] + -8),local_450 + 0x28);
            }
          }
          thunk_FUN_1801b8da8();
        }
      }
      iVar3 = -0xc;
    }
    else {
      iVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,param_3,param_4);
      if (iVar3 == 0) {
        lVar6 = thunk_FUN_180184f54((longlong)*param_4);
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))
                          (*(longlong **)(param_1 + 0x30),param_3,lVar6,*param_4);
        if (iVar3 == 0) {
          *param_5 = lVar6;
          iVar3 = 0;
        }
        else {
          iVar5 = FUN_18001d010();
          if (1 < iVar5) {
            FUN_18000f920(local_448,0x3ff,"Failed to get extension value.");
            local_458 = 0;
            local_450 = 0xf;
            local_468[0] = 0;
            lVar7 = -1;
            do {
              lVar2 = lVar7 + 1;
              lVar7 = lVar7 + 1;
            } while (local_448[lVar2] != '\0');
            FUN_180005250(local_468,local_448);
            local_470 = 0xf;
            local_478 = 0xc;
            local_488._0_1_ = s_getExtension_1801eebb0[0];
            local_488._1_1_ = s_getExtension_1801eebb0[1];
            local_488._2_1_ = s_getExtension_1801eebb0[2];
            local_488._3_1_ = s_getExtension_1801eebb0[3];
            local_488._4_1_ = s_getExtension_1801eebb0[4];
            local_488._5_1_ = s_getExtension_1801eebb0[5];
            local_488._6_1_ = s_getExtension_1801eebb0[6];
            local_488._7_1_ = s_getExtension_1801eebb0[7];
            local_480[0] = s_getExtension_1801eebb0[8];
            local_480[1] = s_getExtension_1801eebb0[9];
            local_480[2] = s_getExtension_1801eebb0[10];
            local_480[3] = s_getExtension_1801eebb0[0xb];
            local_47c = 0;
            DVar4 = GetCurrentThreadId();
            local_490 = local_468;
            local_498 = 0x1a6c;
            FUN_18001dc80(2,DVar4,&DAT_18024d338,&local_488);
            if (0xf < local_470) {
              if (0xfff < local_470 + 1) {
                if (0x1f < (local_488 - *(longlong *)(local_488 - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
                  FUN_1801b4328(*(longlong *)(local_488 - 8),local_470 + 0x28);
                }
              }
              thunk_FUN_1801b8da8();
            }
            local_478 = 0;
            local_470 = 0xf;
            local_488 = local_488 & 0xffffffffffffff00;
            if (0xf < local_450) {
              if (0xfff < local_450 + 1) {
                if (0x1f < (local_468[0] - *(longlong *)(local_468[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
                  FUN_1801b4328(*(longlong *)(local_468[0] + -8),local_450 + 0x28);
                }
              }
              thunk_FUN_1801b8da8();
            }
          }
          if (lVar6 != 0) {
            thunk_FUN_1801b8da8(lVar6);
          }
        }
      }
      else {
        iVar5 = FUN_18001d010();
        if (1 < iVar5) {
          FUN_18000f920(local_448,0x3ff,"Failed to get extension size");
          local_458 = 0;
          local_450 = 0xf;
          local_468[0] = 0;
          lVar6 = -1;
          do {
            lVar7 = lVar6 + 1;
            lVar6 = lVar6 + 1;
          } while (local_448[lVar7] != '\0');
          FUN_180005250(local_468,local_448);
          local_470 = 0xf;
          local_478 = 0xc;
          local_488._0_1_ = s_getExtension_1801eebb0[0];
          local_488._1_1_ = s_getExtension_1801eebb0[1];
          local_488._2_1_ = s_getExtension_1801eebb0[2];
          local_488._3_1_ = s_getExtension_1801eebb0[3];
          local_488._4_1_ = s_getExtension_1801eebb0[4];
          local_488._5_1_ = s_getExtension_1801eebb0[5];
          local_488._6_1_ = s_getExtension_1801eebb0[6];
          local_488._7_1_ = s_getExtension_1801eebb0[7];
          local_480[0] = s_getExtension_1801eebb0[8];
          local_480[1] = s_getExtension_1801eebb0[9];
          local_480[2] = s_getExtension_1801eebb0[10];
          local_480[3] = s_getExtension_1801eebb0[0xb];
          local_47c = 0;
          DVar4 = GetCurrentThreadId();
          local_490 = local_468;
          local_498 = 0x1a66;
          FUN_18001dc80(2,DVar4,&DAT_18024d338,&local_488);
          if (0xf < local_470) {
            if (0xfff < local_470 + 1) {
              if (0x1f < (local_488 - *(longlong *)(local_488 - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
                FUN_1801b4328(*(longlong *)(local_488 - 8),local_470 + 0x28);
              }
            }
            thunk_FUN_1801b8da8();
          }
          local_478 = 0;
          local_470 = 0xf;
          local_488 = local_488 & 0xffffffffffffff00;
          if (0xf < local_450) {
            if (0xfff < local_450 + 1) {
              if (0x1f < (local_468[0] - *(longlong *)(local_468[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
                FUN_1801b4328(*(longlong *)(local_468[0] + -8),local_450 + 0x28);
              }
            }
            thunk_FUN_1801b8da8();
          }
        }
      }
    }
  }
  return iVar3;
}



// FUNCTION 180044120 FUN_180044120

undefined8 FUN_180044120(int param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_180252ed0;
  while( true ) {
    if (puVar2 == DAT_180252ed8) {
      return 0xfffffffe;
    }
    if (((*(int *)((longlong)puVar2 + 4) == param_1) && (*(int *)(puVar2 + 1) == param_2)) &&
       (*(int *)((longlong)puVar2 + 0xc) == param_3)) break;
    puVar2 = puVar2 + 0x12;
  }
  uVar1 = puVar2[1];
  *param_4 = *puVar2;
  param_4[1] = uVar1;
  uVar1 = puVar2[3];
  param_4[2] = puVar2[2];
  param_4[3] = uVar1;
  uVar1 = puVar2[5];
  param_4[4] = puVar2[4];
  param_4[5] = uVar1;
  uVar1 = puVar2[7];
  param_4[6] = puVar2[6];
  param_4[7] = uVar1;
  uVar1 = puVar2[9];
  param_4[8] = puVar2[8];
  param_4[9] = uVar1;
  uVar1 = puVar2[0xb];
  param_4[10] = puVar2[10];
  param_4[0xb] = uVar1;
  uVar1 = puVar2[0xd];
  param_4[0xc] = puVar2[0xc];
  param_4[0xd] = uVar1;
  uVar1 = puVar2[0xf];
  param_4[0xe] = puVar2[0xe];
  param_4[0xf] = uVar1;
  uVar1 = puVar2[0x11];
  param_4[0x10] = puVar2[0x10];
  param_4[0x11] = uVar1;
  return 0;
}



// FUNCTION 180044080 FUN_180044080

undefined8 * FUN_180044080(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined2 *)((longlong)param_1 + 0x8c) = 0;
  return param_1;
}



// FUNCTION 1800441b0 FUN_1800441b0

undefined8 FUN_1800441b0(int param_1,int param_2,int param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_180252ed0;
  while( true ) {
    if (puVar2 == DAT_180252ed8) {
      return 0xfffffffe;
    }
    if ((((*(int *)((longlong)puVar2 + 4) == param_1) && (*(int *)(puVar2 + 2) == param_2)) &&
        (*(int *)((longlong)puVar2 + 0x14) == param_3)) && (*(int *)(puVar2 + 3) == param_4)) break;
    puVar2 = puVar2 + 0x12;
  }
  uVar1 = puVar2[1];
  *param_5 = *puVar2;
  param_5[1] = uVar1;
  uVar1 = puVar2[3];
  param_5[2] = puVar2[2];
  param_5[3] = uVar1;
  uVar1 = puVar2[5];
  param_5[4] = puVar2[4];
  param_5[5] = uVar1;
  uVar1 = puVar2[7];
  param_5[6] = puVar2[6];
  param_5[7] = uVar1;
  uVar1 = puVar2[9];
  param_5[8] = puVar2[8];
  param_5[9] = uVar1;
  uVar1 = puVar2[0xb];
  param_5[10] = puVar2[10];
  param_5[0xb] = uVar1;
  uVar1 = puVar2[0xd];
  param_5[0xc] = puVar2[0xc];
  param_5[0xd] = uVar1;
  uVar1 = puVar2[0xf];
  param_5[0xe] = puVar2[0xe];
  param_5[0xf] = uVar1;
  uVar1 = puVar2[0x11];
  param_5[0x10] = puVar2[0x10];
  param_5[0x11] = uVar1;
  return 0;
}



// FUNCTION 1800315f0 FUN_1800315f0

undefined4 FUN_1800315f0(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ulonglong _Size;
  ulonglong uVar6;
  ulonglong _Size_00;
  
  uVar1 = param_1[3];
  puVar5 = param_1;
  if (0xf < uVar1) {
    puVar5 = (undefined8 *)*param_1;
  }
  uVar2 = param_1[2];
  _Size = uVar2;
  if (4 < uVar2) {
    _Size = 4;
  }
  iVar3 = memcmp(puVar5,&DAT_1801ea7fc,_Size);
  if ((iVar3 == 0) && (uVar2 == 4)) {
    uVar4 = 1;
  }
  else {
    puVar5 = param_1;
    if (0xf < uVar1) {
      puVar5 = (undefined8 *)*param_1;
    }
    iVar3 = memcmp(puVar5,&DAT_1801ea804,_Size);
    if ((iVar3 == 0) && (uVar2 == 4)) {
      uVar4 = 2;
    }
    else {
      puVar5 = param_1;
      if (0xf < uVar1) {
        puVar5 = (undefined8 *)*param_1;
      }
      iVar3 = memcmp(puVar5,&DAT_1801ea80c,_Size);
      if ((iVar3 == 0) && (uVar2 == 4)) {
        uVar4 = 3;
      }
      else {
        puVar5 = param_1;
        if (0xf < uVar1) {
          puVar5 = (undefined8 *)*param_1;
        }
        iVar3 = memcmp(puVar5,&DAT_1801ea814,_Size);
        if ((iVar3 == 0) && (uVar2 == 4)) {
          uVar4 = 4;
        }
        else {
          puVar5 = param_1;
          if (0xf < uVar1) {
            puVar5 = (undefined8 *)*param_1;
          }
          iVar3 = memcmp(puVar5,&DAT_1801ea81c,_Size);
          if ((iVar3 == 0) && (uVar2 == 4)) {
            uVar4 = 5;
          }
          else {
            puVar5 = param_1;
            if (0xf < uVar1) {
              puVar5 = (undefined8 *)*param_1;
            }
            iVar3 = memcmp(puVar5,&DAT_1801ea824,_Size);
            if ((iVar3 == 0) && (uVar2 == 4)) {
              uVar4 = 6;
            }
            else {
              puVar5 = param_1;
              if (0xf < uVar1) {
                puVar5 = (undefined8 *)*param_1;
              }
              uVar6 = uVar2;
              if (9 < uVar2) {
                uVar6 = 9;
              }
              iVar3 = memcmp(puVar5,"P010_10LE",uVar6);
              if ((iVar3 == 0) && (uVar2 == 9)) {
                uVar4 = 7;
              }
              else {
                puVar5 = param_1;
                if (0xf < uVar1) {
                  puVar5 = (undefined8 *)*param_1;
                }
                uVar6 = uVar2;
                if (3 < uVar2) {
                  uVar6 = 3;
                }
                iVar3 = memcmp(puVar5,&DAT_1801ea354,uVar6);
                if ((iVar3 == 0) && (uVar2 == 3)) {
                  uVar4 = 8;
                }
                else {
                  puVar5 = param_1;
                  if (0xf < uVar1) {
                    puVar5 = (undefined8 *)*param_1;
                  }
                  iVar3 = memcmp(puVar5,&DAT_1801ea358,uVar6);
                  if ((iVar3 == 0) && (uVar2 == 3)) {
                    uVar4 = 9;
                  }
                  else {
                    puVar5 = param_1;
                    if (0xf < uVar1) {
                      puVar5 = (undefined8 *)*param_1;
                    }
                    uVar6 = uVar2;
                    if (10 < uVar2) {
                      uVar6 = 10;
                    }
                    iVar3 = memcmp(puVar5,"image/jpeg",uVar6);
                    if ((iVar3 == 0) && (uVar2 == 10)) {
                      uVar4 = 10;
                    }
                    else {
                      puVar5 = param_1;
                      if (0xf < uVar1) {
                        puVar5 = (undefined8 *)*param_1;
                      }
                      _Size_00 = uVar2;
                      if (0xc < uVar2) {
                        _Size_00 = 0xc;
                      }
                      iVar3 = memcmp(puVar5,"video/x-h264",_Size_00);
                      if ((iVar3 == 0) && (uVar2 == 0xc)) {
                        uVar4 = 0xb;
                      }
                      else {
                        puVar5 = param_1;
                        if (0xf < uVar1) {
                          puVar5 = (undefined8 *)*param_1;
                        }
                        iVar3 = memcmp(puVar5,"video/x-h265",_Size_00);
                        if ((iVar3 == 0) && (uVar2 == 0xc)) {
                          uVar4 = 0xc;
                        }
                        else {
                          puVar5 = param_1;
                          if (0xf < uVar1) {
                            puVar5 = (undefined8 *)*param_1;
                          }
                          iVar3 = memcmp(puVar5,"video/mpegts",_Size_00);
                          if ((iVar3 == 0) && (uVar2 == 0xc)) {
                            uVar4 = 0xd;
                          }
                          else {
                            puVar5 = param_1;
                            if (0xf < uVar1) {
                              puVar5 = (undefined8 *)*param_1;
                            }
                            iVar3 = memcmp(puVar5,&DAT_1801ea378,_Size);
                            if ((iVar3 == 0) && (uVar2 == 4)) {
                              uVar4 = 0xe;
                            }
                            else {
                              puVar5 = param_1;
                              if (0xf < uVar1) {
                                puVar5 = (undefined8 *)*param_1;
                              }
                              iVar3 = memcmp(puVar5,&DAT_1801ea380,_Size);
                              if ((iVar3 == 0) && (uVar2 == 4)) {
                                uVar4 = 0xf;
                              }
                              else {
                                puVar5 = param_1;
                                if (0xf < uVar1) {
                                  puVar5 = (undefined8 *)*param_1;
                                }
                                iVar3 = memcmp(puVar5,&DAT_1801ea878,_Size);
                                if ((iVar3 == 0) && (uVar2 == 4)) {
                                  uVar4 = 0x10;
                                }
                                else {
                                  if (0xf < uVar1) {
                                    param_1 = (undefined8 *)*param_1;
                                  }
                                  iVar3 = memcmp(param_1,&DAT_1801ea8b8,uVar6);
                                  if ((iVar3 == 0) && (uVar2 == 10)) {
                                    uVar4 = 0x11;
                                  }
                                  else {
                                    uVar4 = 0;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar4;
}



