
// operasimple1.h: archivo de encabezado principal para la aplicaci�n PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluir 'stdafx.h' antes de incluir este archivo para PCH"
#endif

#include "resource.h"		// S�mbolos principales


// Coperasimple1App:
// Consulte la secci�n operasimple1.cpp para obtener informaci�n sobre la implementaci�n de esta clase
//

class Coperasimple1App : public CWinApp
{
public:
	Coperasimple1App();

// Reemplazos
public:
	virtual BOOL InitInstance();

// Implementaci�n

	DECLARE_MESSAGE_MAP()
};

extern Coperasimple1App theApp;