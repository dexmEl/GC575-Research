// FUNCTION 6af1c4f0 FUN_6af1c4f0
// XREF 6b3f7c6c null

int FUN_6af1c4f0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined2 uVar9;
  undefined4 uVar8;
  int **ppiVar10;
  int *piStack_d0;
  int *piStack_c8;
  int *piStack_c0;
  int *piStack_b8;
  int *piStack_b0;
  int *piStack_a8;
  ulonglong uStack_a0;
  ulonglong *puStack_98;
  ulonglong uStack_90;
  ulonglong auStack_88 [2];
  int aiStack_78 [2];
  int *apiStack_70 [2];
  int *piStack_60;
  int *piStack_50;
  
  uVar4 = FUN_6af1c2f0();
  cVar2 = FUN_6afa1890(uVar4);
  if (cVar2 == '\0') {
    return 0;
  }
  FUN_6afa19f0(aiStack_78,uVar4);
  iVar3 = FUN_6afa1a10(uVar4,param_2,param_3);
  if (iVar3 == -1) goto LAB_6af1c900;
  if (iVar3 == -2) {
    ppiVar10 = &piStack_d0;
    FUN_6affd310(&piStack_d0,DAT_6b3d1760,&DAT_6b271028,0,0xffffffff);
    uVar9 = 0;
    FUN_6b06ce80(&piStack_c8,&piStack_d0,(longlong)aiStack_78[0],0,10,0x20,ppiVar10);
    uVar8 = CONCAT22(uVar9,0x20);
    FUN_6b067d10(&piStack_c0,&piStack_c8,apiStack_70,0,uVar8);
    uVar9 = (undefined2)((uint)uVar8 >> 0x10);
    FUN_6afa1a70(&piStack_b8,uVar4);
    FUN_6b067d10(&piStack_b0,&piStack_c0,&piStack_b8,0,CONCAT22(uVar9,0x20));
    FUN_6b063ee0(&piStack_a8,&piStack_b0);
    puStack_98 = auStack_88;
    uVar6 = (ulonglong)piStack_a8[1];
    puVar7 = (undefined1 *)((longlong)piStack_a8 + *(longlong *)(piStack_a8 + 4));
    if ((puVar7 + uVar6 != (undefined1 *)0x0) && (puVar7 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_6b260140(&DAT_6b271060);
    }
    uStack_a0 = uVar6;
    if (uVar6 < 0x10) {
      if (uVar6 == 1) {
        auStack_88[0] = CONCAT71(auStack_88[0]._1_7_,*puVar7);
      }
      else if (uVar6 != 0) goto LAB_6af1c94a;
    }
    else {
      puStack_98 = (ulonglong *)FUN_6b242860(&puStack_98,&uStack_a0,0);
      auStack_88[0] = uStack_a0;
LAB_6af1c94a:
      memcpy(puStack_98,puVar7,uVar6);
    }
    *(undefined1 *)((longlong)puStack_98 + uStack_a0) = 0;
    uStack_90 = uStack_a0;
    if (*piStack_a8 == 0) {
LAB_6af1c791:
      FUN_6b0d5230(piStack_a8,1,8);
    }
    else if (*piStack_a8 != -1) {
      LOCK();
      *piStack_a8 = *piStack_a8 + -1;
      UNLOCK();
      if (*piStack_a8 == 0) goto LAB_6af1c791;
    }
    plVar5 = (longlong *)FUN_6b25f4a0(DAT_6b3d1cf0,puStack_98,uStack_90);
    plVar1 = *(longlong **)((longlong)plVar5 + *(longlong *)(*plVar5 + -0x18) + 0xf0);
    if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_6b25fc50();
    }
    if ((char)plVar1[7] == '\0') {
      FUN_6b1d78f0(plVar1);
      iVar3 = 10;
      if (*(code **)(*plVar1 + 0x30) != FUN_6b1d7b30) {
        cVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,10);
        iVar3 = (int)cVar2;
      }
    }
    else {
      iVar3 = (int)*(char *)((longlong)plVar1 + 0x43);
    }
    uVar4 = FUN_6b216df0(plVar5,iVar3);
    FUN_6b216fe0(uVar4);
    if (puStack_98 != auStack_88) {
      FUN_6b267b90();
    }
    if (*piStack_b0 == 0) {
LAB_6af1c82c:
      FUN_6b0d5230(piStack_b0,2,8);
    }
    else if (*piStack_b0 != -1) {
      LOCK();
      *piStack_b0 = *piStack_b0 + -1;
      UNLOCK();
      if (*piStack_b0 == 0) goto LAB_6af1c82c;
    }
    if (*piStack_b8 == 0) {
LAB_6af1c85c:
      FUN_6b0d5230(piStack_b8,2,8);
    }
    else if (*piStack_b8 != -1) {
      LOCK();
      *piStack_b8 = *piStack_b8 + -1;
      UNLOCK();
      if (*piStack_b8 == 0) goto LAB_6af1c85c;
    }
    if (*piStack_c0 == 0) {
LAB_6af1c88c:
      FUN_6b0d5230(piStack_c0,2,8);
    }
    else if (*piStack_c0 != -1) {
      LOCK();
      *piStack_c0 = *piStack_c0 + -1;
      UNLOCK();
      if (*piStack_c0 == 0) goto LAB_6af1c88c;
    }
    if (*piStack_c8 == 0) {
LAB_6af1c8bc:
      FUN_6b0d5230(piStack_c8,2,8);
    }
    else if (*piStack_c8 != -1) {
      LOCK();
      *piStack_c8 = *piStack_c8 + -1;
      UNLOCK();
      if (*piStack_c8 == 0) goto LAB_6af1c8bc;
    }
    if (*piStack_d0 == 0) {
LAB_6af1c8ec:
      FUN_6b0d5230(piStack_d0,2,8);
    }
    else if (*piStack_d0 != -1) {
      LOCK();
      *piStack_d0 = *piStack_d0 + -1;
      UNLOCK();
      if (*piStack_d0 == 0) goto LAB_6af1c8ec;
    }
