# Microsoft Developer Studio Project File - Name="PROBLEMA2" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=PROBLEMA2 - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "PROBLEMA2.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "PROBLEMA2.mak" CFG="PROBLEMA2 - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "PROBLEMA2 - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "PROBLEMA2 - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "PROBLEMA2 - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x280a /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x280a /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "PROBLEMA2 - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x280a /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x280a /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "PROBLEMA2 - Win32 Release"
# Name "PROBLEMA2 - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\arecorona.cpp
# End Source File
# Begin Source File

SOURCE=.\arepoligonoDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\aretrianguloDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\bienvenidoDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\factorialDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\fibonaccio.cpp
# End Source File
# Begin Source File

SOURCE=.\invertirDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\menusDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\piramideDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\PROBLEMA2.cpp
# End Source File
# Begin Source File

SOURCE=.\PROBLEMA2.rc
# End Source File
# Begin Source File

SOURCE=.\PROBLEMA2Dlg.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\triangulo1Dlg.cpp
# End Source File
# Begin Source File

SOURCE=.\triangulo2Dlg.cpp
# End Source File
# Begin Source File

SOURCE=.\triangulo3Dlg.cpp
# End Source File
# Begin Source File

SOURCE=.\volcilindroDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\volconoDlg.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\arecorona.h
# End Source File
# Begin Source File

SOURCE=.\arepoligonoDlg.h
# End Source File
# Begin Source File

SOURCE=.\aretrianguloDlg.h
# End Source File
# Begin Source File

SOURCE=.\bienvenidoDlg.h
# End Source File
# Begin Source File

SOURCE=.\factorialDlg.h
# End Source File
# Begin Source File

SOURCE=.\fibonaccio.h
# End Source File
# Begin Source File

SOURCE=.\invertirDlg.h
# End Source File
# Begin Source File

SOURCE=.\menusDlg.h
# End Source File
# Begin Source File

SOURCE=.\piramideDlg.h
# End Source File
# Begin Source File

SOURCE=.\PROBLEMA2.h
# End Source File
# Begin Source File

SOURCE=.\PROBLEMA2Dlg.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\triangulo1Dlg.h
# End Source File
# Begin Source File

SOURCE=.\triangulo2Dlg.h
# End Source File
# Begin Source File

SOURCE=.\triangulo3Dlg.h
# End Source File
# Begin Source File

SOURCE=.\volcilindroDlg.h
# End Source File
# Begin Source File

SOURCE=.\volconoDlg.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\EYE.ICO
# End Source File
# Begin Source File

SOURCE=.\res\HANDSHAK.ICO
# End Source File
# Begin Source File

SOURCE=.\res\NET05.ICO
# End Source File
# Begin Source File

SOURCE=.\res\NET08.ICO
# End Source File
# Begin Source File

SOURCE=.\res\PROBLEMA2.ico
# End Source File
# Begin Source File

SOURCE=.\res\PROBLEMA2.rc2
# End Source File
# Begin Source File

SOURCE=.\res\SECUR02B.ICO
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
