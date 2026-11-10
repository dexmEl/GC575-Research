// FUNCTION 6afcd930 FUN_6afcd930
// XREF 6b3fb854 null

ulonglong FUN_6afcd930(longlong *param_1,int param_2,longlong param_3,int param_4,char param_5)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uStack_14c;
  undefined8 uStack_148;
  undefined1 auStack_138 [240];
  byte abStack_48 [8];
  
  if (param_1[5] == 0) {
    FUN_6b25f4a0(DAT_6b3d1cf0,&DAT_6b28839f,0x12);
    FUN_6afcb7a0(&uStack_148,&DAT_6b2883b2);
    FUN_6b2427b0(param_1 + 0x1e,&uStack_148);
    if (uStack_148 != auStack_138) {
      FUN_6b267b90();
    }
    uVar3 = 0;
  }
  else {
    if (param_5 == '#') {
      param_5 = 'D';
    }
    if (param_4 < 1) {
      uVar3 = 1;
    }
    else {
      uStack_14c = 1;
      uVar11 = param_4 - 1U >> 6;
      puVar10 = (undefined4 *)(param_3 + 0x100);
      puVar1 = puVar10 + (ulonglong)uVar11 * 0x40;
      iVar9 = (int)puVar10;
      while( true ) {
        pbVar7 = (byte *)&uStack_148;
        for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
          pbVar7[0] = 0;
          pbVar7[1] = 0;
          pbVar7[2] = 0;
          pbVar7[3] = 0;
          pbVar7[4] = 0;
          pbVar7[5] = 0;
          pbVar7[6] = 0;
          pbVar7[7] = 0;
          pbVar7 = pbVar7 + 8;
        }
        if (puVar1 == puVar10) break;
        iVar2 = (**(code **)(*param_1 + 0x310))
                          (param_1,(param_2 - iVar9) + (int)puVar10,&uStack_148,0x100,param_5);
        if (iVar2 == 0) {
          puVar4 = puVar10 + -0x40;
          do {
            *puVar4 = 0xdeaddead;
            puVar4 = puVar4 + 1;
          } while (puVar10 != puVar4);
          uStack_14c = 0;
          puVar10 = puVar10 + 0x40;
        }
        else {
          puVar6 = puVar10 + -0x40;
          pbVar7 = (byte *)&uStack_148;
          do {
            pbVar8 = pbVar7 + 4;
            *puVar6 = (uint)*pbVar7 << 0x18 | (uint)pbVar7[1] << 0x10 | (uint)pbVar7[3] |
                      (uint)pbVar7[2] << 8;
            puVar6 = puVar6 + 1;
            pbVar7 = pbVar8;
          } while (abStack_48 != pbVar8);
          puVar10 = puVar10 + 0x40;
        }
      }
      param_4 = param_4 + uVar11 * -0x40;
      uVar3 = (**(code **)(*param_1 + 0x310))
                        (param_1,param_2 + uVar11 * 0x100,&uStack_148,param_4 * 4,param_5);
      if ((int)uVar3 == 0) {
        lVar5 = 0;
        do {
          *(undefined4 *)(param_3 + (longlong)(int)(uVar11 * 0x40) * 4 + lVar5 * 4) = 0xdeaddead;
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < param_4);
      }
      else {
        lVar5 = 0;
        pbVar7 = (byte *)&uStack_148;
        do {
          *(uint *)(param_3 + (longlong)(int)(uVar11 * 0x40) * 4 + lVar5 * 4) =
               (uint)*pbVar7 << 0x18 | (uint)pbVar7[1] << 0x10 | (uint)pbVar7[3] |
               (uint)pbVar7[2] << 8;
          lVar5 = lVar5 + 1;
          pbVar7 = pbVar7 + 4;
        } while ((int)lVar5 < param_4);
        uVar3 = (ulonglong)uStack_14c;
      }
    }
  }
  return uVar3;
}


// FUNCTION 6afd6e70 FUN_6afd6e70
// XREF 6b3fbc80 null

undefined1
FUN_6afd6e70(longlong param_1,uint param_2,undefined8 param_3,ulonglong param_4,char param_5)

