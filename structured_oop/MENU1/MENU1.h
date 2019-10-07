
// MENU1.h: archivo de encabezado principal para la aplicación PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluir 'stdafx.h' antes de incluir este archivo para PCH"
#endif

#include "resource.h"		// Símbolos principales


// CMENU1App:
// Consulte la sección MENU1.cpp para obtener información sobre la implementación de esta clase
//

class CMENU1App : public CWinApp
{
public:
	CMENU1App();

// Reemplazos
public:
	virtual BOOL InitInstance();

// Implementación

	DECLARE_MESSAGE_MAP()
};

extern CMENU1App theApp;