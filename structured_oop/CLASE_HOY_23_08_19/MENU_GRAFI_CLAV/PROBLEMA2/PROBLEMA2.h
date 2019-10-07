// PROBLEMA2.h : main header file for the PROBLEMA2 application
//

#if !defined(AFX_PROBLEMA2_H__F4A61223_DB82_4EE3_A321_6ED40835625D__INCLUDED_)
#define AFX_PROBLEMA2_H__F4A61223_DB82_4EE3_A321_6ED40835625D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CPROBLEMA2App:
// See PROBLEMA2.cpp for the implementation of this class
//

class CPROBLEMA2App : public CWinApp
{
public:
	CPROBLEMA2App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPROBLEMA2App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CPROBLEMA2App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROBLEMA2_H__F4A61223_DB82_4EE3_A321_6ED40835625D__INCLUDED_)