{
  ulonglong uVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  code *pcVar8;
  undefined2 uStack_5c;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined8 uStack_58;
  undefined1 auStack_48 [16];
  
  plVar6 = *(longlong **)(param_1 + 0x28);
  uVar7 = param_4 & 0xffffffff;
  if (plVar6 == (longlong *)0x0) {
    FUN_6b25f4a0(DAT_6b3d1cf0,&DAT_6b28839f,0x12);
    uStack_58 = auStack_48;
    FUN_6b241010(&uStack_58,&DAT_6b2883b2,&DAT_6b2883c2,0);
    FUN_6b2427b0(param_1 + 0xf0,&uStack_58);
    if (uStack_58 == auStack_48) {
      return 0;
    }
    FUN_6b267b90();
    return 0;
  }
  if (param_5 == '#') {
    param_5 = 'D';
  }
  iVar5 = *(int *)(param_1 + 0x68);
  pcVar8 = *(code **)(*plVar6 + 0x60);
  if (iVar5 == 0x27) {
    if ((param_2 | 0xa0000000) + 0x47f42000 < 0x9fd) {
      cVar2 = (*pcVar8)(plVar6,param_2,param_3,param_4,param_5);
      if (cVar2 == '\0') {
        return 0;
      }
      plVar6 = *(longlong **)(param_1 + 0x28);
      iVar5 = *(int *)(param_1 + 0x68);
      pcVar8 = *(code **)(*plVar6 + 0x60);
      goto LAB_6afd6ec8;
    }
LAB_6afd6f0a:
    cVar2 = (*pcVar8)(plVar6,param_2,param_3,param_4,param_5);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  else {
LAB_6afd6ec8:
    cVar2 = '\0';
    if (iVar5 == 0x2d) {
      param_4 = uVar7;
      if (((*(int *)(param_1 + 0x50) != 0x19) || ((param_2 | 0xa0000000) + 0x48000000 < 0x160001))
         || (*(char *)(param_1 + 0x224) != '\0')) goto LAB_6afd6f0a;
      cVar2 = (*pcVar8)(plVar6,0x1801a7ec,&uStack_5c,uVar7,param_5);
      uVar1 = (ulonglong)uStack_58;
      if (cVar2 == '\0') {
        return 0;
      }
      uStack_58._0_3_ = CONCAT12(uStack_5a,uStack_5c);
      uStack_58._4_4_ = SUB84(uVar1,4);
      uStack_58 = (undefined1 *)
                  (CONCAT44(uStack_58._4_4_,CONCAT13(uStack_59,(undefined3)uStack_58)) &
                   0xffffffff0fffffff | 0x10000000);
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x68))
                        (*(longlong **)(param_1 + 0x28),0x1801a7ec,&uStack_58,4,param_5);
      if (cVar2 == '\0') {
        return 0;
      }
      Sleep(1);
      plVar6 = *(longlong **)(param_1 + 0x28);
      iVar5 = *(int *)(param_1 + 0x68);
      pcVar8 = *(code **)(*plVar6 + 0x60);
    }
    if (iVar5 == 0x31) {
      switch(*(undefined4 *)(param_1 + 0x228)) {
      case 1:
        param_2 = param_2 & 0xff0fffff | 0x100000;
        break;
      case 2:
        param_2 = param_2 & 0xff0fffff | 0x200000;
        break;
      case 3:
        param_2 = param_2 & 0xff0fffff | 0x300000;
        break;
      case 4:
        param_2 = param_2 & 0xff0fffff | 0x400000;
        break;
      case 5:
        param_2 = param_2 & 0xff0fffff | 0x500000;
      }
    }
    cVar3 = (*pcVar8)(plVar6,param_2,param_3,uVar7,param_5);
    if (cVar3 == '\0') {
      return 0;
    }
    if (cVar2 != '\0') {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x68))
                        (*(longlong **)(param_1 + 0x28),0x1801a7ec,&uStack_5c,4,param_5);
      return uVar4;
    }
  }
  return 1;
}


// FUNCTION 6af3ba90 FUN_6af3ba90
// XREF 6b3f8758 null

