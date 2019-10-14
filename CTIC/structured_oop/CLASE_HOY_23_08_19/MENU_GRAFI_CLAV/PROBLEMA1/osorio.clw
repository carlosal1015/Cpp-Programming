; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=Ccuadro3
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "osorio.h"

ClassCount=9
Class1=COsorioApp
Class2=COsorioDlg
Class3=CAboutDlg

ResourceCount=11
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_OSORIO_DIALOG
Resource4=IDD_ECU_2_GRADO
Resource5=IDD_ABOUTBOX (Spanish (Modern))
Class4=Ccuadro1
Resource6=IDD_BOLETA
Class5=Ccuadro2
Resource7=IDD_DIALOG2
Class6=Ccuadro3
Resource8=IDD_OSORIO_DIALOG (Spanish (Modern))
Class7=C_ecua2grado
Resource9=IDD_POL_GRADO_N
Class8=Cpolinomio
Resource10=IDD_DIALOG1
Class9=Cecua1grado
Resource11=IDD_ECUA_1_GRADO

[CLS:COsorioApp]
Type=0
HeaderFile=osorio.h
ImplementationFile=osorio.cpp
Filter=N

[CLS:COsorioDlg]
Type=0
HeaderFile=osorioDlg.h
ImplementationFile=osorioDlg.cpp
Filter=D
LastObject=IDB_SALIR
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=osorioDlg.h
ImplementationFile=osorioDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889
Class=CAboutDlg


[DLG:IDD_OSORIO_DIALOG]
Type=1
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Class=COsorioDlg

[DLG:IDD_OSORIO_DIALOG (Spanish (Modern))]
Type=1
Class=COsorioDlg
ControlCount=10
Control1=IDB_INGRESAR,button,1342242816
Control2=IDE_PASSWORD,edit,1350631584
Control3=IDS_OPCIONES,button,1342177287
Control4=IDB_SALIR,button,1342242816
Control5=IDB_LIMPIAR,button,1342242816
Control6=IDS_PASSWORD,static,1342308352
Control7=IDE_USUARIO,edit,1350631552
Control8=IDS_USUARIO,static,1342308352
Control9=IDI_IK1,static,1342177283
Control10=IDI_IK2,static,1342177283

[DLG:IDD_ABOUTBOX (Spanish (Modern))]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_DIALOG1]
Type=1
Class=Ccuadro1
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDS_DESEA_SEGUIR,static,1342308353
Control4=IDS_PRESENTACION,static,1342308353
Control5=IDI_IK1,static,1342177283
Control6=IDI_IK2,static,1342177283

[CLS:Ccuadro1]
Type=0
HeaderFile=cuadro1.h
ImplementationFile=cuadro1.cpp
BaseClass=CDialog
Filter=D
LastObject=Ccuadro1
VirtualFilter=dWC

[DLG:IDD_DIALOG2]
Type=1
Class=Ccuadro2
ControlCount=8
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,button,1342177287
Control4=IDR_ECUA_2_GRADO,button,1342308361
Control5=IDR_POL_GRADO_N,button,1342177289
Control6=IDR_BOL_PAGOS,button,1342177289
Control7=IDR_ECU_3_ONCOGNITAS,button,1342177289
Control8=IDS_OPCIONES2,button,1342177287

[CLS:Ccuadro2]
Type=0
HeaderFile=cuadro2.h
ImplementationFile=cuadro2.cpp
BaseClass=CDialog
Filter=D
LastObject=IDR_ECUA_2_GRADO
VirtualFilter=dWC

[DLG:IDD_BOLETA]
Type=1
Class=Ccuadro3
ControlCount=36
Control1=IDCANCEL,button,1342242816
Control2=IDS_CODIGO,static,1342308352
Control3=IDE_CODIGO,edit,1350631552
Control4=IDS_NOMBRES,static,1342308352
Control5=IDE_NOMBRES,edit,1350631552
Control6=IDS_SUELDO,static,1342308352
Control7=IDE_SUELDO,edit,1350631552
Control8=IDS_HORAS_TRABAJADAS,static,1342308353
Control9=IDE_HORAS_TRABAJADAS,edit,1350631552
Control10=IDS_HORAS_EXTRAS,static,1342308352
Control11=IDE_HORAS_EXTRAS,edit,1350631552
Control12=IDS_N_FALTAS,static,1342308352
Control13=IDE_N_FALTAS,edit,1350631552
Control14=IDS_TARIFA_X,static,1342308352
Control15=IDE_TARIFA_X,edit,1350631552
Control16=IDS_OPERAR,button,1342177287
Control17=IDB_OTRO,button,1342242816
Control18=IDS_BONIFICACIONES,button,1342177287
Control19=IDS_RETENCIONES,button,1342177287
Control20=IDCH_T_SERVICIO,button,1342242819
Control21=IDCH_HIJOS,button,1342242819
Control22=IDCH_CARGO,button,1342242819
Control23=IDCH_SOSTENFAMILIAR,button,1342242819
Control24=IDR_AFFP,button,1342308361
Control25=IDR_SSP,button,1342177289
Control26=IDC_RADIO3,button,1342177289
Control27=IDS_SALIDA,button,1342177287
Control28=IDS_SAL_NOMBRES,static,1342308352
Control29=IDS_SUELDO_NETO,static,1342308352
Control30=IDS_DECUENTOS,static,1342308352
Control31=IDE_SAL_NOMBRES,edit,1350631552
Control32=IDE_DESCUENTOS,edit,1350631552
Control33=IDE_SUELDO_NETO,edit,1350631552
Control34=IDS_BONIFICACION,static,1342308352
Control35=IDE_BONIFICACION,edit,1350631552
Control36=IDB_ACEPTAR,button,1342242816

[CLS:Ccuadro3]
Type=0
HeaderFile=cuadro3.h
ImplementationFile=cuadro3.cpp
BaseClass=CDialog
Filter=D
LastObject=IDCH_T_SERVICIO
VirtualFilter=dWC

[DLG:IDD_ECU_2_GRADO]
Type=1
Class=C_ecua2grado
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

[CLS:C_ecua2grado]
Type=0
HeaderFile=_ecua2grado.h
ImplementationFile=_ecua2grado.cpp
BaseClass=CDialog
Filter=D
LastObject=IDCANCEL

[DLG:IDD_POL_GRADO_N]
Type=1
Class=Cpolinomio
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

[CLS:Cpolinomio]
Type=0
HeaderFile=polinomio.h
ImplementationFile=polinomio.cpp
BaseClass=CDialog
Filter=D

[DLG:IDD_ECUA_1_GRADO]
Type=1
Class=Cecua1grado
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

[CLS:Cecua1grado]
Type=0
HeaderFile=ecua1grado.h
ImplementationFile=ecua1grado.cpp
BaseClass=CDialog
Filter=D

