
// OPERA_RADIOS.h: archivo de encabezado principal para la aplicaci�n PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluir 'stdafx.h' antes de incluir este archivo para PCH"
#endif

#include "resource.h"		// S�mbolos principales


// COPERA_RADIOSApp:
// Consulte la secci�n OPERA_RADIOS.cpp para obtener informaci�n sobre la implementaci�n de esta clase
//

class COPERA_RADIOSApp : public CWinApp
{
public:
	COPERA_RADIOSApp();

// Reemplazos
public:
	virtual BOOL InitInstance();

// Implementaci�n

	DECLARE_MESSAGE_MAP()
};

extern COPERA_RADIOSApp theApp;