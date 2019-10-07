
// operasimple1.h: archivo de encabezado principal para la aplicación PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluir 'stdafx.h' antes de incluir este archivo para PCH"
#endif

#include "resource.h"		// Símbolos principales


// Coperasimple1App:
// Consulte la sección operasimple1.cpp para obtener información sobre la implementación de esta clase
//

class Coperasimple1App : public CWinApp
{
public:
	Coperasimple1App();

// Reemplazos
public:
	virtual BOOL InitInstance();

// Implementación

	DECLARE_MESSAGE_MAP()
};

extern Coperasimple1App theApp;