LAB_6af1c900:
    iVar3 = 0;
  }
  else if ((*(char *)(param_1 + 0x329) != '\0') && (iVar3 != 0)) {
    FUN_6af07410(param_2,iVar3);
  }
  if (*piStack_50 == 0) {
LAB_6af1c638:
    FUN_6b0d5230(piStack_50,2,8);
  }
  else if (*piStack_50 != -1) {
    LOCK();
    *piStack_50 = *piStack_50 + -1;
    UNLOCK();
    if (*piStack_50 == 0) goto LAB_6af1c638;
  }
  if (*piStack_60 != 0) {
    if (*piStack_60 == -1) goto LAB_6af1c5d0;
    LOCK();
    *piStack_60 = *piStack_60 + -1;
    UNLOCK();
    if (*piStack_60 != 0) goto LAB_6af1c5d0;
  }
  FUN_6b0d5230(piStack_60,2,8);
LAB_6af1c5d0:
  if (*apiStack_70[0] != 0) {
    if (*apiStack_70[0] == -1) {
      return iVar3;
    }
    LOCK();
    *apiStack_70[0] = *apiStack_70[0] + -1;
    UNLOCK();
    if (*apiStack_70[0] != 0) {
      return iVar3;
    }
  }
  FUN_6b0d5230(apiStack_70[0],2,8);
  return iVar3;
}


// FUNCTION 6af1d4a0 FUN_6af1d4a0
// XREF 6b3f7c90 null

