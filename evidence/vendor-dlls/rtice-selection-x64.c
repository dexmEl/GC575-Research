// FUNCTION 18000fc30 setDevice
// XREF 180030c54 null
// XREF 180037d38 null
// XREF Entry Point null

ulonglong setDevice(undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
                    /* 0xfc30  136  setDevice */
  uVar2 = rtk_setUVCExtension();
  if ((int)uVar2 == 0) {
    uVar9 = param_4 & 0xffffffff;
    uVar8 = param_3 & 0xffffffff;
    uVar3 = rtk_setDevice(param_1,param_2);
    uVar2 = uVar3;
    if ((int)uVar3 == 0) {
      pcVar4 = (char *)rtk_getCurrentDeviceName();
      plVar5 = FUN_18000e9d0((longlong *)&PTR_DAT_180032270,"Connect \'",uVar8,uVar9);
      plVar5 = FUN_18000e9d0(plVar5,pcVar4,uVar8,uVar9);
      plVar5 = FUN_18000e9d0(plVar5,"\'...",uVar8,uVar9);
      FUN_180007560(plVar5,10);
      uVar7 = 0;
      if ((*(byte *)((longlong)*(int *)(*plVar5 + 4) + 0x10 + (longlong)plVar5) & 6) == 0) {
        iVar1 = (**(code **)(**(longlong **)
                               ((longlong)*(int *)(*plVar5 + 4) + 0x48 + (longlong)plVar5) + 0x68))
                          ();
        uVar7 = 0;
        if (iVar1 == -1) {
          uVar7 = 4;
        }
      }
      lVar6 = (longlong)*(int *)(*plVar5 + 4) + (longlong)plVar5;
      uVar2 = uVar3 & 0xffffffff;
      if (uVar7 != 0) {
        uVar7 = *(uint *)(lVar6 + 0x10) | uVar7;
        if (*(longlong *)(lVar6 + 0x48) == 0) {
          uVar7 = uVar7 | 4;
        }
        FUN_180001730(lVar6,uVar7,'\0');
      }
    }
  }
  return uVar2;
}


// FUNCTION 18000fb30 setPort
// XREF 180030c58 null
// XREF 180037cfc null
// XREF 18002fb9c null
// XREF 18002fb64 null
// XREF Entry Point null

ulonglong setPort(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  
                    /* 0xfb30  137  setPort */
  if (param_1 != 2) {
    return 4;
  }
  uVar2 = rtk_setUVCExtension();
  if ((int)uVar2 == 0) {
    uVar3 = rtk_setCurrentDevice(param_2);
    uVar2 = uVar3;
    if ((int)uVar3 == 0) {
      pcVar4 = (char *)rtk_getCurrentDeviceName();
      plVar5 = FUN_18000e9d0((longlong *)&PTR_DAT_180032270,"Connect \'",param_3,param_4);
      plVar5 = FUN_18000e9d0(plVar5,pcVar4,param_3,param_4);
      plVar5 = FUN_18000e9d0(plVar5,"\'...",param_3,param_4);
      FUN_180007560(plVar5,10);
      uVar7 = 0;
      if (((*(byte *)((longlong)*(int *)(*plVar5 + 4) + 0x10 + (longlong)plVar5) & 6) == 0) &&
         (iVar1 = (**(code **)(**(longlong **)
                                 ((longlong)*(int *)(*plVar5 + 4) + 0x48 + (longlong)plVar5) + 0x68)
                  )(), uVar7 = 0, iVar1 == -1)) {
        uVar7 = 4;
      }
      lVar6 = (longlong)*(int *)(*plVar5 + 4) + (longlong)plVar5;
      uVar2 = uVar3 & 0xffffffff;
      if (uVar7 != 0) {
        uVar7 = *(uint *)(lVar6 + 0x10) | uVar7;
        if (*(longlong *)(lVar6 + 0x48) == 0) {
          uVar7 = uVar7 | 4;
        }
        FUN_180001730(lVar6,uVar7,'\0');
      }
    }
  }
  return uVar2;
}


