PROGRAM avt_device_opener.dll SHA256 7eccf391ac25e932bd36961fb278ea69f8501b2e557c3381cd290af374f37e6e

// FUNCTION 180008050 FUN_180008050 BOUNDS [[180008050, 180008280]]
// XREF 180011588 null
// XREF 180007369 AVerMedia::VendorSdk::VendorSdk
// CALL EXTERNAL:00000019 fileName
// CALL EXTERNAL:00000014 operator<<
// CALL EXTERNAL:00000010 filePath
// CALL EXTERNAL:00000025 debug
// CALL 180008c20 FUN_180008c20
// CALL EXTERNAL:00000017 ~QDebug
// CALL EXTERNAL:00000024 QMessageLogger
// CALL EXTERNAL:00000023 ~QString
// CALL EXTERNAL:00000012 QDir
// CALL EXTERNAL:00000020 QString
// CALL EXTERNAL:0000001a QLibrary
// CALL EXTERNAL:00000011 ~QDir
// CALL EXTERNAL:0000001c load
// CALL EXTERNAL:00000016 operator<<

void FUN_180008050(undefined8 *param_1,QString *param_2)

{
  bool bVar1;
  QLibrary *pQVar2;
  QString *pQVar3;
  QMessageLogger *pQVar4;
  QDebug *pQVar5;
  uint uVar6;
  uint local_res8 [2];
  QDir local_res18 [8];
  QLibrary *local_res20;
  QString local_68 [32];
  QString local_48 [32];
  
  uVar6 = 0;
  local_res8[0] = 0;
  QDir::QDir(local_res18,param_2);
  pQVar2 = (QLibrary *)FUN_180008c20(0x18);
  local_res20 = pQVar2;
  if (pQVar2 == (QLibrary *)0x0) {
    pQVar2 = (QLibrary *)0x0;
  }
  else {
    QString::QString(local_68,"RTK_IO_x64");
    local_res8[0] = 1;
    pQVar3 = (QString *)QDir::filePath(local_res18,local_48);
    uVar6 = 3;
    local_res8[0] = 3;
    QLibrary::QLibrary(pQVar2,pQVar3,(QObject *)0x0);
    *(undefined ***)pQVar2 = QLibrary::vftable;
  }
  param_1[1] = pQVar2;
  if ((uVar6 & 2) != 0) {
    uVar6 = uVar6 & 0xfffffffd;
    QString::~QString(local_48);
  }
  if ((uVar6 & 1) != 0) {
    uVar6 = uVar6 & 0xfffffffe;
    QString::~QString(local_68);
  }
  bVar1 = QLibrary::load((QLibrary *)param_1[1]);
  pQVar4 = (QMessageLogger *)
           QMessageLogger::QMessageLogger((QMessageLogger *)local_68,(char *)0x0,0,(char *)0x0);
  pQVar5 = (QDebug *)QMessageLogger::debug(pQVar4);
  pQVar3 = (QString *)QLibrary::fileName((QLibrary *)param_1[1]);
  pQVar5 = QDebug::operator<<(pQVar5,pQVar3);
  QDebug::operator<<(pQVar5,bVar1);
  QString::~QString(local_48);
  QDebug::~QDebug((QDebug *)local_res8);
  pQVar2 = (QLibrary *)FUN_180008c20(0x18);
  local_res20 = pQVar2;
  if (pQVar2 == (QLibrary *)0x0) {
    pQVar2 = (QLibrary *)0x0;
  }
  else {
    QString::QString(local_68,"RTICE_SDK_x64");
    local_res8[0] = uVar6 | 4;
    pQVar3 = (QString *)QDir::filePath(local_res18,local_48);
    uVar6 = uVar6 | 0xc;
    local_res8[0] = uVar6;
    QLibrary::QLibrary(pQVar2,pQVar3,(QObject *)0x0);
    *(undefined ***)pQVar2 = QLibrary::vftable;
  }
  *param_1 = pQVar2;
  if ((uVar6 & 8) != 0) {
    uVar6 = uVar6 & 0xfffffff7;
    QString::~QString(local_48);
  }
  if ((uVar6 & 4) != 0) {
    QString::~QString(local_68);
  }
  bVar1 = QLibrary::load((QLibrary *)*param_1);
  pQVar4 = (QMessageLogger *)
           QMessageLogger::QMessageLogger((QMessageLogger *)local_68,(char *)0x0,0,(char *)0x0);
  pQVar5 = (QDebug *)QMessageLogger::debug(pQVar4);
  pQVar3 = (QString *)QLibrary::fileName((QLibrary *)*param_1);
  pQVar5 = QDebug::operator<<(pQVar5,pQVar3);
  QDebug::operator<<(pQVar5,bVar1);
  QString::~QString(local_48);
  QDebug::~QDebug((QDebug *)local_res8);
  QDir::~QDir(local_res18);
  return;
}


// INSTRUCTIONS
180008050 MOV qword ptr [RSP + 0x10],RBX
180008055 PUSH RBP
180008056 PUSH RSI
180008057 PUSH RDI
180008058 PUSH R14
18000805a PUSH R15
18000805c MOV RBP,RSP
18000805f SUB RSP,0x60
180008063 MOV R14,RCX
180008066 XOR ESI,ESI
180008068 MOV dword ptr [RBP + 0x30],ESI
18000806b LEA RCX,[RBP + 0x40]
18000806f CALL qword ptr [0x18000b2b8]
180008075 NOP
180008076 LEA ECX,[RSI + 0x18]
180008079 CALL 0x180008c20
18000807e MOV RBX,RAX
180008081 MOV qword ptr [RBP + 0x48],RAX
180008085 LEA R15,[0x18000bbd8]
18000808c TEST RAX,RAX
18000808f JZ 0x1800080d9
180008091 LEA RDX,[0x18000bc38]
180008098 LEA RCX,[RBP + -0x40]
18000809c CALL qword ptr [0x18000b328]
1800080a2 NOP
1800080a3 MOV dword ptr [RBP + 0x30],0x1
1800080aa LEA R8,[RBP + -0x40]
1800080ae LEA RDX,[RBP + -0x20]
1800080b2 LEA RCX,[RBP + 0x40]
1800080b6 CALL qword ptr [0x18000b2a8]
1800080bc NOP
1800080bd MOV ESI,0x3
1800080c2 MOV dword ptr [RBP + 0x30],ESI
1800080c5 XOR R8D,R8D
1800080c8 MOV RDX,RAX
1800080cb MOV RCX,RBX
1800080ce CALL qword ptr [0x18000b2f8]
1800080d4 MOV qword ptr [RBX],R15
1800080d7 JMP 0x1800080db
1800080d9 XOR EBX,EBX
1800080db MOV qword ptr [R14 + 0x8],RBX
1800080df TEST SIL,0x2
1800080e3 JZ 0x1800080f3
1800080e5 AND ESI,0xfffffffd
1800080e8 LEA RCX,[RBP + -0x20]
1800080ec CALL qword ptr [0x18000b340]
1800080f2 NOP
1800080f3 TEST SIL,0x1
1800080f7 JZ 0x180008106
1800080f9 AND ESI,0xfffffffe
1800080fc LEA RCX,[RBP + -0x40]
180008100 CALL qword ptr [0x18000b340]
180008106 MOV RCX,qword ptr [R14 + 0x8]
18000810a CALL qword ptr [0x18000b308]
180008110 MOVZX EDI,AL
180008113 XOR R9D,R9D
180008116 XOR R8D,R8D
180008119 XOR EDX,EDX
18000811b LEA RCX,[RBP + -0x40]
18000811f CALL qword ptr [0x18000b348]
180008125 LEA RDX,[RBP + 0x30]
180008129 MOV RCX,RAX
18000812c CALL qword ptr [0x18000b350]
180008132 MOV RBX,RAX
180008135 LEA RDX,[RBP + -0x20]
180008139 MOV RCX,qword ptr [R14 + 0x8]
18000813d CALL qword ptr [0x18000b2f0]
180008143 NOP
180008144 MOV RDX,RAX
180008147 MOV RCX,RBX
18000814a CALL qword ptr [0x18000b2c8]
180008150 MOVZX EDX,DIL
180008154 MOV RCX,RAX
180008157 CALL qword ptr [0x18000b2d8]
18000815d NOP
18000815e LEA RCX,[RBP + -0x20]
180008162 CALL qword ptr [0x18000b340]
180008168 NOP
180008169 LEA RCX,[RBP + 0x30]
18000816d CALL qword ptr [0x18000b2e0]
180008173 MOV ECX,0x18
180008178 CALL 0x180008c20
18000817d MOV RBX,RAX
180008180 MOV qword ptr [RBP + 0x48],RAX
180008184 TEST RAX,RAX
180008187 JZ 0x1800081ce
180008189 LEA RDX,[0x18000bc48]
180008190 LEA RCX,[RBP + -0x40]
180008194 CALL qword ptr [0x18000b328]
18000819a NOP
18000819b OR ESI,0x4
18000819e MOV dword ptr [RBP + 0x30],ESI
1800081a1 LEA R8,[RBP + -0x40]
1800081a5 LEA RDX,[RBP + -0x20]
1800081a9 LEA RCX,[RBP + 0x40]
1800081ad CALL qword ptr [0x18000b2a8]
1800081b3 NOP
1800081b4 OR ESI,0x8
1800081b7 MOV dword ptr [RBP + 0x30],ESI
1800081ba XOR R8D,R8D
1800081bd MOV RDX,RAX
1800081c0 MOV RCX,RBX
1800081c3 CALL qword ptr [0x18000b2f8]
1800081c9 MOV qword ptr [RBX],R15
1800081cc JMP 0x1800081d0
1800081ce XOR EBX,EBX
1800081d0 MOV qword ptr [R14],RBX
1800081d3 TEST SIL,0x8
1800081d7 JZ 0x1800081e7
1800081d9 AND ESI,0xfffffff7
1800081dc LEA RCX,[RBP + -0x20]
1800081e0 CALL qword ptr [0x18000b340]
1800081e6 NOP
1800081e7 TEST SIL,0x4
1800081eb JZ 0x1800081f7
1800081ed LEA RCX,[RBP + -0x40]
1800081f1 CALL qword ptr [0x18000b340]
1800081f7 MOV RCX,qword ptr [R14]
1800081fa CALL qword ptr [0x18000b308]
180008200 MOVZX EDI,AL
180008203 XOR R9D,R9D
180008206 XOR R8D,R8D
180008209 XOR EDX,EDX
18000820b LEA RCX,[RBP + -0x40]
18000820f CALL qword ptr [0x18000b348]
180008215 LEA RDX,[RBP + 0x30]
180008219 MOV RCX,RAX
18000821c CALL qword ptr [0x18000b350]
180008222 MOV RBX,RAX
180008225 LEA RDX,[RBP + -0x20]
180008229 MOV RCX,qword ptr [R14]
18000822c CALL qword ptr [0x18000b2f0]
180008232 NOP
180008233 MOV RDX,RAX
180008236 MOV RCX,RBX
180008239 CALL qword ptr [0x18000b2c8]
18000823f MOVZX EDX,DIL
180008243 MOV RCX,RAX
180008246 CALL qword ptr [0x18000b2d8]
18000824c NOP
18000824d LEA RCX,[RBP + -0x20]
180008251 CALL qword ptr [0x18000b340]
180008257 NOP
180008258 LEA RCX,[RBP + 0x30]
18000825c CALL qword ptr [0x18000b2e0]
180008262 NOP
180008263 LEA RCX,[RBP + 0x40]
180008267 CALL qword ptr [0x18000b2b0]
18000826d MOV RBX,qword ptr [RSP + 0x98]
180008275 ADD RSP,0x60
180008279 POP R15
18000827b POP R14
18000827d POP RDI
18000827e POP RSI
18000827f POP RBP
180008280 RET

