// osorio.h : main header file for the OSORIO application
//

#if !defined(AFX_OSORIO_H__64AF6803_AEF8_4B72_99ED_4589865AE081__INCLUDED_)
#define AFX_OSORIO_H__64AF6803_AEF8_4B72_99ED_4589865AE081__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// COsorioApp:
// See osorio.cpp for the implementation of this class
//

class COsorioApp : public CWinApp
{
public:
	COsorioApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COsorioApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(COsorioApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_OSORIO_H__64AF6803_AEF8_4B72_99ED_4589865AE081__INCLUDED_)