undefined4
FUN_6af3ba90(longlong *param_1,undefined4 param_2,undefined8 param_3,ulonglong param_4,byte param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined4 uStack_94;
  longlong lStack_90;
  int *piStack_88;
  int *piStack_80;
  int *piStack_78;
  int *piStack_70;
  undefined1 auStack_68 [8];
  uint uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  
  uStack_94 = 0xffffffff;
  FUN_6b09bf20(&uStack_94);
  uVar4 = FUN_6af22f10(param_1);
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  uVar8 = (uint)param_4;
  if (uVar8 == 0) {
    return uVar4;
  }
  plVar1 = param_1 + 0x3c;
  uVar5 = FUN_6af222b0(param_1,param_2);
  FUN_6af209c0(plVar1);
  FUN_6af20ac0(plVar1,0xd0);
  if ((param_5 & 0x40) == 0) {
    if ((param_5 & 0x20) != 0) {
      FUN_6af20ac0(plVar1,3);
      FUN_6af20bd0(plVar1,uVar5 & 0xffff,1);
    }
  }
  else {
    FUN_6af20ac0(plVar1,5);
    thunk_FUN_6af20be0(plVar1,uVar5,1);
  }
  FUN_6af20ac0(plVar1,(((uint)(param_4 >> 2) & 0x3fffffff) + 1) - (uint)((param_4 & 3) == 0) & 0xff)
  ;
  lVar2 = param_1[0x3d];
  uVar7 = FUN_6af209b0(plVar1);
  uVar3 = FUN_6af20ea0(uVar7,(int)lVar2);
  FUN_6af20ac0(plVar1,uVar3);
  FUN_6af20980(auStack_68);
  uVar9 = 0;
  uVar4 = (**(code **)(*param_1 + 0x280))(param_1,0xd0,auStack_68,0,0);
  if ((char)uVar4 == '\0') {
    puStack_58 = &uStack_48;
    FUN_6b241010(&puStack_58,&DAT_6b27221c,&DAT_6b272228,0);
    FUN_6b2427b0(param_1 + 0x19,&puStack_58);
    if (puStack_58 != &uStack_48) {
      FUN_6b267b90();
    }
  }
  else {
    if (uStack_60 <= uVar8) {
      uVar8 = uStack_60;
    }
    uVar7 = FUN_6af209b0(auStack_68);
    memcpy(param_3,uVar7,uVar8);
  }
  iVar6 = FUN_6b09bf80(&uStack_94);
  if (iVar6 < 0x7d1) goto LAB_6af3bd71;
  puStack_58 = (undefined8 *)0x2;
  uStack_50 = 0;
  puStack_40 = &DAT_6b272077;
  uStack_48 = 0;
  FUN_6b0dce50(&lStack_90,&puStack_58);
  piStack_88 = (int *)FUN_6b063fd0(&DAT_6b27207f,0x12);
  piStack_80 = (int *)FUN_6b063fd0(&DAT_6b272588,9);
  FUN_6b067d10(&piStack_78,&piStack_88,&piStack_80,0,CONCAT22(uVar9,0x20));
  iVar6 = FUN_6b09bf80(&uStack_94);
  FUN_6b06ce80(&piStack_70,&piStack_78,(longlong)iVar6,0,10,0x20);
  FUN_6b04f9e0(&lStack_90,*(longlong *)(piStack_70 + 4) + (longlong)piStack_70,piStack_70[1]);
  if (*(char *)(lStack_90 + 0x20) != '\0') {
    FUN_6b03a530(lStack_90,0x20);
  }
  if (*piStack_70 == 0) {
LAB_6af3be65:
    FUN_6b0d5230(piStack_70,2,8);
  }
  else if (*piStack_70 != -1) {
    LOCK();
    *piStack_70 = *piStack_70 + -1;
    UNLOCK();
    if (*piStack_70 == 0) goto LAB_6af3be65;
  }
  if (*piStack_78 == 0) {
LAB_6af3be45:
    FUN_6b0d5230(piStack_78,2,8);
  }
  else if (*piStack_78 != -1) {
    LOCK();
    *piStack_78 = *piStack_78 + -1;
    UNLOCK();
    if (*piStack_78 == 0) goto LAB_6af3be45;
  }
  if (*piStack_80 == 0) {
LAB_6af3be25:
    FUN_6b0d5230(piStack_80,2,8);
  }
  else if (*piStack_80 != -1) {
    LOCK();
    *piStack_80 = *piStack_80 + -1;
    UNLOCK();
    if (*piStack_80 == 0) goto LAB_6af3be25;
  }
  if (*piStack_88 == 0) {
LAB_6af3bd59:
    FUN_6b0d5230(piStack_88,2,8);
  }
  else if (*piStack_88 != -1) {
    LOCK();
    *piStack_88 = *piStack_88 + -1;
    UNLOCK();
    if (*piStack_88 == 0) goto LAB_6af3bd59;
  }
  FUN_6b050f00(&lStack_90);
LAB_6af3bd71:
  FUN_6af20a80(auStack_68);
  return uVar4;
}


// FUNCTION 6af3b320 FUN_6af3b320
// XREF 6b3f8740 null