// FUNCTION 180007650 FUN_180007650 BOUNDS [[180007650, 180007776] [180007778, 18000781e]]
// XREF 18001154c null
// XREF 180007e13 AVerMedia::VendorSdk::getAudioFormat
// CALL 180008ac0 FUN_180008ac0
// CALL EXTERNAL:00000015 operator<<
// CALL EXTERNAL:00000025 debug
// CALL EXTERNAL:0000007b _invalid_parameter_noinfo_noreturn
// CALL 180008c20 FUN_180008c20
// CALL 180008d70 __security_check_cookie
// CALL EXTERNAL:00000017 ~QDebug
// CALL EXTERNAL:00000024 QMessageLogger
// CALL EXTERNAL:00000026 warning
// CALL EXTERNAL:0000001d resolve
// CALL 180008a70 FUN_180008a70
// CALL EXTERNAL:0000001f isLoaded
// CALL 180008c5c free

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_180007650(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 uVar3;
  _func_void *p_Var4;
  QMessageLogger *pQVar5;
  QDebug *pQVar6;
  char *_Memory;
  undefined1 auStack_78 [32];
  QDebug local_58 [8];
  QDebug local_50 [8];
  char *local_48 [2];
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180010008 ^ (ulonglong)auStack_78;
  if (((QLibrary *)*param_1 == (QLibrary *)0x0) ||
     (bVar2 = QLibrary::isLoaded((QLibrary *)*param_1), !bVar2)) {
    pQVar5 = (QMessageLogger *)
             QMessageLogger::QMessageLogger((QMessageLogger *)local_48,(char *)0x0,0,(char *)0x0);
    pQVar6 = (QDebug *)QMessageLogger::warning(pQVar5);
    QDebug::operator<<(pQVar6,"library not loaded");
  }
  else {
    p_Var4 = QLibrary::resolve((QLibrary *)*param_1,"AT_Audio_Get_HdmiRX_AudioFormat");
    if (p_Var4 != (_func_void *)0x0) {
      pQVar5 = (QMessageLogger *)
               QMessageLogger::QMessageLogger((QMessageLogger *)local_48,(char *)0x0,0,(char *)0x0);
      pQVar6 = (QDebug *)QMessageLogger::debug(pQVar5);
      QDebug::operator<<(pQVar6,"found instance AT_Audio_Get_HdmiRX_AudioFormat");
      QDebug::~QDebug(local_50);
      local_38 = 0;
      local_30 = 0xf;
      local_48[0] = (char *)0x0;
      local_48[0] = (char *)FUN_180008c20(0x20);
      uVar1 = s_RTK_SDK_LOCK_NAME_18000bc88._8_8_;
      local_38 = 0x11;
      local_30 = 0x1f;
      *(undefined8 *)local_48[0] = s_RTK_SDK_LOCK_NAME_18000bc88._0_8_;
      *(undefined8 *)(local_48[0] + 8) = uVar1;
      local_48[0][0x10] = s_RTK_SDK_LOCK_NAME_18000bc88[0x10];
      local_48[0][0x11] = '\0';
      FUN_180008a70((undefined8 *)local_58,local_48);
      if (0xf < local_30) {
        _Memory = local_48[0];
        if ((0xfff < local_30 + 1) &&
           (_Memory = *(char **)(local_48[0] + -8),
           (char *)0x1f < local_48[0] + (-8 - (longlong)_Memory))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
      }
      local_38 = 0;
      local_30 = 0xf;
      local_48[0] = (char *)((ulonglong)local_48[0] & 0xffffffffffffff00);
      uVar3 = (*p_Var4)(param_2);
      FUN_180008ac0((undefined8 *)local_58);
      return uVar3;
    }
    pQVar5 = (QMessageLogger *)
             QMessageLogger::QMessageLogger((QMessageLogger *)local_48,(char *)0x0,0,(char *)0x0);
    pQVar6 = (QDebug *)QMessageLogger::warning(pQVar5);
    QDebug::operator<<(pQVar6,"AT_Audio_Get_HdmiRX_AudioFormat instance not found");
  }
  QDebug::~QDebug(local_58);
  return 0xffffffff;
}


// INSTRUCTIONS
180007650 MOV qword ptr [RSP + 0x18],RBX
180007655 PUSH RBP
180007656 PUSH RSI
180007657 PUSH RDI
180007658 MOV RBP,RSP
18000765b SUB RSP,0x60
18000765f MOV RAX,qword ptr [0x180010008]
180007666 XOR RAX,RSP
180007669 MOV qword ptr [RBP + -0x10],RAX
18000766d MOV RSI,RDX
180007670 MOV RDI,RCX
180007673 MOV EBX,0xffffffff
180007678 MOV RCX,qword ptr [RCX]
18000767b TEST RCX,RCX
18000767e JZ 0x1800077c6
180007684 CALL qword ptr [0x18000b320]
18000768a TEST AL,AL
18000768c JZ 0x1800077c6
180007692 LEA RDX,[0x18000bd88]
180007699 MOV RCX,qword ptr [RDI]
18000769c CALL qword ptr [0x18000b310]
1800076a2 MOV RDI,RAX
1800076a5 XOR R9D,R9D
1800076a8 XOR R8D,R8D
1800076ab XOR EDX,EDX
1800076ad LEA RCX,[RBP + -0x30]
1800076b1 TEST RAX,RAX
1800076b4 JZ 0x18000779f
1800076ba CALL qword ptr [0x18000b348]
1800076c0 LEA RDX,[RBP + -0x38]
1800076c4 MOV RCX,RAX
1800076c7 CALL qword ptr [0x18000b350]
1800076cd NOP
1800076ce LEA RDX,[0x18000bda8]
1800076d5 MOV RCX,RAX
1800076d8 CALL qword ptr [0x18000b2d0]
1800076de NOP
1800076df LEA RCX,[RBP + -0x38]
1800076e3 CALL qword ptr [0x18000b2e0]
1800076e9 XOR EBX,EBX
1800076eb MOV qword ptr [RBP + -0x30],RBX
1800076ef MOV qword ptr [RBP + -0x20],RBX
1800076f3 MOV qword ptr [RBP + -0x18],0xf
1800076fb MOV byte ptr [RBP + -0x30],BL
1800076fe LEA ECX,[RBX + 0x20]
180007701 CALL 0x180008c20
180007706 MOV qword ptr [RBP + -0x20],0x11
18000770e MOV qword ptr [RBP + -0x18],0x1f
180007716 MOVUPS XMM0,xmmword ptr [0x18000bc88]
18000771d MOVUPS xmmword ptr [RAX],XMM0
180007720 MOVZX ECX,byte ptr [0x18000bc98]
180007727 MOV byte ptr [RAX + 0x10],CL
18000772a MOV byte ptr [RAX + 0x11],BL
18000772d MOV qword ptr [RBP + -0x30],RAX
180007731 LEA RDX,[RBP + -0x30]
180007735 LEA RCX,[RBP + -0x40]
180007739 CALL 0x180008a70
18000773e NOP
18000773f MOV RDX,qword ptr [RBP + -0x18]
180007743 CMP RDX,0x10
180007747 JC 0x18000777d
180007749 INC RDX
18000774c MOV RCX,qword ptr [RBP + -0x30]
180007750 MOV RAX,RCX
180007753 CMP RDX,0x1000
18000775a JC 0x180007778
18000775c ADD RDX,0x27
180007760 MOV RCX,qword ptr [RCX + -0x8]
180007764 SUB RAX,RCX
180007767 ADD RAX,-0x8
18000776b CMP RAX,0x1f
18000776f JBE 0x180007778
180007771 CALL qword ptr [0x18000b438]
180007778 CALL 0x180008c5c
18000777d MOV qword ptr [RBP + -0x20],RBX
180007781 MOV qword ptr [RBP + -0x18],0xf
180007789 MOV byte ptr [RBP + -0x30],0x0
18000778d MOV RCX,RSI
180007790 CALL RDI
180007792 MOV EBX,EAX
180007794 LEA RCX,[RBP + -0x40]
180007798 CALL 0x180008ac0
18000779d JMP 0x180007801
18000779f CALL qword ptr [0x18000b348]
1800077a5 LEA RDX,[RBP + -0x40]
1800077a9 MOV RCX,RAX
1800077ac CALL qword ptr [0x18000b358]
1800077b2 NOP
1800077b3 LEA RDX,[0x18000bdd8]
1800077ba MOV RCX,RAX
1800077bd CALL qword ptr [0x18000b2d0]
1800077c3 NOP
1800077c4 JMP 0x1800077f7
1800077c6 XOR R9D,R9D
1800077c9 XOR R8D,R8D
1800077cc XOR EDX,EDX
1800077ce LEA RCX,[RBP + -0x30]
1800077d2 CALL qword ptr [0x18000b348]
1800077d8 LEA RDX,[RBP + -0x40]
1800077dc MOV RCX,RAX
1800077df CALL qword ptr [0x18000b358]
1800077e5 NOP
1800077e6 LEA RDX,[0x18000bca0]
1800077ed MOV RCX,RAX
1800077f0 CALL qword ptr [0x18000b2d0]
1800077f6 NOP
1800077f7 LEA RCX,[RBP + -0x40]
1800077fb CALL qword ptr [0x18000b2e0]
180007801 MOV EAX,EBX
180007803 MOV RCX,qword ptr [RBP + -0x10]
180007807 XOR RCX,RSP
18000780a CALL 0x180008d70
18000780f MOV RBX,qword ptr [RSP + 0x90]
180007817 ADD RSP,0x60
18000781b POP RDI
18000781c POP RSI
18000781d POP RBP
18000781e RET

// FUNCTION 180007450 FUN_180007450 BOUNDS [[180007450, 180007581] [180007583, 18000764c]]
// XREF 180011540 null
// XREF 180007e23 AVerMedia::VendorSdk::getNonPcmOnOff
// CALL 180008ac0 FUN_180008ac0
// CALL EXTERNAL:00000014 operator<<
// CALL EXTERNAL:00000015 operator<<
// CALL EXTERNAL:00000025 debug
// CALL EXTERNAL:0000007b _invalid_parameter_noinfo_noreturn
// CALL 180008c20 FUN_180008c20
// CALL 180008d70 __security_check_cookie
// CALL EXTERNAL:00000017 ~QDebug
// CALL EXTERNAL:00000024 QMessageLogger
// CALL EXTERNAL:00000023 ~QString
// CALL EXTERNAL:00000026 warning
// CALL EXTERNAL:0000001d resolve
// CALL 180008a70 FUN_180008a70
// CALL EXTERNAL:0000001f isLoaded
// CALL 180008c5c free
// CALL EXTERNAL:00000018 errorString

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_180007450(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 uVar3;
  _func_void *p_Var4;
  QMessageLogger *pQVar5;
  QDebug *pQVar6;
  QString *pQVar7;
  char *_Memory;
  undefined1 auStack_98 [32];
  QDebug local_78 [8];
  QDebug local_70 [8];
  QMessageLogger local_68 [32];
  char *local_48 [2];
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180010008 ^ (ulonglong)auStack_98;
  if (((QLibrary *)*param_1 == (QLibrary *)0x0) ||
     (bVar2 = QLibrary::isLoaded((QLibrary *)*param_1), !bVar2)) {
    pQVar5 = (QMessageLogger *)QMessageLogger::QMessageLogger(local_68,(char *)0x0,0,(char *)0x0);
    pQVar6 = (QDebug *)QMessageLogger::warning(pQVar5);
    QDebug::operator<<(pQVar6,"library not loaded");
  }
  else {
    p_Var4 = QLibrary::resolve((QLibrary *)*param_1,"AT_Audio_CSR_Get_Send_Non_Pcm_Data_On_off");
    if (p_Var4 != (_func_void *)0x0) {
      pQVar5 = (QMessageLogger *)
               QMessageLogger::QMessageLogger((QMessageLogger *)local_48,(char *)0x0,0,(char *)0x0);
      pQVar6 = (QDebug *)QMessageLogger::debug(pQVar5);
      QDebug::operator<<(pQVar6,"found instance AT_Audio_CSR_Get_Send_Non_Pcm_Data_On_off");
      QDebug::~QDebug(local_70);
      local_38 = 0;
      local_30 = 0xf;
      local_48[0] = (char *)0x0;
      local_48[0] = (char *)FUN_180008c20(0x20);
      uVar1 = s_RTK_SDK_LOCK_NAME_18000bc88._8_8_;
      local_38 = 0x11;
      local_30 = 0x1f;
      *(undefined8 *)local_48[0] = s_RTK_SDK_LOCK_NAME_18000bc88._0_8_;
      *(undefined8 *)(local_48[0] + 8) = uVar1;
      local_48[0][0x10] = s_RTK_SDK_LOCK_NAME_18000bc88[0x10];
      local_48[0][0x11] = '\0';
      FUN_180008a70((undefined8 *)local_78,local_48);
      if (0xf < local_30) {
        _Memory = local_48[0];
        if ((0xfff < local_30 + 1) &&
           (_Memory = *(char **)(local_48[0] + -8),
           (char *)0x1f < local_48[0] + (-8 - (longlong)_Memory))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
      }
      local_38 = 0;
      local_30 = 0xf;
      local_48[0] = (char *)((ulonglong)local_48[0] & 0xffffffffffffff00);
      uVar3 = (*p_Var4)(param_2);
      FUN_180008ac0((undefined8 *)local_78);
      return uVar3;
    }
    pQVar5 = (QMessageLogger *)QMessageLogger::QMessageLogger(local_68,(char *)0x0,0,(char *)0x0);
    pQVar6 = (QDebug *)QMessageLogger::warning(pQVar5);
    pQVar7 = (QString *)QLibrary::errorString((QLibrary *)*param_1);
    QDebug::operator<<(pQVar6,pQVar7);
    QString::~QString((QString *)local_48);
  }
  QDebug::~QDebug(local_78);
  return 0xffffffff;
}


// INSTRUCTIONS
180007450 MOV qword ptr [RSP + 0x18],RBX
180007455 MOV qword ptr [RSP + 0x20],RSI
18000745a PUSH RBP
18000745b PUSH RDI
18000745c PUSH R14
18000745e MOV RBP,RSP
180007461 SUB RSP,0x80
180007468 MOV RAX,qword ptr [0x180010008]
18000746f XOR RAX,RSP
180007472 MOV qword ptr [RBP + -0x10],RAX
180007476 MOV R14,RDX
180007479 MOV RDI,RCX
18000747c MOV ESI,0xffffffff
180007481 MOV RCX,qword ptr [RCX]
180007484 TEST RCX,RCX
180007487 JZ 0x1800075ec
18000748d CALL qword ptr [0x18000b320]
180007493 TEST AL,AL
180007495 JZ 0x1800075ec
18000749b LEA RDX,[0x18000be10]
1800074a2 MOV RCX,qword ptr [RDI]
1800074a5 CALL qword ptr [0x18000b310]
1800074ab MOV RBX,RAX
1800074ae XOR R9D,R9D
1800074b1 XOR R8D,R8D
1800074b4 XOR EDX,EDX
1800074b6 TEST RAX,RAX
1800074b9 JZ 0x1800075aa
1800074bf LEA RCX,[RBP + -0x30]
1800074c3 CALL qword ptr [0x18000b348]
1800074c9 LEA RDX,[RBP + -0x58]
1800074cd MOV RCX,RAX
1800074d0 CALL qword ptr [0x18000b350]
1800074d6 NOP
1800074d7 LEA RDX,[0x18000be40]
1800074de MOV RCX,RAX
1800074e1 CALL qword ptr [0x18000b2d0]
1800074e7 NOP
1800074e8 LEA RCX,[RBP + -0x58]
1800074ec CALL qword ptr [0x18000b2e0]
1800074f2 XOR EDI,EDI
1800074f4 MOV qword ptr [RBP + -0x30],RDI
1800074f8 MOV qword ptr [RBP + -0x20],RDI
1800074fc MOV qword ptr [RBP + -0x18],0xf
180007504 MOV byte ptr [RBP + -0x30],DIL
180007508 LEA ECX,[RSI + 0x21]
18000750b CALL 0x180008c20
180007510 MOV qword ptr [RBP + -0x20],0x11
180007518 MOV qword ptr [RBP + -0x18],0x1f
180007520 MOVUPS XMM0,xmmword ptr [0x18000bc88]
180007527 MOVUPS xmmword ptr [RAX],XMM0
18000752a MOVZX ECX,byte ptr [0x18000bc98]
180007531 MOV byte ptr [RAX + 0x10],CL
180007534 MOV byte ptr [RAX + 0x11],DIL
180007538 MOV qword ptr [RBP + -0x30],RAX
18000753c LEA RDX,[RBP + -0x30]
180007540 LEA RCX,[RBP + -0x60]
180007544 CALL 0x180008a70
180007549 NOP
18000754a MOV RDX,qword ptr [RBP + -0x18]
18000754e CMP RDX,0x10
180007552 JC 0x180007588
180007554 INC RDX
180007557 MOV RCX,qword ptr [RBP + -0x30]
18000755b MOV RAX,RCX
18000755e CMP RDX,0x1000
180007565 JC 0x180007583
180007567 ADD RDX,0x27
18000756b MOV RCX,qword ptr [RCX + -0x8]
18000756f SUB RAX,RCX
180007572 ADD RAX,-0x8
180007576 CMP RAX,0x1f
18000757a JBE 0x180007583
18000757c CALL qword ptr [0x18000b438]
180007583 CALL 0x180008c5c
180007588 MOV qword ptr [RBP + -0x20],RDI
18000758c MOV qword ptr [RBP + -0x18],0xf
180007594 MOV byte ptr [RBP + -0x30],0x0
180007598 MOV RCX,R14
18000759b CALL RBX
18000759d MOV ESI,EAX
18000759f LEA RCX,[RBP + -0x60]
1800075a3 CALL 0x180008ac0
1800075a8 JMP 0x180007627
1800075aa LEA RCX,[RBP + -0x50]
1800075ae CALL qword ptr [0x18000b348]
1800075b4 LEA RDX,[RBP + -0x60]
1800075b8 MOV RCX,RAX
1800075bb CALL qword ptr [0x18000b358]
1800075c1 MOV RBX,RAX
1800075c4 LEA RDX,[RBP + -0x30]
1800075c8 MOV RCX,qword ptr [RDI]
1800075cb CALL qword ptr [0x18000b2e8]
1800075d1 NOP
1800075d2 MOV RDX,RAX
1800075d5 MOV RCX,RBX
1800075d8 CALL qword ptr [0x18000b2c8]
1800075de NOP
1800075df LEA RCX,[RBP + -0x30]
1800075e3 CALL qword ptr [0x18000b340]
1800075e9 NOP
1800075ea JMP 0x18000761d
1800075ec XOR R9D,R9D
1800075ef XOR R8D,R8D
1800075f2 XOR EDX,EDX
1800075f4 LEA RCX,[RBP + -0x50]
1800075f8 CALL qword ptr [0x18000b348]
1800075fe LEA RDX,[RBP + -0x60]
180007602 MOV RCX,RAX
180007605 CALL qword ptr [0x18000b358]
18000760b NOP
18000760c LEA RDX,[0x18000bca0]
180007613 MOV RCX,RAX
180007616 CALL qword ptr [0x18000b2d0]
18000761c NOP
18000761d LEA RCX,[RBP + -0x60]
180007621 CALL qword ptr [0x18000b2e0]
180007627 MOV EAX,ESI
180007629 MOV RCX,qword ptr [RBP + -0x10]
18000762d XOR RCX,RSP
180007630 CALL 0x180008d70
180007635 LEA R11,[RSP + 0x80]
18000763d MOV RBX,qword ptr [R11 + 0x30]
180007641 MOV RSI,qword ptr [R11 + 0x38]
180007645 MOV RSP,R11
180007648 POP R14
18000764a POP RDI
18000764b POP RBP
18000764c RET

// FUNCTION 180007820 FUN_180007820 BOUNDS [[180007820, 180007951] [180007953, 180007a1c]]
// XREF 180011558 null
// XREF 180008483 AVerMedia::VendorSdk::setNonPcmOnOff
// CALL 180008ac0 FUN_180008ac0
// CALL EXTERNAL:00000014 operator<<
// CALL EXTERNAL:00000015 operator<<
// CALL EXTERNAL:00000025 debug
// CALL EXTERNAL:0000007b _invalid_parameter_noinfo_noreturn
// CALL 180008c20 FUN_180008c20
// CALL 180008d70 __security_check_cookie
// CALL EXTERNAL:00000017 ~QDebug
// CALL EXTERNAL:00000024 QMessageLogger
// CALL EXTERNAL:00000023 ~QString
// CALL EXTERNAL:00000026 warning
// CALL EXTERNAL:0000001d resolve
// CALL 180008a70 FUN_180008a70
// CALL EXTERNAL:0000001f isLoaded
// CALL 180008c5c free
// CALL EXTERNAL:00000018 errorString

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_180007820(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 uVar3;
  _func_void *p_Var4;
  QMessageLogger *pQVar5;
  QDebug *pQVar6;
  QString *pQVar7;
  char *_Memory;
  undefined1 auStack_98 [32];
  QDebug local_78 [8];
  QDebug local_70 [8];
  QMessageLogger local_68 [32];
  char *local_48 [2];
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180010008 ^ (ulonglong)auStack_98;
  if (((QLibrary *)*param_1 == (QLibrary *)0x0) ||
     (bVar2 = QLibrary::isLoaded((QLibrary *)*param_1), !bVar2)) {
    pQVar5 = (QMessageLogger *)QMessageLogger::QMessageLogger(local_68,(char *)0x0,0,(char *)0x0);
    pQVar6 = (QDebug *)QMessageLogger::warning(pQVar5);
    QDebug::operator<<(pQVar6,"library not loaded");
  }
  else {
    p_Var4 = QLibrary::resolve((QLibrary *)*param_1,"AT_Audio_Send_Non_Pcm_Data");
    if (p_Var4 != (_func_void *)0x0) {
      pQVar5 = (QMessageLogger *)
               QMessageLogger::QMessageLogger((QMessageLogger *)local_48,(char *)0x0,0,(char *)0x0);
      pQVar6 = (QDebug *)QMessageLogger::debug(pQVar5);
      QDebug::operator<<(pQVar6,"found instance AT_Audio_Send_Non_Pcm_Data");
      QDebug::~QDebug(local_70);
      local_38 = 0;
      local_30 = 0xf;
      local_48[0] = (char *)0x0;
      local_48[0] = (char *)FUN_180008c20(0x20);
      uVar1 = s_RTK_SDK_LOCK_NAME_18000bc88._8_8_;
      local_38 = 0x11;
      local_30 = 0x1f;
      *(undefined8 *)local_48[0] = s_RTK_SDK_LOCK_NAME_18000bc88._0_8_;
      *(undefined8 *)(local_48[0] + 8) = uVar1;
      local_48[0][0x10] = s_RTK_SDK_LOCK_NAME_18000bc88[0x10];
      local_48[0][0x11] = '\0';
      FUN_180008a70((undefined8 *)local_78,local_48);
      if (0xf < local_30) {
        _Memory = local_48[0];
        if ((0xfff < local_30 + 1) &&
           (_Memory = *(char **)(local_48[0] + -8),
           (char *)0x1f < local_48[0] + (-8 - (longlong)_Memory))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
      }
      local_38 = 0;
      local_30 = 0xf;
      local_48[0] = (char *)((ulonglong)local_48[0] & 0xffffffffffffff00);
      uVar3 = (*p_Var4)(param_2);
      FUN_180008ac0((undefined8 *)local_78);
      return uVar3;
    }
    pQVar5 = (QMessageLogger *)QMessageLogger::QMessageLogger(local_68,(char *)0x0,0,(char *)0x0);
    pQVar6 = (QDebug *)QMessageLogger::warning(pQVar5);
    pQVar7 = (QString *)QLibrary::errorString((QLibrary *)*param_1);
    QDebug::operator<<(pQVar6,pQVar7);
    QString::~QString((QString *)local_48);
  }
  QDebug::~QDebug(local_78);
  return 0xffffffff;
}


// INSTRUCTIONS
180007820 MOV qword ptr [RSP + 0x18],RBX
180007825 MOV qword ptr [RSP + 0x20],RSI
18000782a PUSH RBP
18000782b PUSH RDI
18000782c PUSH R14
18000782e MOV RBP,RSP
180007831 SUB RSP,0x80
180007838 MOV RAX,qword ptr [0x180010008]
18000783f XOR RAX,RSP
180007842 MOV qword ptr [RBP + -0x10],RAX
180007846 MOV R14D,EDX
180007849 MOV RDI,RCX
18000784c MOV ESI,0xffffffff
180007851 MOV RCX,qword ptr [RCX]
180007854 TEST RCX,RCX
180007857 JZ 0x1800079bc
18000785d CALL qword ptr [0x18000b320]
180007863 TEST AL,AL
180007865 JZ 0x1800079bc
18000786b LEA RDX,[0x18000be80]
180007872 MOV RCX,qword ptr [RDI]
180007875 CALL qword ptr [0x18000b310]
18000787b MOV RBX,RAX
18000787e XOR R9D,R9D
180007881 XOR R8D,R8D
180007884 XOR EDX,EDX
180007886 TEST RAX,RAX
180007889 JZ 0x18000797a
18000788f LEA RCX,[RBP + -0x30]
180007893 CALL qword ptr [0x18000b348]
180007899 LEA RDX,[RBP + -0x58]
18000789d MOV RCX,RAX
1800078a0 CALL qword ptr [0x18000b350]
1800078a6 NOP
1800078a7 LEA RDX,[0x18000bea0]
1800078ae MOV RCX,RAX
1800078b1 CALL qword ptr [0x18000b2d0]
1800078b7 NOP
1800078b8 LEA RCX,[RBP + -0x58]
1800078bc CALL qword ptr [0x18000b2e0]
1800078c2 XOR EDI,EDI
1800078c4 MOV qword ptr [RBP + -0x30],RDI
1800078c8 MOV qword ptr [RBP + -0x20],RDI
1800078cc MOV qword ptr [RBP + -0x18],0xf
1800078d4 MOV byte ptr [RBP + -0x30],DIL
1800078d8 LEA ECX,[RSI + 0x21]
1800078db CALL 0x180008c20
1800078e0 MOV qword ptr [RBP + -0x20],0x11
1800078e8 MOV qword ptr [RBP + -0x18],0x1f
1800078f0 MOVUPS XMM0,xmmword ptr [0x18000bc88]
1800078f7 MOVUPS xmmword ptr [RAX],XMM0
1800078fa MOVZX ECX,byte ptr [0x18000bc98]
180007901 MOV byte ptr [RAX + 0x10],CL
180007904 MOV byte ptr [RAX + 0x11],DIL
180007908 MOV qword ptr [RBP + -0x30],RAX
18000790c LEA RDX,[RBP + -0x30]
180007910 LEA RCX,[RBP + -0x60]
180007914 CALL 0x180008a70
180007919 NOP
18000791a MOV RDX,qword ptr [RBP + -0x18]
18000791e CMP RDX,0x10
180007922 JC 0x180007958
180007924 INC RDX
180007927 MOV RCX,qword ptr [RBP + -0x30]
18000792b MOV RAX,RCX
18000792e CMP RDX,0x1000
180007935 JC 0x180007953
180007937 ADD RDX,0x27
18000793b MOV RCX,qword ptr [RCX + -0x8]
18000793f SUB RAX,RCX
180007942 ADD RAX,-0x8
180007946 CMP RAX,0x1f
18000794a JBE 0x180007953
18000794c CALL qword ptr [0x18000b438]
180007953 CALL 0x180008c5c
180007958 MOV qword ptr [RBP + -0x20],RDI
18000795c MOV qword ptr [RBP + -0x18],0xf
180007964 MOV byte ptr [RBP + -0x30],0x0
180007968 MOV ECX,R14D
18000796b CALL RBX
18000796d MOV ESI,EAX
18000796f LEA RCX,[RBP + -0x60]
180007973 CALL 0x180008ac0
180007978 JMP 0x1800079f7
18000797a LEA RCX,[RBP + -0x50]
18000797e CALL qword ptr [0x18000b348]
180007984 LEA RDX,[RBP + -0x60]
180007988 MOV RCX,RAX
18000798b CALL qword ptr [0x18000b358]
180007991 MOV RBX,RAX
180007994 LEA RDX,[RBP + -0x30]
180007998 MOV RCX,qword ptr [RDI]
18000799b CALL qword ptr [0x18000b2e8]
1800079a1 NOP
1800079a2 MOV RDX,RAX
1800079a5 MOV RCX,RBX
1800079a8 CALL qword ptr [0x18000b2c8]
1800079ae NOP
1800079af LEA RCX,[RBP + -0x30]
1800079b3 CALL qword ptr [0x18000b340]
1800079b9 NOP
1800079ba JMP 0x1800079ed
1800079bc XOR R9D,R9D
1800079bf XOR R8D,R8D
1800079c2 XOR EDX,EDX
1800079c4 LEA RCX,[RBP + -0x50]
1800079c8 CALL qword ptr [0x18000b348]
1800079ce LEA RDX,[RBP + -0x60]
1800079d2 MOV RCX,RAX
1800079d5 CALL qword ptr [0x18000b358]
1800079db NOP
1800079dc LEA RDX,[0x18000bca0]
1800079e3 MOV RCX,RAX
1800079e6 CALL qword ptr [0x18000b2d0]
1800079ec NOP
1800079ed LEA RCX,[RBP + -0x60]
1800079f1 CALL qword ptr [0x18000b2e0]
1800079f7 MOV EAX,ESI
1800079f9 MOV RCX,qword ptr [RBP + -0x10]
1800079fd XOR RCX,RSP
180007a00 CALL 0x180008d70
180007a05 LEA R11,[RSP + 0x80]
180007a0d MOV RBX,qword ptr [R11 + 0x30]
180007a11 MOV RSI,qword ptr [R11 + 0x38]
180007a15 MOV RSP,R11
180007a18 POP R14
180007a1a POP RDI
180007a1b POP RBP
180007a1c RET

// FUNCTION 180007a20 FUN_180007a20 BOUNDS [[180007a20, 180007b4d] [180007b4f, 180007bf8]]
// XREF 180011564 null
// XREF 180007e33 AVerMedia::VendorSdk::getSerialNum
// CALL 180008ac0 FUN_180008ac0
// CALL EXTERNAL:00000015 operator<<
// CALL EXTERNAL:00000025 debug
// CALL EXTERNAL:0000007b _invalid_parameter_noinfo_noreturn
// CALL 180008c20 FUN_180008c20
// CALL 180008d70 __security_check_cookie
// CALL EXTERNAL:00000017 ~QDebug
// CALL EXTERNAL:00000024 QMessageLogger
// CALL EXTERNAL:00000026 warning
// CALL EXTERNAL:0000001d resolve
// CALL 180008a70 FUN_180008a70
// CALL EXTERNAL:0000001f isLoaded
// CALL 180008c5c free

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4
FUN_180007a20(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 uVar3;
  _func_void *p_Var4;
  QMessageLogger *pQVar5;
  QDebug *pQVar6;
  char *_Memory;
  undefined1 auStack_98 [32];
  QDebug local_78 [8];
  QDebug local_70 [8];
  char *local_68 [2];
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180010008 ^ (ulonglong)auStack_98;
  if (((QLibrary *)*param_1 == (QLibrary *)0x0) ||
     (bVar2 = QLibrary::isLoaded((QLibrary *)*param_1), !bVar2)) {
    pQVar5 = (QMessageLogger *)
             QMessageLogger::QMessageLogger((QMessageLogger *)local_68,(char *)0x0,0,(char *)0x0);
    pQVar6 = (QDebug *)QMessageLogger::warning(pQVar5);
    QDebug::operator<<(pQVar6,"library not loaded");
  }
  else {
    p_Var4 = QLibrary::resolve((QLibrary *)*param_1,"AT_USB_Get_SerialNum");
    if (p_Var4 != (_func_void *)0x0) {
      pQVar5 = (QMessageLogger *)
               QMessageLogger::QMessageLogger((QMessageLogger *)local_68,(char *)0x0,0,(char *)0x0);
      pQVar6 = (QDebug *)QMessageLogger::debug(pQVar5);
      QDebug::operator<<(pQVar6,"found instance AT_USB_Get_SerialNum");
      QDebug::~QDebug(local_70);
      local_58 = 0;
      local_50 = 0xf;
      local_68[0] = (char *)0x0;
      local_68[0] = (char *)FUN_180008c20(0x20);
      uVar1 = s_RTK_SDK_LOCK_NAME_18000bc88._8_8_;
      local_58 = 0x11;
      local_50 = 0x1f;
      *(undefined8 *)local_68[0] = s_RTK_SDK_LOCK_NAME_18000bc88._0_8_;
      *(undefined8 *)(local_68[0] + 8) = uVar1;
      local_68[0][0x10] = s_RTK_SDK_LOCK_NAME_18000bc88[0x10];
      local_68[0][0x11] = '\0';
      FUN_180008a70((undefined8 *)local_78,local_68);
      if (0xf < local_50) {
        _Memory = local_68[0];
        if ((0xfff < local_50 + 1) &&
           (_Memory = *(char **)(local_68[0] + -8),
           (char *)0x1f < local_68[0] + (-8 - (longlong)_Memory))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
      }
      local_58 = 0;
      local_50 = 0xf;
      local_68[0] = (char *)((ulonglong)local_68[0] & 0xffffffffffffff00);
      uVar3 = (*p_Var4)(param_2,param_3,param_4);
      FUN_180008ac0((undefined8 *)local_78);
      return uVar3;
    }
    pQVar5 = (QMessageLogger *)
             QMessageLogger::QMessageLogger((QMessageLogger *)local_68,(char *)0x0,0,(char *)0x0);
    pQVar6 = (QDebug *)QMessageLogger::warning(pQVar5);
    QDebug::operator<<(pQVar6,"AT_USB_Get_SerialNum instance not found");
  }
  QDebug::~QDebug(local_78);
  return 0xffffffff;
}


// INSTRUCTIONS
180007a20 PUSH RBP
180007a22 PUSH RBX
180007a23 PUSH RSI
180007a24 PUSH RDI
180007a25 PUSH R14
180007a27 PUSH R15
180007a29 MOV RBP,RSP
180007a2c SUB RSP,0x68
180007a30 MOV RAX,qword ptr [0x180010008]
180007a37 XOR RAX,RSP
180007a3a MOV qword ptr [RBP + -0x18],RAX
180007a3e MOV R15,R9
180007a41 MOV R14D,R8D
180007a44 MOV RSI,RDX
180007a47 MOV RDI,RCX
180007a4a MOV EBX,0xffffffff
180007a4f MOV RCX,qword ptr [RCX]
180007a52 TEST RCX,RCX
180007a55 JZ 0x180007ba3
180007a5b CALL qword ptr [0x18000b320]
180007a61 TEST AL,AL
180007a63 JZ 0x180007ba3
180007a69 LEA RDX,[0x18000bed0]
180007a70 MOV RCX,qword ptr [RDI]
180007a73 CALL qword ptr [0x18000b310]
180007a79 MOV RDI,RAX
180007a7c XOR R9D,R9D
180007a7f XOR R8D,R8D
180007a82 XOR EDX,EDX
180007a84 LEA RCX,[RBP + -0x38]
180007a88 TEST RAX,RAX
180007a8b JZ 0x180007b7c
180007a91 CALL qword ptr [0x18000b348]
180007a97 LEA RDX,[RBP + -0x40]
180007a9b MOV RCX,RAX
180007a9e CALL qword ptr [0x18000b350]
180007aa4 NOP
180007aa5 LEA RDX,[0x18000bee8]
180007aac MOV RCX,RAX
180007aaf CALL qword ptr [0x18000b2d0]
180007ab5 NOP
180007ab6 LEA RCX,[RBP + -0x40]
180007aba CALL qword ptr [0x18000b2e0]
180007ac0 XOR EBX,EBX
180007ac2 MOV qword ptr [RBP + -0x38],RBX
180007ac6 MOV qword ptr [RBP + -0x28],RBX
180007aca MOV qword ptr [RBP + -0x20],0xf
180007ad2 MOV byte ptr [RBP + -0x38],BL
180007ad5 LEA ECX,[RBX + 0x20]
180007ad8 CALL 0x180008c20
180007add MOV qword ptr [RBP + -0x28],0x11
180007ae5 MOV qword ptr [RBP + -0x20],0x1f
180007aed MOVUPS XMM0,xmmword ptr [0x18000bc88]
180007af4 MOVUPS xmmword ptr [RAX],XMM0
180007af7 MOVZX ECX,byte ptr [0x18000bc98]
180007afe MOV byte ptr [RAX + 0x10],CL
180007b01 MOV byte ptr [RAX + 0x11],BL
180007b04 MOV qword ptr [RBP + -0x38],RAX
180007b08 LEA RDX,[RBP + -0x38]
180007b0c LEA RCX,[RBP + -0x48]
180007b10 CALL 0x180008a70
180007b15 NOP
180007b16 MOV RDX,qword ptr [RBP + -0x20]
180007b1a CMP RDX,0x10
180007b1e JC 0x180007b54
180007b20 INC RDX
180007b23 MOV RCX,qword ptr [RBP + -0x38]
180007b27 MOV RAX,RCX
180007b2a CMP RDX,0x1000
180007b31 JC 0x180007b4f
180007b33 ADD RDX,0x27
180007b37 MOV RCX,qword ptr [RCX + -0x8]
180007b3b SUB RAX,RCX
180007b3e ADD RAX,-0x8
180007b42 CMP RAX,0x1f
180007b46 JBE 0x180007b4f
180007b48 CALL qword ptr [0x18000b438]
180007b4f CALL 0x180008c5c
180007b54 MOV qword ptr [RBP + -0x28],RBX
180007b58 MOV qword ptr [RBP + -0x20],0xf
180007b60 MOV byte ptr [RBP + -0x38],0x0
180007b64 MOV R8,R15
180007b67 MOV EDX,R14D
180007b6a MOV RCX,RSI
180007b6d CALL RDI
180007b6f MOV EBX,EAX
180007b71 LEA RCX,[RBP + -0x48]
180007b75 CALL 0x180008ac0
180007b7a JMP 0x180007bde
180007b7c CALL qword ptr [0x18000b348]
180007b82 LEA RDX,[RBP + -0x48]
180007b86 MOV RCX,RAX
180007b89 CALL qword ptr [0x18000b358]
180007b8f NOP
180007b90 LEA RDX,[0x18000bf10]
180007b97 MOV RCX,RAX
180007b9a CALL qword ptr [0x18000b2d0]
180007ba0 NOP
180007ba1 JMP 0x180007bd4
180007ba3 XOR R9D,R9D
180007ba6 XOR R8D,R8D
180007ba9 XOR EDX,EDX
180007bab LEA RCX,[RBP + -0x38]
180007baf CALL qword ptr [0x18000b348]
180007bb5 LEA RDX,[RBP + -0x48]
180007bb9 MOV RCX,RAX
180007bbc CALL qword ptr [0x18000b358]
180007bc2 NOP
180007bc3 LEA RDX,[0x18000bca0]
180007bca MOV RCX,RAX
180007bcd CALL qword ptr [0x18000b2d0]
180007bd3 NOP
180007bd4 LEA RCX,[RBP + -0x48]
180007bd8 CALL qword ptr [0x18000b2e0]
180007bde MOV EAX,EBX
180007be0 MOV RCX,qword ptr [RBP + -0x18]
180007be4 XOR RCX,RSP
180007be7 CALL 0x180008d70
180007bec ADD RSP,0x68
180007bf0 POP R15
180007bf2 POP R14
180007bf4 POP RDI
180007bf5 POP RSI
180007bf6 POP RBX
180007bf7 POP RBP
180007bf8 RET

// FUNCTION 180007e50 FUN_180007e50 BOUNDS [[180007e50, 180007f80] [180007f82, 180008049]]
// XREF 18001157c null
// XREF 180007e43 AVerMedia::VendorSdk::initialize
// CALL 180008ac0 FUN_180008ac0
// CALL EXTERNAL:00000014 operator<<
// CALL EXTERNAL:00000015 operator<<
// CALL EXTERNAL:00000025 debug
// CALL EXTERNAL:0000007b _invalid_parameter_noinfo_noreturn
// CALL 180008c20 FUN_180008c20
// CALL 180008d70 __security_check_cookie
// CALL EXTERNAL:00000017 ~QDebug
// CALL EXTERNAL:00000024 QMessageLogger
// CALL EXTERNAL:00000023 ~QString
// CALL EXTERNAL:00000026 warning
// CALL EXTERNAL:0000001d resolve
// CALL 180008a70 FUN_180008a70
// CALL EXTERNAL:0000001f isLoaded
// CALL 180008c5c free
// CALL EXTERNAL:00000018 errorString

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_180007e50(undefined8 *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 uVar3;
  _func_void *p_Var4;
  QMessageLogger *pQVar5;
  QDebug *pQVar6;
  QString *pQVar7;
  char *_Memory;
  undefined1 auStack_88 [32];
  QDebug local_68 [8];
  QDebug local_60 [8];
  QMessageLogger local_58 [32];
  char *local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180010008 ^ (ulonglong)auStack_88;
  if (((QLibrary *)*param_1 == (QLibrary *)0x0) ||
     (bVar2 = QLibrary::isLoaded((QLibrary *)*param_1), !bVar2)) {
    pQVar5 = (QMessageLogger *)QMessageLogger::QMessageLogger(local_58,(char *)0x0,0,(char *)0x0);
    pQVar6 = (QDebug *)QMessageLogger::warning(pQVar5);
    QDebug::operator<<(pQVar6,"library not loaded");
  }
  else {
    p_Var4 = QLibrary::resolve((QLibrary *)*param_1,"initialize");
    if (p_Var4 != (_func_void *)0x0) {
      pQVar5 = (QMessageLogger *)
               QMessageLogger::QMessageLogger((QMessageLogger *)local_38,(char *)0x0,0,(char *)0x0);
      pQVar6 = (QDebug *)QMessageLogger::debug(pQVar5);
      QDebug::operator<<(pQVar6,"found instance initialize");
      QDebug::~QDebug(local_60);
      local_28 = 0;
      local_20 = 0xf;
      local_38[0] = (char *)0x0;
      local_38[0] = (char *)FUN_180008c20(0x20);
      uVar1 = s_RTK_SDK_LOCK_NAME_18000bc88._8_8_;
      local_28 = 0x11;
      local_20 = 0x1f;
      *(undefined8 *)local_38[0] = s_RTK_SDK_LOCK_NAME_18000bc88._0_8_;
      *(undefined8 *)(local_38[0] + 8) = uVar1;
      local_38[0][0x10] = s_RTK_SDK_LOCK_NAME_18000bc88[0x10];
      local_38[0][0x11] = '\0';
      FUN_180008a70((undefined8 *)local_68,local_38);
      if (0xf < local_20) {
        _Memory = local_38[0];
        if ((0xfff < local_20 + 1) &&
           (_Memory = *(char **)(local_38[0] + -8),
           (char *)0x1f < local_38[0] + (-8 - (longlong)_Memory))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
      }
      local_28 = 0;
      local_20 = 0xf;
      local_38[0] = (char *)((ulonglong)local_38[0] & 0xffffffffffffff00);
      uVar3 = (*p_Var4)();
      FUN_180008ac0((undefined8 *)local_68);
      return uVar3;
    }
    pQVar5 = (QMessageLogger *)QMessageLogger::QMessageLogger(local_58,(char *)0x0,0,(char *)0x0);
    pQVar6 = (QDebug *)QMessageLogger::warning(pQVar5);
    pQVar7 = (QString *)QLibrary::errorString((QLibrary *)*param_1);
    QDebug::operator<<(pQVar6,pQVar7);
    QString::~QString((QString *)local_38);
  }
  QDebug::~QDebug(local_68);
  return 0xffffffff;
}


// INSTRUCTIONS
180007e50 MOV qword ptr [RSP + 0x10],RBX
180007e55 MOV qword ptr [RSP + 0x18],RSI
180007e5a MOV qword ptr [RSP + 0x20],RDI
180007e5f PUSH RBP
180007e60 MOV RBP,RSP
180007e63 SUB RSP,0x80
180007e6a MOV RAX,qword ptr [0x180010008]
180007e71 XOR RAX,RSP
180007e74 MOV qword ptr [RBP + -0x10],RAX
180007e78 MOV RDI,RCX
180007e7b MOV ESI,0xffffffff
180007e80 MOV RCX,qword ptr [RCX]
180007e83 TEST RCX,RCX
180007e86 JZ 0x180007fe8
180007e8c CALL qword ptr [0x18000b320]
180007e92 TEST AL,AL
180007e94 JZ 0x180007fe8
180007e9a LEA RDX,[0x18000bc58]
180007ea1 MOV RCX,qword ptr [RDI]
180007ea4 CALL qword ptr [0x18000b310]
180007eaa MOV RBX,RAX
180007ead XOR R9D,R9D
180007eb0 XOR R8D,R8D
180007eb3 XOR EDX,EDX
180007eb5 TEST RAX,RAX
180007eb8 JZ 0x180007fa6
180007ebe LEA RCX,[RBP + -0x30]
180007ec2 CALL qword ptr [0x18000b348]
180007ec8 LEA RDX,[RBP + -0x58]
180007ecc MOV RCX,RAX
180007ecf CALL qword ptr [0x18000b350]
180007ed5 NOP
180007ed6 LEA RDX,[0x18000bc68]
180007edd MOV RCX,RAX
180007ee0 CALL qword ptr [0x18000b2d0]
180007ee6 NOP
180007ee7 LEA RCX,[RBP + -0x58]
180007eeb CALL qword ptr [0x18000b2e0]
180007ef1 XOR EDI,EDI
180007ef3 MOV qword ptr [RBP + -0x30],RDI
180007ef7 MOV qword ptr [RBP + -0x20],RDI
180007efb MOV qword ptr [RBP + -0x18],0xf
180007f03 MOV byte ptr [RBP + -0x30],DIL
180007f07 LEA ECX,[RSI + 0x21]
180007f0a CALL 0x180008c20
180007f0f MOV qword ptr [RBP + -0x20],0x11
180007f17 MOV qword ptr [RBP + -0x18],0x1f
180007f1f MOVUPS XMM0,xmmword ptr [0x18000bc88]
180007f26 MOVUPS xmmword ptr [RAX],XMM0
180007f29 MOVZX ECX,byte ptr [0x18000bc98]
180007f30 MOV byte ptr [RAX + 0x10],CL
180007f33 MOV byte ptr [RAX + 0x11],DIL
180007f37 MOV qword ptr [RBP + -0x30],RAX
180007f3b LEA RDX,[RBP + -0x30]
180007f3f LEA RCX,[RBP + -0x60]
180007f43 CALL 0x180008a70
180007f48 NOP
180007f49 MOV RDX,qword ptr [RBP + -0x18]
180007f4d CMP RDX,0x10
180007f51 JC 0x180007f87
180007f53 INC RDX
180007f56 MOV RCX,qword ptr [RBP + -0x30]
180007f5a MOV RAX,RCX
180007f5d CMP RDX,0x1000
180007f64 JC 0x180007f82
180007f66 ADD RDX,0x27
180007f6a MOV RCX,qword ptr [RCX + -0x8]
180007f6e SUB RAX,RCX
180007f71 ADD RAX,-0x8
180007f75 CMP RAX,0x1f
180007f79 JBE 0x180007f82
180007f7b CALL qword ptr [0x18000b438]
180007f82 CALL 0x180008c5c
180007f87 MOV qword ptr [RBP + -0x20],RDI
180007f8b MOV qword ptr [RBP + -0x18],0xf
180007f93 MOV byte ptr [RBP + -0x30],0x0
180007f97 CALL RBX
180007f99 MOV ESI,EAX
180007f9b LEA RCX,[RBP + -0x60]
180007f9f CALL 0x180008ac0
180007fa4 JMP 0x180008023
180007fa6 LEA RCX,[RBP + -0x50]
180007faa CALL qword ptr [0x18000b348]
180007fb0 LEA RDX,[RBP + -0x60]
180007fb4 MOV RCX,RAX
180007fb7 CALL qword ptr [0x18000b358]
180007fbd MOV RBX,RAX
180007fc0 LEA RDX,[RBP + -0x30]
180007fc4 MOV RCX,qword ptr [RDI]
180007fc7 CALL qword ptr [0x18000b2e8]
180007fcd NOP
180007fce MOV RDX,RAX
180007fd1 MOV RCX,RBX
180007fd4 CALL qword ptr [0x18000b2c8]
180007fda NOP
180007fdb LEA RCX,[RBP + -0x30]
180007fdf CALL qword ptr [0x18000b340]
180007fe5 NOP
180007fe6 JMP 0x180008019
180007fe8 XOR R9D,R9D
180007feb XOR R8D,R8D
180007fee XOR EDX,EDX
180007ff0 LEA RCX,[RBP + -0x50]
180007ff4 CALL qword ptr [0x18000b348]
180007ffa LEA RDX,[RBP + -0x60]
180007ffe MOV RCX,RAX
180008001 CALL qword ptr [0x18000b358]
180008007 NOP
180008008 LEA RDX,[0x18000bca0]
18000800f MOV RCX,RAX
180008012 CALL qword ptr [0x18000b2d0]
180008018 NOP
180008019 LEA RCX,[RBP + -0x60]
18000801d CALL qword ptr [0x18000b2e0]
180008023 MOV EAX,ESI
180008025 MOV RCX,qword ptr [RBP + -0x10]
180008029 XOR RCX,RSP
18000802c CALL 0x180008d70
180008031 LEA R11,[RSP + 0x80]
180008039 MOV RBX,qword ptr [R11 + 0x18]
18000803d MOV RSI,qword ptr [R11 + 0x20]
180008041 MOV RDI,qword ptr [R11 + 0x28]
180008045 MOV RSP,R11
180008048 POP RBP
180008049 RET

// FUNCTION 1800082a0 FUN_1800082a0 BOUNDS [[1800082a0, 1800083cd] [1800083cf, 18000847c]]
// XREF 180011594 null
// XREF 180008293 AVerMedia::VendorSdk::setDevice
// CALL 180008ac0 FUN_180008ac0
// CALL EXTERNAL:00000015 operator<<
// CALL EXTERNAL:00000025 debug
// CALL EXTERNAL:0000007b _invalid_parameter_noinfo_noreturn
// CALL 180008c20 FUN_180008c20
// CALL 180008d70 __security_check_cookie
// CALL EXTERNAL:00000017 ~QDebug
// CALL EXTERNAL:00000024 QMessageLogger
// CALL EXTERNAL:00000026 warning
// CALL EXTERNAL:0000001d resolve
// CALL 180008a70 FUN_180008a70
// CALL EXTERNAL:0000001f isLoaded
// CALL 180008c5c free

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4
FUN_1800082a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 uVar3;
  _func_void *p_Var4;
  QMessageLogger *pQVar5;
  QDebug *pQVar6;
  char *_Memory;
  undefined1 auStack_98 [32];
  QDebug local_78 [8];
  QDebug local_70 [8];
  char *local_68 [2];
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_180010008 ^ (ulonglong)auStack_98;
  if (((QLibrary *)*param_1 == (QLibrary *)0x0) ||
     (bVar2 = QLibrary::isLoaded((QLibrary *)*param_1), !bVar2)) {
    pQVar5 = (QMessageLogger *)
             QMessageLogger::QMessageLogger((QMessageLogger *)local_68,(char *)0x0,0,(char *)0x0);
    pQVar6 = (QDebug *)QMessageLogger::warning(pQVar5);
    QDebug::operator<<(pQVar6,"library not loaded");
  }
  else {
    p_Var4 = QLibrary::resolve((QLibrary *)*param_1,"setDevice");
    if (p_Var4 != (_func_void *)0x0) {
      pQVar5 = (QMessageLogger *)
               QMessageLogger::QMessageLogger((QMessageLogger *)local_68,(char *)0x0,0,(char *)0x0);
      pQVar6 = (QDebug *)QMessageLogger::debug(pQVar5);
      QDebug::operator<<(pQVar6,"found setDevice instance");
      QDebug::~QDebug(local_70);
      local_58 = 0;
      local_50 = 0xf;
      local_68[0] = (char *)0x0;
      local_68[0] = (char *)FUN_180008c20(0x20);
      uVar1 = s_RTK_SDK_LOCK_NAME_18000bc88._8_8_;
      local_58 = 0x11;
      local_50 = 0x1f;
      *(undefined8 *)local_68[0] = s_RTK_SDK_LOCK_NAME_18000bc88._0_8_;
      *(undefined8 *)(local_68[0] + 8) = uVar1;
      local_68[0][0x10] = s_RTK_SDK_LOCK_NAME_18000bc88[0x10];
      local_68[0][0x11] = '\0';
      FUN_180008a70((undefined8 *)local_78,local_68);
      if (0xf < local_50) {
        _Memory = local_68[0];
        if ((0xfff < local_50 + 1) &&
           (_Memory = *(char **)(local_68[0] + -8),
           (char *)0x1f < local_68[0] + (-8 - (longlong)_Memory))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
      }
      local_58 = 0;
      local_50 = 0xf;
      local_68[0] = (char *)((ulonglong)local_68[0] & 0xffffffffffffff00);
      uVar3 = (*p_Var4)(param_2,param_3,param_4,param_5);
      FUN_180008ac0((undefined8 *)local_78);
      return uVar3;
    }
    pQVar5 = (QMessageLogger *)
             QMessageLogger::QMessageLogger((QMessageLogger *)local_68,(char *)0x0,0,(char *)0x0);
    pQVar6 = (QDebug *)QMessageLogger::warning(pQVar5);
    QDebug::operator<<(pQVar6,"setDevice instance not found");
  }
  QDebug::~QDebug(local_78);
  return 0xffffffff;
}


// INSTRUCTIONS
1800082a0 PUSH RBP
1800082a2 PUSH RBX
1800082a3 PUSH RSI
1800082a4 PUSH RDI
1800082a5 PUSH R14
1800082a7 PUSH R15
1800082a9 MOV RBP,RSP
1800082ac SUB RSP,0x68
1800082b0 MOV RAX,qword ptr [0x180010008]
1800082b7 XOR RAX,RSP
1800082ba MOV qword ptr [RBP + -0x18],RAX
1800082be MOV R15D,R9D
1800082c1 MOV R14,R8
1800082c4 MOV RSI,RDX
1800082c7 MOV RDI,RCX
1800082ca MOV EBX,0xffffffff
1800082cf MOV RCX,qword ptr [RCX]
1800082d2 TEST RCX,RCX
1800082d5 JZ 0x180008427
1800082db CALL qword ptr [0x18000b320]
1800082e1 TEST AL,AL
1800082e3 JZ 0x180008427
1800082e9 LEA RDX,[0x18000bce8]
1800082f0 MOV RCX,qword ptr [RDI]
1800082f3 CALL qword ptr [0x18000b310]
1800082f9 MOV RDI,RAX
1800082fc XOR R9D,R9D
1800082ff XOR R8D,R8D
180008302 XOR EDX,EDX
180008304 LEA RCX,[RBP + -0x38]
180008308 TEST RAX,RAX
18000830b JZ 0x180008400
180008311 CALL qword ptr [0x18000b348]
180008317 LEA RDX,[RBP + -0x40]
18000831b MOV RCX,RAX
18000831e CALL qword ptr [0x18000b350]
180008324 NOP
180008325 LEA RDX,[0x18000bcf8]
18000832c MOV RCX,RAX
18000832f CALL qword ptr [0x18000b2d0]
180008335 NOP
180008336 LEA RCX,[RBP + -0x40]
18000833a CALL qword ptr [0x18000b2e0]
180008340 XOR EBX,EBX
180008342 MOV qword ptr [RBP + -0x38],RBX
180008346 MOV qword ptr [RBP + -0x28],RBX
18000834a MOV qword ptr [RBP + -0x20],0xf
180008352 MOV byte ptr [RBP + -0x38],BL
180008355 LEA ECX,[RBX + 0x20]
180008358 CALL 0x180008c20
18000835d MOV qword ptr [RBP + -0x28],0x11
180008365 MOV qword ptr [RBP + -0x20],0x1f
18000836d MOVUPS XMM0,xmmword ptr [0x18000bc88]
180008374 MOVUPS xmmword ptr [RAX],XMM0
180008377 MOVZX ECX,byte ptr [0x18000bc98]
18000837e MOV byte ptr [RAX + 0x10],CL
180008381 MOV byte ptr [RAX + 0x11],BL
180008384 MOV qword ptr [RBP + -0x38],RAX
180008388 LEA RDX,[RBP + -0x38]
18000838c LEA RCX,[RBP + -0x48]
180008390 CALL 0x180008a70
180008395 NOP
180008396 MOV RDX,qword ptr [RBP + -0x20]
18000839a CMP RDX,0x10
18000839e JC 0x1800083d4
1800083a0 INC RDX
1800083a3 MOV RCX,qword ptr [RBP + -0x38]
1800083a7 MOV RAX,RCX
1800083aa CMP RDX,0x1000
1800083b1 JC 0x1800083cf
1800083b3 ADD RDX,0x27
1800083b7 MOV RCX,qword ptr [RCX + -0x8]
1800083bb SUB RAX,RCX
1800083be ADD RAX,-0x8
1800083c2 CMP RAX,0x1f
1800083c6 JBE 0x1800083cf
1800083c8 CALL qword ptr [0x18000b438]
1800083cf CALL 0x180008c5c
1800083d4 MOV qword ptr [RBP + -0x28],RBX
1800083d8 MOV qword ptr [RBP + -0x20],0xf
1800083e0 MOV byte ptr [RBP + -0x38],0x0
1800083e4 MOV R9D,dword ptr [RBP + 0x58]
1800083e8 MOV R8D,R15D
1800083eb MOV RDX,R14
1800083ee MOV RCX,RSI
1800083f1 CALL RDI
1800083f3 MOV EBX,EAX
1800083f5 LEA RCX,[RBP + -0x48]
1800083f9 CALL 0x180008ac0
1800083fe JMP 0x180008462
180008400 CALL qword ptr [0x18000b348]
180008406 LEA RDX,[RBP + -0x48]
18000840a MOV RCX,RAX
18000840d CALL qword ptr [0x18000b358]
180008413 NOP
180008414 LEA RDX,[0x18000bd18]
18000841b MOV RCX,RAX
18000841e CALL qword ptr [0x18000b2d0]
180008424 NOP
180008425 JMP 0x180008458
180008427 XOR R9D,R9D
18000842a XOR R8D,R8D
18000842d XOR EDX,EDX
18000842f LEA RCX,[RBP + -0x38]
180008433 CALL qword ptr [0x18000b348]
180008439 LEA RDX,[RBP + -0x48]
18000843d MOV RCX,RAX
180008440 CALL qword ptr [0x18000b358]
180008446 NOP
180008447 LEA RDX,[0x18000bca0]
18000844e MOV RCX,RAX
180008451 CALL qword ptr [0x18000b2d0]
180008457 NOP
180008458 LEA RCX,[RBP + -0x48]
18000845c CALL qword ptr [0x18000b2e0]
180008462 MOV EAX,EBX
180008464 MOV RCX,qword ptr [RBP + -0x18]
180008468 XOR RCX,RSP
18000846b CALL 0x180008d70
180008470 ADD RSP,0x68
180008474 POP R15
180008476 POP R14
180008478 POP RDI
180008479 POP RSI
18000847a POP RBX
18000847b POP RBP
18000847c RET

// FUNCTION 1800084a0 FUN_1800084a0 BOUNDS [[1800084a0, 1800085d2] [1800085d4, 18000869f]]
// XREF 1800115a0 null
// XREF 180008493 AVerMedia::VendorSdk::setPort
// CALL 180008ac0 FUN_180008ac0
// CALL EXTERNAL:00000014 operator<<
// CALL EXTERNAL:00000015 operator<<
// CALL EXTERNAL:00000025 debug
// CALL EXTERNAL:0000007b _invalid_parameter_noinfo_noreturn
// CALL 180008c20 FUN_180008c20
// CALL 180008d70 __security_check_cookie
// CALL EXTERNAL:00000017 ~QDebug
// CALL EXTERNAL:00000024 QMessageLogger
// CALL EXTERNAL:00000023 ~QString
// CALL EXTERNAL:00000026 warning
// CALL EXTERNAL:0000001d resolve
// CALL 180008a70 FUN_180008a70
// CALL EXTERNAL:0000001f isLoaded
// CALL 180008c5c free
// CALL EXTERNAL:00000018 errorString

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_1800084a0(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 uVar3;
  _func_void *p_Var4;
  QMessageLogger *pQVar5;
  QDebug *pQVar6;
  QString *pQVar7;
  char *_Memory;
  undefined1 auStack_a8 [32];
  QDebug local_88 [8];
  QDebug local_80 [8];
  QMessageLogger local_78 [32];
  char *local_58 [2];
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_180010008 ^ (ulonglong)auStack_a8;
  if (((QLibrary *)*param_1 == (QLibrary *)0x0) ||
     (bVar2 = QLibrary::isLoaded((QLibrary *)*param_1), !bVar2)) {
    pQVar5 = (QMessageLogger *)QMessageLogger::QMessageLogger(local_78,(char *)0x0,0,(char *)0x0);
    pQVar6 = (QDebug *)QMessageLogger::warning(pQVar5);
    QDebug::operator<<(pQVar6,"library not loaded");
  }
  else {
    p_Var4 = QLibrary::resolve((QLibrary *)*param_1,"setPort");
    if (p_Var4 != (_func_void *)0x0) {
      pQVar5 = (QMessageLogger *)
               QMessageLogger::QMessageLogger((QMessageLogger *)local_58,(char *)0x0,0,(char *)0x0);
      pQVar6 = (QDebug *)QMessageLogger::debug(pQVar5);
      QDebug::operator<<(pQVar6,"found instance setPort");
      QDebug::~QDebug(local_80);
      local_48 = 0;
      local_40 = 0xf;
      local_58[0] = (char *)0x0;
      local_58[0] = (char *)FUN_180008c20(0x20);
      uVar1 = s_RTK_SDK_LOCK_NAME_18000bc88._8_8_;
      local_48 = 0x11;
      local_40 = 0x1f;
      *(undefined8 *)local_58[0] = s_RTK_SDK_LOCK_NAME_18000bc88._0_8_;
      *(undefined8 *)(local_58[0] + 8) = uVar1;
      local_58[0][0x10] = s_RTK_SDK_LOCK_NAME_18000bc88[0x10];
      local_58[0][0x11] = '\0';
      FUN_180008a70((undefined8 *)local_88,local_58);
      if (0xf < local_40) {
        _Memory = local_58[0];
        if ((0xfff < local_40 + 1) &&
           (_Memory = *(char **)(local_58[0] + -8),
           (char *)0x1f < local_58[0] + (-8 - (longlong)_Memory))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
      }
      local_48 = 0;
      local_40 = 0xf;
      local_58[0] = (char *)((ulonglong)local_58[0] & 0xffffffffffffff00);
      uVar3 = (*p_Var4)(param_2,param_3);
      FUN_180008ac0((undefined8 *)local_88);
      return uVar3;
    }
    pQVar5 = (QMessageLogger *)QMessageLogger::QMessageLogger(local_78,(char *)0x0,0,(char *)0x0);
    pQVar6 = (QDebug *)QMessageLogger::warning(pQVar5);
    pQVar7 = (QString *)QLibrary::errorString((QLibrary *)*param_1);
    QDebug::operator<<(pQVar6,pQVar7);
    QString::~QString((QString *)local_58);
  }
  QDebug::~QDebug(local_88);
  return 0xffffffff;
}


// INSTRUCTIONS
1800084a0 MOV qword ptr [RSP + 0x20],RBX
1800084a5 PUSH RBP
1800084a6 PUSH RSI
1800084a7 PUSH RDI
1800084a8 PUSH R14
1800084aa PUSH R15
1800084ac MOV RBP,RSP
1800084af SUB RSP,0x80
1800084b6 MOV RAX,qword ptr [0x180010008]
1800084bd XOR RAX,RSP
1800084c0 MOV qword ptr [RBP + -0x10],RAX
1800084c4 MOV R15,R8
1800084c7 MOV R14D,EDX
1800084ca MOV RDI,RCX
1800084cd MOV ESI,0xffffffff
1800084d2 MOV RCX,qword ptr [RCX]
1800084d5 TEST RCX,RCX
1800084d8 JZ 0x180008640
1800084de CALL qword ptr [0x18000b320]
1800084e4 TEST AL,AL
1800084e6 JZ 0x180008640
1800084ec LEA RDX,[0x18000bd38]
1800084f3 MOV RCX,qword ptr [RDI]
1800084f6 CALL qword ptr [0x18000b310]
1800084fc MOV RBX,RAX
1800084ff XOR R9D,R9D
180008502 XOR R8D,R8D
180008505 XOR EDX,EDX
180008507 TEST RAX,RAX
18000850a JZ 0x1800085fe
180008510 LEA RCX,[RBP + -0x30]
180008514 CALL qword ptr [0x18000b348]
18000851a LEA RDX,[RBP + -0x58]
18000851e MOV RCX,RAX
180008521 CALL qword ptr [0x18000b350]
180008527 NOP
180008528 LEA RDX,[0x18000bd40]
18000852f MOV RCX,RAX
180008532 CALL qword ptr [0x18000b2d0]
180008538 NOP
180008539 LEA RCX,[RBP + -0x58]
18000853d CALL qword ptr [0x18000b2e0]
180008543 XOR EDI,EDI
180008545 MOV qword ptr [RBP + -0x30],RDI
180008549 MOV qword ptr [RBP + -0x20],RDI
18000854d MOV qword ptr [RBP + -0x18],0xf
180008555 MOV byte ptr [RBP + -0x30],DIL
180008559 LEA ECX,[RSI + 0x21]
18000855c CALL 0x180008c20
180008561 MOV qword ptr [RBP + -0x20],0x11
180008569 MOV qword ptr [RBP + -0x18],0x1f
180008571 MOVUPS XMM0,xmmword ptr [0x18000bc88]
180008578 MOVUPS xmmword ptr [RAX],XMM0
18000857b MOVZX ECX,byte ptr [0x18000bc98]
180008582 MOV byte ptr [RAX + 0x10],CL
180008585 MOV byte ptr [RAX + 0x11],DIL
180008589 MOV qword ptr [RBP + -0x30],RAX
18000858d LEA RDX,[RBP + -0x30]
180008591 LEA RCX,[RBP + -0x60]
180008595 CALL 0x180008a70
18000859a NOP
18000859b MOV RDX,qword ptr [RBP + -0x18]
18000859f CMP RDX,0x10
1800085a3 JC 0x1800085d9
1800085a5 INC RDX
1800085a8 MOV RCX,qword ptr [RBP + -0x30]
1800085ac MOV RAX,RCX
1800085af CMP RDX,0x1000
1800085b6 JC 0x1800085d4
1800085b8 ADD RDX,0x27
1800085bc MOV RCX,qword ptr [RCX + -0x8]
1800085c0 SUB RAX,RCX
1800085c3 ADD RAX,-0x8
1800085c7 CMP RAX,0x1f
1800085cb JBE 0x1800085d4
1800085cd CALL qword ptr [0x18000b438]
1800085d4 CALL 0x180008c5c
1800085d9 MOV qword ptr [RBP + -0x20],RDI
1800085dd MOV qword ptr [RBP + -0x18],0xf
1800085e5 MOV byte ptr [RBP + -0x30],0x0
1800085e9 MOV RDX,R15
1800085ec MOV ECX,R14D
1800085ef CALL RBX
1800085f1 MOV ESI,EAX
1800085f3 LEA RCX,[RBP + -0x60]
1800085f7 CALL 0x180008ac0
1800085fc JMP 0x18000867b
1800085fe LEA RCX,[RBP + -0x50]
180008602 CALL qword ptr [0x18000b348]
180008608 LEA RDX,[RBP + -0x60]
18000860c MOV RCX,RAX
18000860f CALL qword ptr [0x18000b358]
180008615 MOV RBX,RAX
180008618 LEA RDX,[RBP + -0x30]
18000861c MOV RCX,qword ptr [RDI]
18000861f CALL qword ptr [0x18000b2e8]
180008625 NOP
180008626 MOV RDX,RAX
180008629 MOV RCX,RBX
18000862c CALL qword ptr [0x18000b2c8]
180008632 NOP
180008633 LEA RCX,[RBP + -0x30]
180008637 CALL qword ptr [0x18000b340]
18000863d NOP
18000863e JMP 0x180008671
180008640 XOR R9D,R9D
180008643 XOR R8D,R8D
180008646 XOR EDX,EDX
180008648 LEA RCX,[RBP + -0x50]
18000864c CALL qword ptr [0x18000b348]
180008652 LEA RDX,[RBP + -0x60]
180008656 MOV RCX,RAX
180008659 CALL qword ptr [0x18000b358]
18000865f NOP
180008660 LEA RDX,[0x18000bca0]
180008667 MOV RCX,RAX
18000866a CALL qword ptr [0x18000b2d0]
180008670 NOP
180008671 LEA RCX,[RBP + -0x60]
180008675 CALL qword ptr [0x18000b2e0]
18000867b MOV EAX,ESI
18000867d MOV RCX,qword ptr [RBP + -0x10]
180008681 XOR RCX,RSP
180008684 CALL 0x180008d70
180008689 MOV RBX,qword ptr [RSP + 0xc8]
180008691 ADD RSP,0x80
180008698 POP R15
18000869a POP R14
18000869c POP RDI
18000869d POP RSI
18000869e POP RBP
18000869f RET

// FUNCTION 1800086b0 FUN_1800086b0 BOUNDS [[1800086b0, 1800087e0] [1800087e2, 1800088a9]]
// XREF 1800115ac null
// XREF 1800086a3 AVerMedia::VendorSdk::uninitialize
// CALL 180008ac0 FUN_180008ac0
// CALL EXTERNAL:00000014 operator<<
// CALL EXTERNAL:00000015 operator<<
// CALL EXTERNAL:00000025 debug
// CALL EXTERNAL:0000007b _invalid_parameter_noinfo_noreturn
// CALL 180008c20 FUN_180008c20
// CALL 180008d70 __security_check_cookie
// CALL EXTERNAL:00000017 ~QDebug
// CALL EXTERNAL:00000024 QMessageLogger
// CALL EXTERNAL:00000023 ~QString
// CALL EXTERNAL:00000026 warning
// CALL EXTERNAL:0000001d resolve
// CALL 180008a70 FUN_180008a70
// CALL EXTERNAL:0000001f isLoaded
// CALL 180008c5c free
// CALL EXTERNAL:00000018 errorString

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_1800086b0(undefined8 *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 uVar3;
  _func_void *p_Var4;
  QMessageLogger *pQVar5;
  QDebug *pQVar6;
  QString *pQVar7;
  char *_Memory;
  undefined1 auStack_88 [32];
  QDebug local_68 [8];
  QDebug local_60 [8];
  QMessageLogger local_58 [32];
  char *local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180010008 ^ (ulonglong)auStack_88;
  if (((QLibrary *)*param_1 == (QLibrary *)0x0) ||
     (bVar2 = QLibrary::isLoaded((QLibrary *)*param_1), !bVar2)) {
    pQVar5 = (QMessageLogger *)QMessageLogger::QMessageLogger(local_58,(char *)0x0,0,(char *)0x0);
    pQVar6 = (QDebug *)QMessageLogger::warning(pQVar5);
    QDebug::operator<<(pQVar6,"library not loaded");
  }
  else {
    p_Var4 = QLibrary::resolve((QLibrary *)*param_1,"uninitialize");
    if (p_Var4 != (_func_void *)0x0) {
      pQVar5 = (QMessageLogger *)
               QMessageLogger::QMessageLogger((QMessageLogger *)local_38,(char *)0x0,0,(char *)0x0);
      pQVar6 = (QDebug *)QMessageLogger::debug(pQVar5);
      QDebug::operator<<(pQVar6,"found instance uninitialize");
      QDebug::~QDebug(local_60);
      local_28 = 0;
      local_20 = 0xf;
      local_38[0] = (char *)0x0;
      local_38[0] = (char *)FUN_180008c20(0x20);
      uVar1 = s_RTK_SDK_LOCK_NAME_18000bc88._8_8_;
      local_28 = 0x11;
      local_20 = 0x1f;
      *(undefined8 *)local_38[0] = s_RTK_SDK_LOCK_NAME_18000bc88._0_8_;
      *(undefined8 *)(local_38[0] + 8) = uVar1;
      local_38[0][0x10] = s_RTK_SDK_LOCK_NAME_18000bc88[0x10];
      local_38[0][0x11] = '\0';
      FUN_180008a70((undefined8 *)local_68,local_38);
      if (0xf < local_20) {
        _Memory = local_38[0];
        if ((0xfff < local_20 + 1) &&
           (_Memory = *(char **)(local_38[0] + -8),
           (char *)0x1f < local_38[0] + (-8 - (longlong)_Memory))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
      }
      local_28 = 0;
      local_20 = 0xf;
      local_38[0] = (char *)((ulonglong)local_38[0] & 0xffffffffffffff00);
      uVar3 = (*p_Var4)();
      FUN_180008ac0((undefined8 *)local_68);
      return uVar3;
    }
    pQVar5 = (QMessageLogger *)QMessageLogger::QMessageLogger(local_58,(char *)0x0,0,(char *)0x0);
    pQVar6 = (QDebug *)QMessageLogger::warning(pQVar5);
    pQVar7 = (QString *)QLibrary::errorString((QLibrary *)*param_1);
    QDebug::operator<<(pQVar6,pQVar7);
    QString::~QString((QString *)local_38);
  }
  QDebug::~QDebug(local_68);
  return 0xffffffff;
}


// INSTRUCTIONS
1800086b0 MOV qword ptr [RSP + 0x10],RBX
1800086b5 MOV qword ptr [RSP + 0x18],RSI
1800086ba MOV qword ptr [RSP + 0x20],RDI
1800086bf PUSH RBP
1800086c0 MOV RBP,RSP
1800086c3 SUB RSP,0x80
1800086ca MOV RAX,qword ptr [0x180010008]
1800086d1 XOR RAX,RSP
1800086d4 MOV qword ptr [RBP + -0x10],RAX
1800086d8 MOV RDI,RCX
1800086db MOV ESI,0xffffffff
1800086e0 MOV RCX,qword ptr [RCX]
1800086e3 TEST RCX,RCX
1800086e6 JZ 0x180008848
1800086ec CALL qword ptr [0x18000b320]
1800086f2 TEST AL,AL
1800086f4 JZ 0x180008848
1800086fa LEA RDX,[0x18000bcb8]
180008701 MOV RCX,qword ptr [RDI]
180008704 CALL qword ptr [0x18000b310]
18000870a MOV RBX,RAX
18000870d XOR R9D,R9D
180008710 XOR R8D,R8D
180008713 XOR EDX,EDX
180008715 TEST RAX,RAX
180008718 JZ 0x180008806
18000871e LEA RCX,[RBP + -0x30]
180008722 CALL qword ptr [0x18000b348]
180008728 LEA RDX,[RBP + -0x58]
18000872c MOV RCX,RAX
18000872f CALL qword ptr [0x18000b350]
180008735 NOP
180008736 LEA RDX,[0x18000bcc8]
18000873d MOV RCX,RAX
180008740 CALL qword ptr [0x18000b2d0]
180008746 NOP
180008747 LEA RCX,[RBP + -0x58]
18000874b CALL qword ptr [0x18000b2e0]
180008751 XOR EDI,EDI
180008753 MOV qword ptr [RBP + -0x30],RDI
180008757 MOV qword ptr [RBP + -0x20],RDI
18000875b MOV qword ptr [RBP + -0x18],0xf
180008763 MOV byte ptr [RBP + -0x30],DIL
180008767 LEA ECX,[RSI + 0x21]
18000876a CALL 0x180008c20
18000876f MOV qword ptr [RBP + -0x20],0x11
180008777 MOV qword ptr [RBP + -0x18],0x1f
18000877f MOVUPS XMM0,xmmword ptr [0x18000bc88]
180008786 MOVUPS xmmword ptr [RAX],XMM0
180008789 MOVZX ECX,byte ptr [0x18000bc98]
180008790 MOV byte ptr [RAX + 0x10],CL
180008793 MOV byte ptr [RAX + 0x11],DIL
180008797 MOV qword ptr [RBP + -0x30],RAX
18000879b LEA RDX,[RBP + -0x30]
18000879f LEA RCX,[RBP + -0x60]
1800087a3 CALL 0x180008a70
1800087a8 NOP
1800087a9 MOV RDX,qword ptr [RBP + -0x18]
1800087ad CMP RDX,0x10
1800087b1 JC 0x1800087e7
1800087b3 INC RDX
1800087b6 MOV RCX,qword ptr [RBP + -0x30]
1800087ba MOV RAX,RCX
1800087bd CMP RDX,0x1000
1800087c4 JC 0x1800087e2
1800087c6 ADD RDX,0x27
1800087ca MOV RCX,qword ptr [RCX + -0x8]
1800087ce SUB RAX,RCX
1800087d1 ADD RAX,-0x8
1800087d5 CMP RAX,0x1f
1800087d9 JBE 0x1800087e2
1800087db CALL qword ptr [0x18000b438]
1800087e2 CALL 0x180008c5c
1800087e7 MOV qword ptr [RBP + -0x20],RDI
1800087eb MOV qword ptr [RBP + -0x18],0xf
1800087f3 MOV byte ptr [RBP + -0x30],0x0
1800087f7 CALL RBX
1800087f9 MOV ESI,EAX
1800087fb LEA RCX,[RBP + -0x60]
1800087ff CALL 0x180008ac0
180008804 JMP 0x180008883
180008806 LEA RCX,[RBP + -0x50]
18000880a CALL qword ptr [0x18000b348]
180008810 LEA RDX,[RBP + -0x60]
180008814 MOV RCX,RAX
180008817 CALL qword ptr [0x18000b358]
18000881d MOV RBX,RAX
180008820 LEA RDX,[RBP + -0x30]
180008824 MOV RCX,qword ptr [RDI]
180008827 CALL qword ptr [0x18000b2e8]
18000882d NOP
18000882e MOV RDX,RAX
180008831 MOV RCX,RBX
180008834 CALL qword ptr [0x18000b2c8]
18000883a NOP
18000883b LEA RCX,[RBP + -0x30]
18000883f CALL qword ptr [0x18000b340]
180008845 NOP
180008846 JMP 0x180008879
180008848 XOR R9D,R9D
18000884b XOR R8D,R8D
18000884e XOR EDX,EDX
180008850 LEA RCX,[RBP + -0x50]
180008854 CALL qword ptr [0x18000b348]
18000885a LEA RDX,[RBP + -0x60]
18000885e MOV RCX,RAX
180008861 CALL qword ptr [0x18000b358]
180008867 NOP
180008868 LEA RDX,[0x18000bca0]
18000886f MOV RCX,RAX
180008872 CALL qword ptr [0x18000b2d0]
180008878 NOP
180008879 LEA RCX,[RBP + -0x60]
18000887d CALL qword ptr [0x18000b2e0]
180008883 MOV EAX,ESI
180008885 MOV RCX,qword ptr [RBP + -0x10]
180008889 XOR RCX,RSP
18000888c CALL 0x180008d70
180008891 LEA R11,[RSP + 0x80]
180008899 MOV RBX,qword ptr [R11 + 0x18]
18000889d MOV RSI,qword ptr [R11 + 0x20]
1800088a1 MOV RDI,qword ptr [R11 + 0x28]
1800088a5 MOV RSP,R11
1800088a8 POP RBP
1800088a9 RET

// FUNCTION 180007c10 FUN_180007c10 BOUNDS [[180007c10, 180007d40] [180007d42, 180007e09]]
// XREF 180011570 null
// XREF 180007c03 AVerMedia::VendorSdk::closePort
// CALL 180008ac0 FUN_180008ac0
// CALL EXTERNAL:00000014 operator<<
// CALL EXTERNAL:00000015 operator<<
// CALL EXTERNAL:00000025 debug
// CALL EXTERNAL:0000007b _invalid_parameter_noinfo_noreturn
// CALL 180008c20 FUN_180008c20
// CALL 180008d70 __security_check_cookie
// CALL EXTERNAL:00000017 ~QDebug
// CALL EXTERNAL:00000024 QMessageLogger
// CALL EXTERNAL:00000023 ~QString
// CALL EXTERNAL:00000026 warning
// CALL EXTERNAL:0000001d resolve
// CALL 180008a70 FUN_180008a70
// CALL EXTERNAL:0000001f isLoaded
// CALL 180008c5c free
// CALL EXTERNAL:00000018 errorString

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_180007c10(undefined8 *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 uVar3;
  _func_void *p_Var4;
  QMessageLogger *pQVar5;
  QDebug *pQVar6;
  QString *pQVar7;
  char *_Memory;
  undefined1 auStack_88 [32];
  QDebug local_68 [8];
  QDebug local_60 [8];
  QMessageLogger local_58 [32];
  char *local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180010008 ^ (ulonglong)auStack_88;
  if (((QLibrary *)*param_1 == (QLibrary *)0x0) ||
     (bVar2 = QLibrary::isLoaded((QLibrary *)*param_1), !bVar2)) {
    pQVar5 = (QMessageLogger *)QMessageLogger::QMessageLogger(local_58,(char *)0x0,0,(char *)0x0);
    pQVar6 = (QDebug *)QMessageLogger::warning(pQVar5);
    QDebug::operator<<(pQVar6,"library not loaded");
  }
  else {
    p_Var4 = QLibrary::resolve((QLibrary *)*param_1,"closePort");
    if (p_Var4 != (_func_void *)0x0) {
      pQVar5 = (QMessageLogger *)
               QMessageLogger::QMessageLogger((QMessageLogger *)local_38,(char *)0x0,0,(char *)0x0);
      pQVar6 = (QDebug *)QMessageLogger::debug(pQVar5);
      QDebug::operator<<(pQVar6,"found instance closePort");
      QDebug::~QDebug(local_60);
      local_28 = 0;
      local_20 = 0xf;
      local_38[0] = (char *)0x0;
      local_38[0] = (char *)FUN_180008c20(0x20);
      uVar1 = s_RTK_SDK_LOCK_NAME_18000bc88._8_8_;
      local_28 = 0x11;
      local_20 = 0x1f;
      *(undefined8 *)local_38[0] = s_RTK_SDK_LOCK_NAME_18000bc88._0_8_;
      *(undefined8 *)(local_38[0] + 8) = uVar1;
      local_38[0][0x10] = s_RTK_SDK_LOCK_NAME_18000bc88[0x10];
      local_38[0][0x11] = '\0';
      FUN_180008a70((undefined8 *)local_68,local_38);
      if (0xf < local_20) {
        _Memory = local_38[0];
        if ((0xfff < local_20 + 1) &&
           (_Memory = *(char **)(local_38[0] + -8),
           (char *)0x1f < local_38[0] + (-8 - (longlong)_Memory))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
      }
      local_28 = 0;
      local_20 = 0xf;
      local_38[0] = (char *)((ulonglong)local_38[0] & 0xffffffffffffff00);
      uVar3 = (*p_Var4)();
      FUN_180008ac0((undefined8 *)local_68);
      return uVar3;
    }
    pQVar5 = (QMessageLogger *)QMessageLogger::QMessageLogger(local_58,(char *)0x0,0,(char *)0x0);
    pQVar6 = (QDebug *)QMessageLogger::warning(pQVar5);
    pQVar7 = (QString *)QLibrary::errorString((QLibrary *)*param_1);
    QDebug::operator<<(pQVar6,pQVar7);
    QString::~QString((QString *)local_38);
  }
  QDebug::~QDebug(local_68);
  return 0xffffffff;
}


// INSTRUCTIONS
180007c10 MOV qword ptr [RSP + 0x10],RBX
180007c15 MOV qword ptr [RSP + 0x18],RSI
180007c1a MOV qword ptr [RSP + 0x20],RDI
180007c1f PUSH RBP
180007c20 MOV RBP,RSP
180007c23 SUB RSP,0x80
180007c2a MOV RAX,qword ptr [0x180010008]
180007c31 XOR RAX,RSP
180007c34 MOV qword ptr [RBP + -0x10],RAX
180007c38 MOV RDI,RCX
180007c3b MOV ESI,0xffffffff
180007c40 MOV RCX,qword ptr [RCX]
180007c43 TEST RCX,RCX
180007c46 JZ 0x180007da8
180007c4c CALL qword ptr [0x18000b320]
180007c52 TEST AL,AL
180007c54 JZ 0x180007da8
180007c5a LEA RDX,[0x18000bd58]
180007c61 MOV RCX,qword ptr [RDI]
180007c64 CALL qword ptr [0x18000b310]
180007c6a MOV RBX,RAX
180007c6d XOR R9D,R9D
180007c70 XOR R8D,R8D
180007c73 XOR EDX,EDX
180007c75 TEST RAX,RAX
180007c78 JZ 0x180007d66
180007c7e LEA RCX,[RBP + -0x30]
180007c82 CALL qword ptr [0x18000b348]
180007c88 LEA RDX,[RBP + -0x58]
180007c8c MOV RCX,RAX
180007c8f CALL qword ptr [0x18000b350]
180007c95 NOP
180007c96 LEA RDX,[0x18000bd68]
180007c9d MOV RCX,RAX
180007ca0 CALL qword ptr [0x18000b2d0]
180007ca6 NOP
180007ca7 LEA RCX,[RBP + -0x58]
180007cab CALL qword ptr [0x18000b2e0]
180007cb1 XOR EDI,EDI
180007cb3 MOV qword ptr [RBP + -0x30],RDI
180007cb7 MOV qword ptr [RBP + -0x20],RDI
180007cbb MOV qword ptr [RBP + -0x18],0xf
180007cc3 MOV byte ptr [RBP + -0x30],DIL
180007cc7 LEA ECX,[RSI + 0x21]
180007cca CALL 0x180008c20
180007ccf MOV qword ptr [RBP + -0x20],0x11
180007cd7 MOV qword ptr [RBP + -0x18],0x1f
180007cdf MOVUPS XMM0,xmmword ptr [0x18000bc88]
180007ce6 MOVUPS xmmword ptr [RAX],XMM0
180007ce9 MOVZX ECX,byte ptr [0x18000bc98]
180007cf0 MOV byte ptr [RAX + 0x10],CL
180007cf3 MOV byte ptr [RAX + 0x11],DIL
180007cf7 MOV qword ptr [RBP + -0x30],RAX
180007cfb LEA RDX,[RBP + -0x30]
180007cff LEA RCX,[RBP + -0x60]
180007d03 CALL 0x180008a70
180007d08 NOP
180007d09 MOV RDX,qword ptr [RBP + -0x18]
180007d0d CMP RDX,0x10
180007d11 JC 0x180007d47
180007d13 INC RDX
180007d16 MOV RCX,qword ptr [RBP + -0x30]
180007d1a MOV RAX,RCX
180007d1d CMP RDX,0x1000
180007d24 JC 0x180007d42
180007d26 ADD RDX,0x27
180007d2a MOV RCX,qword ptr [RCX + -0x8]
180007d2e SUB RAX,RCX
180007d31 ADD RAX,-0x8
180007d35 CMP RAX,0x1f
180007d39 JBE 0x180007d42
180007d3b CALL qword ptr [0x18000b438]
180007d42 CALL 0x180008c5c
180007d47 MOV qword ptr [RBP + -0x20],RDI
180007d4b MOV qword ptr [RBP + -0x18],0xf
180007d53 MOV byte ptr [RBP + -0x30],0x0
180007d57 CALL RBX
180007d59 MOV ESI,EAX
180007d5b LEA RCX,[RBP + -0x60]
180007d5f CALL 0x180008ac0
180007d64 JMP 0x180007de3
180007d66 LEA RCX,[RBP + -0x50]
180007d6a CALL qword ptr [0x18000b348]
180007d70 LEA RDX,[RBP + -0x60]
180007d74 MOV RCX,RAX
180007d77 CALL qword ptr [0x18000b358]
180007d7d MOV RBX,RAX
180007d80 LEA RDX,[RBP + -0x30]
180007d84 MOV RCX,qword ptr [RDI]
180007d87 CALL qword ptr [0x18000b2e8]
180007d8d NOP
180007d8e MOV RDX,RAX
180007d91 MOV RCX,RBX
180007d94 CALL qword ptr [0x18000b2c8]
180007d9a NOP
180007d9b LEA RCX,[RBP + -0x30]
180007d9f CALL qword ptr [0x18000b340]
180007da5 NOP
180007da6 JMP 0x180007dd9
180007da8 XOR R9D,R9D
180007dab XOR R8D,R8D
180007dae XOR EDX,EDX
180007db0 LEA RCX,[RBP + -0x50]
180007db4 CALL qword ptr [0x18000b348]
180007dba LEA RDX,[RBP + -0x60]
180007dbe MOV RCX,RAX
180007dc1 CALL qword ptr [0x18000b358]
180007dc7 NOP
180007dc8 LEA RDX,[0x18000bca0]
180007dcf MOV RCX,RAX
180007dd2 CALL qword ptr [0x18000b2d0]
180007dd8 NOP
180007dd9 LEA RCX,[RBP + -0x60]
180007ddd CALL qword ptr [0x18000b2e0]
180007de3 MOV EAX,ESI
180007de5 MOV RCX,qword ptr [RBP + -0x10]
180007de9 XOR RCX,RSP
180007dec CALL 0x180008d70
180007df1 LEA R11,[RSP + 0x80]
180007df9 MOV RBX,qword ptr [R11 + 0x18]
180007dfd MOV RSI,qword ptr [R11 + 0x20]
180007e01 MOV RDI,qword ptr [R11 + 0x28]
180007e05 MOV RSP,R11
180007e08 POP RBP
180007e09 RET
