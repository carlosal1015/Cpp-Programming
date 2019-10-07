; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CmenusDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "PROBLEMA2.h"

ClassCount=17
Class1=CPROBLEMA2App
Class2=CPROBLEMA2Dlg
Class3=CAboutDlg

ResourceCount=20
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_PROBLEMA2_DIALOG
Resource4=IDD_AREA_TRIANGULO_2
Resource5=IDD_PROBLEMA2_DIALOG (Spanish (Modern))
Class4=CbienvenidoDlg
Resource6=IDD_ARE_POLIGONO
Class5=CmenusDlg
Resource7=IDD_AREA_TRIANGULO_1
Resource8=IDD_BIENVENIDO
Class6=CfactorialDlg
Resource9=IDD_VOL_CILINDRO
Class7=CinvertirDlg
Resource10=IDD_VOL_PIRAMIDE
Class8=Cfibonaccio
Resource11=IDD_VOL_CONO
Class9=CvolconoDlg
Resource12=IDD_AREA_TRIANGULO_3
Class10=CvolcilindroDlg
Resource13=IDD_FIBONACIO
Class11=CpiramideDlg
Resource14=IDD_ARE_TRIANGULO
Class12=CaretrianguloDlg
Resource15=IDD_ABOUTBOX (Spanish (Modern))
Class13=CarepoligonoDlg
Resource16=IDD_DIALOG1
Class14=Carecorona
Resource17=IDD_INVERTIR
Class15=Ctriangulo1Dlg
Resource18=IDD_ARE_CORONA_CIRCULAR
Class16=Ctriangulo2Dlg
Resource19=IDD_FACTORIAL
Class17=Ctriangulo3Dlg
Resource20=IDR_MENU1

[CLS:CPROBLEMA2App]
Type=0
HeaderFile=PROBLEMA2.h
ImplementationFile=PROBLEMA2.cpp
Filter=N

[CLS:CPROBLEMA2Dlg]
Type=0
HeaderFile=PROBLEMA2Dlg.h
ImplementationFile=PROBLEMA2Dlg.cpp
Filter=D
LastObject=CPROBLEMA2Dlg
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=PROBLEMA2Dlg.h
ImplementationFile=PROBLEMA2Dlg.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889
Class=CAboutDlg


[DLG:IDD_PROBLEMA2_DIALOG]
Type=1
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Class=CPROBLEMA2Dlg

[DLG:IDD_PROBLEMA2_DIALOG (Spanish (Modern))]
Type=1
Class=CPROBLEMA2Dlg
ControlCount=10
Control1=IDCANCEL,button,1342242816
Control2=IDS_APLICATION_CLAVE,static,1342308352
Control3=IDS_G_ACCESO,button,1342177287
Control4=IDS_USUARIO,static,1342308352
Control5=IDE_USUARIO,edit,1350631552
Control6=IDE_PASSWORD,edit,1350631584
Control7=IDI_LLAVE,static,1342177283
Control8=IDS_G_OPERACIONES,button,1342177287
Control9=IDB_ACCEDER,button,1342242816
Control10=IDI_IK1,static,1342177283

[DLG:IDD_ABOUTBOX (Spanish (Modern))]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_BIENVENIDO]
Type=1
Class=CbienvenidoDlg
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDS_USUARIO_CORRECTO,static,1342308353

[CLS:CbienvenidoDlg]
Type=0
HeaderFile=bienvenidoDlg.h
ImplementationFile=bienvenidoDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CbienvenidoDlg
VirtualFilter=dWC

[DLG:IDD_DIALOG1]
Type=1
Class=CmenusDlg
ControlCount=5
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDI_IK3,static,1342177283
Control4=IDI_IK4,static,1342177283
Control5=IDI_IK5,static,1342177283

[CLS:CmenusDlg]
Type=0
HeaderFile=menusDlg.h
ImplementationFile=menusDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=MNU_MEN_ERROR
VirtualFilter=dWC

[MNU:IDR_MENU1]
Type=1
Class=CmenusDlg
Command1=MNU_MEN_ERROR
Command2=MNU_MEN_INFORMACION
Command3=MNU_MEN_INTERROGACION
Command4=MNU_OPE_MAT_FACTORIAL
Command5=MNU_OPE_MAT_INVERSO
Command6=MNU_OPE_MAT_FIBONACCI
Command7=MNU_OPE_GEO_ARE_TRI
Command8=MNU_OPE_GEO_ARE_POLIG
Command9=MNU_OPE_GEO_ARE_CORN
Command10=MNU_OPE_GEO_VOL_CILIN
Command11=MNU_OPE_GEO_VOL_CONO
Command12=MNU_OPE_GEO_VOL_PIRA
Command13=MNU_OPE_SERIES
Command14=MNU_OPE_INTEGRALES
Command15=MNU_OPE_ECUA_3GRD
Command16=MNU_OPE_GRAFICOS
Command17=MNU_AYU_ACERCA
CommandCount=17

