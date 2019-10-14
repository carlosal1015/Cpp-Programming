
// opera_checks.h: archivo de encabezado principal para la aplicación PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluir 'stdafx.h' antes de incluir este archivo para PCH"
#endif

#include "resource.h"		// Símbolos principales


// Copera_checksApp:
// Consulte la sección opera_checks.cpp para obtener información sobre la implementación de esta clase
//

class Copera_checksApp : public CWinApp
{
public:
	Copera_checksApp();

// Reemplazos
public:
	virtual BOOL InitInstance();

// Implementación

	DECLARE_MESSAGE_MAP()
};

extern Copera_checksApp theApp;