#if !defined(AFX_POLINOMIO_H__6E8AA550_7779_4EE8_BFD4_4AEF526FE439__INCLUDED_)
#define AFX_POLINOMIO_H__6E8AA550_7779_4EE8_BFD4_4AEF526FE439__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// polinomio.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cpolinomio dialog

class Cpolinomio : public CDialog
{
// Construction
public:
	Cpolinomio(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Cpolinomio)
	enum { IDD = IDD_POL_GRADO_N };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cpolinomio)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Cpolinomio)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_POLINOMIO_H__6E8AA550_7779_4EE8_BFD4_4AEF526FE439__INCLUDED_)
