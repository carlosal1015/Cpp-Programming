
// OPERA_RADIOS.h: archivo de encabezado principal para la aplicación PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluir 'stdafx.h' antes de incluir este archivo para PCH"
#endif

#include "resource.h"		// Símbolos principales


// COPERA_RADIOSApp:
// Consulte la sección OPERA_RADIOS.cpp para obtener información sobre la implementación de esta clase
//

class COPERA_RADIOSApp : public CWinApp
{
public:
	COPERA_RADIOSApp();

// Reemplazos
public:
	virtual BOOL InitInstance();

// Implementación

	DECLARE_MESSAGE_MAP()
};

extern COPERA_RADIOSApp theApp;