// FUNCTION 6afa28a0 FUN_6afa28a0
// XREF 6b3fa324 null
// XREF 6afa2ca4 FUN_6afa2b90
// XREF 6afa2d02 FUN_6afa2b90
// XREF 6afa2ded FUN_6afa2d50
// XREF 6afa2f2d FUN_6afa2e90
// XREF 6afa303b FUN_6afa2fd0
// XREF 6afa3071 FUN_6afa2fd0
// XREF 6afa30ec FUN_6afa30a0
// XREF 6afa315c FUN_6afa3110

/* WARNING: Type propagation algorithm not settling */

char FUN_6afa28a0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  longlong *plStack_78;
  longlong *plStack_70;
  int *piStack_68;
  int *piStack_60;
  int *piStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  cVar1 = *(char *)(param_1 + 0x40);
  piVar5 = (int *)*param_2;
  uVar3 = param_2[1];
  plStack_78 = (longlong *)0x0;
  plStack_70 = (longlong *)0x0;
  if (cVar1 == '\0') {
    return '\0';
  }
  puVar2 = *(undefined8 **)(param_1 + 0x58);
  if (puVar2 == (undefined8 *)0x0) {
    return '\0';
  }
  iVar4 = (**(code **)*puVar2)(puVar2,&DAT_6b3f2230,&plStack_70);
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*plStack_70 + 0x50))(plStack_70,param_3,&DAT_6b3f2220,&plStack_78);
    if (iVar4 == 0) {
      uStack_44 = param_5;
      piStack_58 = piVar5;
      uStack_50 = uVar3;
      uStack_48 = param_4;
      uStack_40 = param_3;
      iVar4 = (**(code **)(*plStack_78 + 0x18))(plStack_78,&piStack_58,0x20,param_6,param_7,param_8)
      ;
      if (iVar4 == 0) {
        if (plStack_78 != (longlong *)0x0) {
          (**(code **)(*plStack_78 + 0x10))();
          return cVar1;
        }
        return cVar1;
      }
      piStack_68 = (int *)FUN_6b063fd0(&DAT_6b277758,0x26);
      FUN_6b06ce80(&piStack_60,&piStack_68,(longlong)iVar4,0,0x10,0x30);
      piVar5 = *(int **)(param_1 + 8);
      *(int **)(param_1 + 8) = piStack_60;
      piStack_60 = piVar5;
      if (*piVar5 == 0) {
LAB_6afa2a0d:
        FUN_6b0d5230(piVar5,2,8);
      }
      else if (*piVar5 != -1) {
        LOCK();
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (*piVar5 == 0) goto LAB_6afa2a0d;
      }
      piVar5 = piStack_68;
      if (*piStack_68 == 0) goto LAB_6afa2a40;
      if (*piStack_68 == -1) {
        return '\0';
      }
      LOCK();
      *piStack_68 = *piStack_68 + -1;
      iVar4 = *piStack_68;
      UNLOCK();
    }
    else {
      FUN_6b064150(&piStack_58,&DAT_6b277728,0x2a);
      piVar5 = *(int **)(param_1 + 8);
      *(int **)(param_1 + 8) = piStack_58;
      piStack_58 = piVar5;
      if (*piVar5 == 0) goto LAB_6afa2a40;
      if (*piVar5 == -1) {
        return '\0';
      }
      LOCK();
      *piVar5 = *piVar5 + -1;
      iVar4 = *piVar5;
      UNLOCK();
    }
  }
  else {
    piStack_60 = (int *)FUN_6b063fd0(&DAT_6b2776e8,0x3f);
    FUN_6b06ce80(&piStack_58,&piStack_60,(longlong)iVar4,0,0x10,0x30);
    piVar5 = *(int **)(param_1 + 8);
    *(int **)(param_1 + 8) = piStack_58;
    piStack_58 = piVar5;
    if (*piVar5 == 0) {
LAB_6afa2b65:
      FUN_6b0d5230(piVar5,2,8);
    }
    else if (*piVar5 != -1) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) goto LAB_6afa2b65;
    }
    piVar5 = piStack_60;
    if (*piStack_60 == 0) goto LAB_6afa2a40;
    if (*piStack_60 == -1) {
      return '\0';
    }
    LOCK();
    *piStack_60 = *piStack_60 + -1;
    iVar4 = *piStack_60;
    UNLOCK();
  }
  if (iVar4 != 0) {
    return '\0';
  }
LAB_6afa2a40:
  FUN_6b0d5230(piVar5,2,8);
  return '\0';
}


