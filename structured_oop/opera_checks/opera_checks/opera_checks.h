
// opera_checks.h: archivo de encabezado principal para la aplicaci�n PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluir 'stdafx.h' antes de incluir este archivo para PCH"
#endif

#include "resource.h"		// S�mbolos principales


// Copera_checksApp:
// Consulte la secci�n opera_checks.cpp para obtener informaci�n sobre la implementaci�n de esta clase
//

class Copera_checksApp : public CWinApp
{
public:
	Copera_checksApp();

// Reemplazos
public:
	virtual BOOL InitInstance();

// Implementaci�n

	DECLARE_MESSAGE_MAP()
};

extern Copera_checksApp theApp;