int FUN_6af1d4a0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined2 uVar8;
  undefined4 uVar7;
  int **ppiStack_c8;
  int **ppiStack_c0;
  int *piStack_b8;
  int *piStack_b0;
  int *piStack_a8;
  int *piStack_a0;
  int **ppiStack_98;
  int *piStack_90;
  int *apiStack_88 [2];
  int aiStack_78 [2];
  int *apiStack_70 [2];
  int *piStack_60;
  int *piStack_50;
  
  uVar4 = FUN_6af1c2f0();
  FUN_6afa19f0(aiStack_78,uVar4);
  iVar3 = FUN_6afa1a40(uVar4,param_2,param_3);
  FUN_6afd9af0(param_1 + 0x248);
  ppiStack_c8 = (int **)FUN_6b063fd0(&DAT_6b27111d,0);
  if (iVar3 == -1) {
    *(undefined4 *)(param_1 + 0x250) = 5;
    piStack_b0 = (int *)FUN_6b063fd0(&DAT_6b271120,0x3f);
    uVar8 = 0;
    FUN_6b06ce80(&piStack_a8,&piStack_b0,(longlong)aiStack_78[0],0,10,0x20);
    uVar7 = CONCAT22(uVar8,0x20);
    FUN_6b067d10(&piStack_a0,&piStack_a8,apiStack_70,0,uVar7);
    uVar8 = (undefined2)((uint)uVar7 >> 0x10);
    FUN_6afa1a70(&ppiStack_98,uVar4);
    FUN_6b067d10(&ppiStack_c0,&piStack_a0,&ppiStack_98,0,CONCAT22(uVar8,0x20));
    ppiVar2 = ppiStack_c0;
    ppiVar1 = ppiStack_c8;
    ppiStack_c0 = ppiStack_c8;
    ppiStack_c8 = ppiVar2;
    if (*(int *)ppiVar1 == 0) {
LAB_6af1d73c:
      FUN_6b0d5230(ppiVar1,2,8);
    }
    else if (*(int *)ppiVar1 != -1) {
      LOCK();
      *(int *)ppiVar1 = *(int *)ppiVar1 + -1;
      UNLOCK();
      if (*(int *)ppiVar1 == 0) goto LAB_6af1d73c;
    }
    if (*(int *)ppiStack_98 == 0) {
LAB_6af1d772:
      FUN_6b0d5230(ppiStack_98,2,8);
    }
    else if (*(int *)ppiStack_98 != -1) {
      LOCK();
      *(int *)ppiStack_98 = *(int *)ppiStack_98 + -1;
      UNLOCK();
      if (*(int *)ppiStack_98 == 0) goto LAB_6af1d772;
    }
    if (*piStack_a0 == 0) {
LAB_6af1d7a2:
      FUN_6b0d5230(piStack_a0,2,8);
    }
    else if (*piStack_a0 != -1) {
      LOCK();
      *piStack_a0 = *piStack_a0 + -1;
      UNLOCK();
      if (*piStack_a0 == 0) goto LAB_6af1d7a2;
    }
    if (*piStack_a8 == 0) {
LAB_6af1d7d2:
      FUN_6b0d5230(piStack_a8,2,8);
    }
    else if (*piStack_a8 != -1) {
      LOCK();
      *piStack_a8 = *piStack_a8 + -1;
      UNLOCK();
      if (*piStack_a8 == 0) goto LAB_6af1d7d2;
    }
    if (*piStack_b0 == 0) {
LAB_6af1d802:
      FUN_6b0d5230(piStack_b0,2,8);
    }
    else if (*piStack_b0 != -1) {
      LOCK();
      *piStack_b0 = *piStack_b0 + -1;
      UNLOCK();
      if (*piStack_b0 == 0) goto LAB_6af1d802;
    }
    FUN_6b063ee0(&piStack_b8,&ppiStack_c8);
    ppiStack_98 = apiStack_88;
    piVar6 = (int *)(longlong)piStack_b8[1];
    puVar5 = (undefined1 *)((longlong)piStack_b8 + *(longlong *)(piStack_b8 + 4));
    if ((puVar5 + (longlong)piVar6 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_6b260140(&DAT_6b271060);
    }
    piStack_b0 = piVar6;
    if (piVar6 < (int *)0x10) {
      if (piVar6 == (int *)0x1) {
        apiStack_88[0] = (int *)CONCAT71(apiStack_88[0]._1_7_,*puVar5);
      }
      else if (piVar6 != (int *)0x0) goto LAB_6af1dc05;
    }
    else {
      ppiStack_98 = (int **)FUN_6b242860(&ppiStack_98,&piStack_b0,0);
      apiStack_88[0] = piStack_b0;
LAB_6af1dc05:
      memcpy(ppiStack_98,puVar5,piVar6);
    }
    *(undefined1 *)((longlong)ppiStack_98 + (longlong)piStack_b0) = 0;
    piStack_90 = piStack_b0;
    if (*piStack_b8 == 0) {
LAB_6af1d8aa:
      FUN_6b0d5230(piStack_b8,1,8);
    }
    else if (*piStack_b8 != -1) {
      LOCK();
      *piStack_b8 = *piStack_b8 + -1;
      UNLOCK();
      if (*piStack_b8 == 0) goto LAB_6af1d8aa;
    }
    FUN_6b2427b0(param_1 + 0x278,&ppiStack_98);
LAB_6af1d8c9:
    if (ppiStack_98 != apiStack_88) {
      FUN_6b267b90();
    }
    iVar3 = 0;
  }
  else if (iVar3 == -2) {
    *(undefined4 *)(param_1 + 0x250) = 5;
    piStack_b8 = (int *)FUN_6b063fd0(&DAT_6b271160,0x3c);
    uVar8 = 0;
    FUN_6b06ce80(&piStack_b0,&piStack_b8,(longlong)aiStack_78[0],0,10,0x20);
    uVar7 = CONCAT22(uVar8,0x20);
    FUN_6b067d10(&piStack_a8,&piStack_b0,apiStack_70,0,uVar7);
    uVar8 = (undefined2)((uint)uVar7 >> 0x10);
    FUN_6afa1a70(&piStack_a0,uVar4);
    FUN_6b067d10(&ppiStack_98,&piStack_a8,&piStack_a0,0,CONCAT22(uVar8,0x20));
    ppiVar2 = ppiStack_98;
    ppiVar1 = ppiStack_c8;
    ppiStack_98 = ppiStack_c8;
    ppiStack_c8 = ppiVar2;
    if (*(int *)ppiVar1 == 0) {
LAB_6af1dbb8:
      FUN_6b0d5230(ppiVar1,2,8);
    }
    else if (*(int *)ppiVar1 != -1) {
      LOCK();
      *(int *)ppiVar1 = *(int *)ppiVar1 + -1;
      UNLOCK();
      if (*(int *)ppiVar1 == 0) goto LAB_6af1dbb8;
    }
    if (*piStack_a0 == 0) {
LAB_6af1db95:
      FUN_6b0d5230(piStack_a0,2,8);
    }
    else if (*piStack_a0 != -1) {
      LOCK();
      *piStack_a0 = *piStack_a0 + -1;
      UNLOCK();
      if (*piStack_a0 == 0) goto LAB_6af1db95;
    }
    if (*piStack_a8 == 0) {
LAB_6af1db75:
      FUN_6b0d5230(piStack_a8,2,8);
    }
    else if (*piStack_a8 != -1) {
      LOCK();
      *piStack_a8 = *piStack_a8 + -1;
      UNLOCK();
      if (*piStack_a8 == 0) goto LAB_6af1db75;
    }
    if (*piStack_b0 == 0) {
LAB_6af1db55:
      FUN_6b0d5230(piStack_b0,2,8);
    }
    else if (*piStack_b0 != -1) {
      LOCK();
      *piStack_b0 = *piStack_b0 + -1;
      UNLOCK();
      if (*piStack_b0 == 0) goto LAB_6af1db55;
    }
    if (*piStack_b8 == 0) {
LAB_6af1db37:
      FUN_6b0d5230(piStack_b8,2,8);
    }
    else if (*piStack_b8 != -1) {
      LOCK();
      *piStack_b8 = *piStack_b8 + -1;
      UNLOCK();
      if (*piStack_b8 == 0) goto LAB_6af1db37;
    }
    FUN_6b063ee0(&piStack_a8,&ppiStack_c8);
    piVar6 = (int *)(longlong)piStack_a8[1];
    puVar5 = (undefined1 *)((longlong)piStack_a8 + *(longlong *)(piStack_a8 + 4));
    ppiStack_98 = apiStack_88;
    if ((puVar5 + (longlong)piVar6 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_6b260140(&DAT_6b271060);
    }
    piStack_a0 = piVar6;
    if (piVar6 < (int *)0x10) {
      if (piVar6 == (int *)0x1) {
        apiStack_88[0] = (int *)CONCAT71(apiStack_88[0]._1_7_,*puVar5);
      }
      else if (piVar6 != (int *)0x0) goto LAB_6af1dc59;
    }
    else {
      ppiStack_98 = (int **)FUN_6b242860(&ppiStack_98,&piStack_a0,0);
      apiStack_88[0] = piStack_a0;
LAB_6af1dc59:
      memcpy(ppiStack_98,puVar5,piVar6);
    }
    *(undefined1 *)((longlong)ppiStack_98 + (longlong)piStack_a0) = 0;
    piStack_90 = piStack_a0;
    if (*piStack_a8 == 0) {
LAB_6af1db0e:
      FUN_6b0d5230(piStack_a8,1,8);
    }
    else if (*piStack_a8 != -1) {
      LOCK();
      *piStack_a8 = *piStack_a8 + -1;
      UNLOCK();
      if (*piStack_a8 == 0) goto LAB_6af1db0e;
    }
    FUN_6b2427b0(param_1 + 0x278,&ppiStack_98);
    goto LAB_6af1d8c9;
  }
  if (*(char *)(param_1 + 0x329) != '\0') {
    FUN_6af07320(param_2,param_3);
  }
  if (*(int *)ppiStack_c8 == 0) {
LAB_6af1d625:
    FUN_6b0d5230(ppiStack_c8,2,8);
  }
  else if (*(int *)ppiStack_c8 != -1) {
    LOCK();
    *(int *)ppiStack_c8 = *(int *)ppiStack_c8 + -1;
    UNLOCK();
    if (*(int *)ppiStack_c8 == 0) goto LAB_6af1d625;
  }
  if (*piStack_50 == 0) {
LAB_6af1d608:
    FUN_6b0d5230(piStack_50,2,8);
  }
  else if (*piStack_50 != -1) {
    LOCK();
    *piStack_50 = *piStack_50 + -1;
    UNLOCK();
    if (*piStack_50 == 0) goto LAB_6af1d608;
  }
  if (*piStack_60 != 0) {
    if (*piStack_60 == -1) goto LAB_6af1d58c;
    LOCK();
    *piStack_60 = *piStack_60 + -1;
    UNLOCK();
    if (*piStack_60 != 0) goto LAB_6af1d58c;
  }
  FUN_6b0d5230(piStack_60,2,8);
LAB_6af1d58c:
  if (*apiStack_70[0] != 0) {
    if (*apiStack_70[0] == -1) {
      return iVar3;
    }
    LOCK();
    *apiStack_70[0] = *apiStack_70[0] + -1;
    UNLOCK();
    if (*apiStack_70[0] != 0) {
      return iVar3;
    }
  }
  FUN_6b0d5230(apiStack_70[0],2,8);
  return iVar3;
}