[DLG:IDD_FACTORIAL]
Type=1
Class=CfactorialDlg
ControlCount=9
Control1=IDCANCEL,button,1342242816
Control2=IDS_DATO,button,1342177287
Control3=IDS_N,static,1342308352
Control4=IDE_N,edit,1350631552
Control5=IDS_N_FACTORIAL,static,1342308352
Control6=IDE_FACTORIAL,edit,1350631552
Control7=IDS_OPERACIONES,button,1342177287
Control8=IDB_NUEVO,button,1342242816
Control9=IDB_OPERAR,button,1342242816

[CLS:CfactorialDlg]
Type=0
HeaderFile=factorialDlg.h
ImplementationFile=factorialDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDE_N
VirtualFilter=dWC

[DLG:IDD_INVERTIR]
Type=1
Class=CinvertirDlg
ControlCount=13
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,button,1342177287
Control4=IDS_NUMERO,static,1342308352
Control5=IDE_NUMERO,edit,1350631552
Control6=IDS_RESULTADOS,button,1342177287
Control7=IDS_SUMA_CIFRAS,static,1342308352
Control8=IDS_NUMERO_CIFRAS,static,1342308352
Control9=IDS_CIFRAS_INVERTIDAS,static,1342308352
Control10=IDE_SUMA_CIFRAS,edit,1350631552
Control11=IDE_NUMERO_CIFRAS,edit,1350631552
Control12=IDE_CIFRAS_INVERTIDAS,edit,1350631552
Control13=IDB_LIMPIAR,button,1342242816

[CLS:CinvertirDlg]
Type=0
HeaderFile=invertirDlg.h
ImplementationFile=invertirDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CinvertirDlg

[DLG:IDD_FIBONACIO]
Type=1
Class=Cfibonaccio
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

[CLS:Cfibonaccio]
Type=0
HeaderFile=fibonaccio.h
ImplementationFile=fibonaccio.cpp
BaseClass=CDialog
Filter=D
LastObject=Cfibonaccio

[DLG:IDD_VOL_CONO]
Type=1
Class=CvolconoDlg
ControlCount=10
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDS_RADIO,static,1342308352
Control4=IDE_RADIO,edit,1350631552
Control5=IDS_ALTURA,static,1342308352
Control6=IDE_ALTURA,edit,1350631552
Control7=IDS_VOLUMEN,static,1342308352
Control8=IDE_VOLUMEN,edit,1350631552
Control9=IDB_LIMPIAR,button,1342242816
Control10=IDS_INGRESE,button,1342177287

[CLS:CvolconoDlg]
Type=0
HeaderFile=volconoDlg.h
ImplementationFile=volconoDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CvolconoDlg
VirtualFilter=dWC

[DLG:IDD_VOL_CILINDRO]
Type=1
Class=CvolcilindroDlg
ControlCount=9
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDS_RADIO_BASE,static,1342308352
Control4=IDE_RADIO_BASE,edit,1350631552
Control5=IDS_ALTURA_CILINDRO,static,1342308352
Control6=IDE_VOLUMEN,edit,1350631552
Control7=IDE_ALTURA,edit,1350631552
Control8=IDS_VOLUMEN_CILINDRO,static,1342308352
Control9=IDB_LIMPIAR,button,1342242816

[CLS:CvolcilindroDlg]
Type=0
HeaderFile=volcilindroDlg.h
ImplementationFile=volcilindroDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDE_RADIO_BASE
VirtualFilter=dWC

[DLG:IDD_VOL_PIRAMIDE]
Type=1
Class=CpiramideDlg
ControlCount=11
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDE_LADO,edit,1350631552
Control5=IDS_NUMERO_LADOS,static,1342308352
Control6=IDE_NUMERO_LADOS,edit,1350631552
Control7=IDS_ALTURA,static,1342308352
Control8=IDE_ALTURA,edit,1350631552
Control9=IDS_VOLUMEN,static,1342308352
Control10=IDE_VOLUMEN,edit,1350631552
Control11=IDB_LIMPIAR,button,1342242816