undefined4
FUN_6af3b320(longlong *param_1,undefined4 param_2,longlong param_3,ulonglong param_4,uint param_5)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_stack_fffffffffffffd98;
  undefined2 uVar6;
  uint uStack_24c;
  undefined4 uStack_224;
  longlong lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 auStack_208 [8];
  longlong lStack_200;
  undefined1 *apuStack_1f8 [2];
  undefined1 auStack_1e8 [16];
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *apuStack_1c0 [48];
  
  uVar6 = (undefined2)((uint)in_stack_fffffffffffffd98 >> 0x10);
  uStack_224 = 0xffffffff;
  FUN_6b09bf20(&uStack_224);
  uVar3 = FUN_6af22f10(param_1);
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  if ((param_5 & 0x44) != 0x44) {
    FUN_6afd9af0(param_1 + 0x17);
    puStack_1d8 = &uStack_1c8;
    *(undefined4 *)(param_1 + 0x18) = 0xb;
    FUN_6b241010(&puStack_1d8,&DAT_6b2721c8,&DAT_6b2721fa,0);
    FUN_6b2427b0(param_1 + 0x1d,&puStack_1d8);
    if (puStack_1d8 != &uStack_1c8) {
      FUN_6b267b90();
    }
    FUN_6b24bf90(&puStack_1d8,0x18);
    thunk_FUN_6b217f10(&uStack_1c8,0x96);
    FUN_6b25f4a0(&uStack_1c8,&DAT_6b271e10,1);
    FUN_6b25f4a0(&uStack_1c8,&DAT_6b271e18,0x4c);
    FUN_6b25f4a0(&uStack_1c8,&DAT_6b271e10,1);
    FUN_6b25f4a0(&uStack_1c8,&DAT_6b272578,10);
    FUN_6b25f4a0(&uStack_1c8,&DAT_6b271e65,0xc);
    FUN_6b25f4a0(&uStack_1c8,&DAT_6b271e72,0xb);
    FUN_6b25f4a0(&uStack_1c8,&DAT_6b271e7e,1);
    FUN_6b25f4a0(&uStack_1c8,&DAT_6b271e80,8);
    FUN_6b1dc6a0(apuStack_1f8,apuStack_1c0);
    FUN_6afd9b90(param_1 + 0x17,apuStack_1f8);
    if (apuStack_1f8[0] != auStack_1e8) {
      FUN_6b267b90();
    }
    FUN_6b24c8c0(&puStack_1d8);
    return 0;
  }
  iVar4 = FUN_6af222b0(param_1,param_2);
  uStack_24c = (uint)((param_4 & 0xffffffff) >> 2);
  if ((param_4 & 3) == 0) {
    FUN_6af20980(apuStack_1f8);
    if (uStack_24c == 0) goto LAB_6af3b65c;
  }
  else {
    uStack_24c = uStack_24c + 1;
    FUN_6af20980(apuStack_1f8);
  }
  uVar5 = 0;
  plVar1 = param_1 + 0x3c;
  do {
    FUN_6af209c0(plVar1);
    FUN_6af20ac0(plVar1,0xd1);
    FUN_6af20ac0(plVar1,8);
    thunk_FUN_6af20be0(plVar1,iVar4 + uVar5,1);
    thunk_FUN_6af20b00(plVar1,(ulonglong)uVar5 + param_3,4);
    FUN_6af20ed0(param_1);
    uVar6 = 0;
    cVar2 = (**(code **)(*param_1 + 0x280))(param_1,0xd1,apuStack_1f8,0,0);
    if (cVar2 == '\0') {
      puStack_1d8 = &uStack_1c8;
      FUN_6b241010(&puStack_1d8,&DAT_6b2721fb);
      FUN_6b2427b0(param_1 + 0x19,&puStack_1d8);
      if (puStack_1d8 != &uStack_1c8) {
        FUN_6b267b90();
      }
      uVar3 = 0;
      if ((int)param_1[0x18] == 10) break;
    }
    uVar5 = uVar5 + 4;
  } while (uVar5 < uStack_24c);
LAB_6af3b65c:
  iVar4 = FUN_6b09bf80(&uStack_224);
  if (2000 < iVar4) {
    puStack_1d8 = (undefined8 *)0x2;
    uStack_1d0 = 0;
    apuStack_1c0[0] = &DAT_6b272077;
    uStack_1c8 = 0;
    FUN_6b0dce50(&lStack_220,&puStack_1d8);
    uStack_218 = FUN_6b063fd0(&DAT_6b27207f,0x12);
    uStack_210 = FUN_6b063fd0(&DAT_6b272578,10);
    FUN_6b067d10(auStack_208,&uStack_218,&uStack_210,0,CONCAT22(uVar6,0x20));
    iVar4 = FUN_6b09bf80(&uStack_224);
    FUN_6b06ce80(&lStack_200,auStack_208,(longlong)iVar4,0,10,0x20);
    FUN_6b04f9e0(&lStack_220,*(longlong *)(lStack_200 + 0x10) + lStack_200,
                 *(undefined4 *)(lStack_200 + 4));
    if (*(char *)(lStack_220 + 0x20) != '\0') {
      FUN_6b03a530(lStack_220,0x20);
    }
    FUN_6b1bed10(&lStack_200);
    FUN_6b1bed10(auStack_208);
    FUN_6b1bed10(&uStack_210);
    FUN_6b1bed10(&uStack_218);
    FUN_6b050f00(&lStack_220);
  }
  FUN_6af20a80(apuStack_1f8);
  return uVar3;
}


