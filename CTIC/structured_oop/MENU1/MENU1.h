
// MENU1.h: archivo de encabezado principal para la aplicaci�n PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluir 'stdafx.h' antes de incluir este archivo para PCH"
#endif

#include "resource.h"		// S�mbolos principales


// CMENU1App:
// Consulte la secci�n MENU1.cpp para obtener informaci�n sobre la implementaci�n de esta clase
//

class CMENU1App : public CWinApp
{
public:
	CMENU1App();

// Reemplazos
public:
	virtual BOOL InitInstance();

// Implementaci�n

	DECLARE_MESSAGE_MAP()
};

extern CMENU1App theApp;