[CLS:CpiramideDlg]
Type=0
HeaderFile=piramideDlg.h
ImplementationFile=piramideDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CpiramideDlg
VirtualFilter=dWC

[DLG:IDD_ARE_TRIANGULO]
Type=1
Class=CaretrianguloDlg
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDR_1,button,1342308361
Control4=IDR_2,button,1342177289
Control5=IDR_3,button,1342177289
Control6=IDS_OPCIONES,button,1342177287

[CLS:CaretrianguloDlg]
Type=0
HeaderFile=aretrianguloDlg.h
ImplementationFile=aretrianguloDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDOK
VirtualFilter=dWC

[DLG:IDD_ARE_POLIGONO]
Type=1
Class=CarepoligonoDlg
ControlCount=9
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDS_LADO,static,1342308352
Control4=IDE_LADO,edit,1350631552
Control5=IDS_NUMERO_LADOS,static,1342308352
Control6=IDE_NUMERO_LADOS,edit,1350631552
Control7=IDS_AREA,static,1342308352
Control8=IDE_AREA,edit,1350631552
Control9=IDB_LIMPIAR,button,1342242816

[CLS:CarepoligonoDlg]
Type=0
HeaderFile=arepoligonoDlg.h
ImplementationFile=arepoligonoDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDE_LADO
VirtualFilter=dWC

[DLG:IDD_ARE_CORONA_CIRCULAR]
Type=1
Class=Carecorona
ControlCount=9
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDS_RADIO_MAYOR,static,1342308352
Control4=IDE_RMAYOR,edit,1350631552
Control5=IDS_RADIO_MENOR,static,1342308352
Control6=IDE_RMENOR,edit,1350631552
Control7=IDE_AREA,edit,1350631552
Control8=IDS_AREA,static,1342308352
Control9=IDB_LIMPIAR,button,1342242816

[CLS:Carecorona]
Type=0
HeaderFile=arecorona.h
ImplementationFile=arecorona.cpp
BaseClass=CDialog
Filter=D
LastObject=Carecorona
VirtualFilter=dWC

[DLG:IDD_AREA_TRIANGULO_1]
Type=1
Class=Ctriangulo1Dlg
ControlCount=11
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDS_LADO_A,static,1342308352
Control4=IDE_LADO_A,edit,1350631552
Control5=IDE_LADO_B,edit,1350631552
Control6=IDE_LADO_C,edit,1350631552
Control7=IDS_LADO_B,static,1342308352
Control8=IDS_LADO_C,static,1342308352
Control9=IDS_AREA_TRIANGULO,static,1342308352
Control10=IDE_AREA,edit,1350631552
Control11=IDB_LIMPIAR,button,1342242816

[CLS:Ctriangulo1Dlg]
Type=0
HeaderFile=triangulo1Dlg.h
ImplementationFile=triangulo1Dlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=Ctriangulo1Dlg

[DLG:IDD_AREA_TRIANGULO_2]
Type=1
Class=Ctriangulo2Dlg
ControlCount=9
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDS_BASE,static,1342308352
Control4=IDE_BASE,edit,1350631552
Control5=IDS_ALTURA,static,1342308352
Control6=IDE_ALTURA,edit,1350631552
Control7=IDB_LIMPIAR,button,1342242816
Control8=IDS_AREA,static,1342308352
Control9=IDE_AREA,edit,1350631552

[CLS:Ctriangulo2Dlg]
Type=0
HeaderFile=triangulo2Dlg.h
ImplementationFile=triangulo2Dlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC

[DLG:IDD_AREA_TRIANGULO_3]
Type=1
Class=Ctriangulo3Dlg
ControlCount=12
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDB_LIMPIAR,button,1342242816
Control4=IDS_LADO_A,static,1342308352
Control5=IDE_LADO_A,edit,1350631552
Control6=IDS_LADO_B,static,1342308352
Control7=IDE_LADO_B,edit,1350631552
Control8=IDS_ANGULO,static,1342308353
Control9=IDE_ANGULO,edit,1350631552
Control10=IDS_AREA,static,1342308352
Control11=IDE_AREA,edit,1350631552
Control12=IDC_STATIC,button,1342177287

[CLS:Ctriangulo3Dlg]
Type=0
HeaderFile=triangulo3Dlg.h
ImplementationFile=triangulo3Dlg.cpp
BaseClass=CDialog
Filter=D
LastObject=Ctriangulo3Dlg
VirtualFilter=dWC

