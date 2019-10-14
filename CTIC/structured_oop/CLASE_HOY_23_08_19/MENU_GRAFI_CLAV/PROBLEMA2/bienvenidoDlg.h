#if !defined(AFX_BIENVENIDODLG_H__B06C05CC_5B00_486E_BE55_596517B82CA9__INCLUDED_)
#define AFX_BIENVENIDODLG_H__B06C05CC_5B00_486E_BE55_596517B82CA9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// bienvenidoDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CbienvenidoDlg dialog

class CbienvenidoDlg : public CDialog
{
// Construction
public:
	CbienvenidoDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CbienvenidoDlg)
	enum { IDD = IDD_BIENVENIDO };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CbienvenidoDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CbienvenidoDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BIENVENIDODLG_H__B06C05CC_5B00_486E_BE55_596517B82CA9__INCLUDED_)
