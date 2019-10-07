#if !defined(AFX_FIBONACCIO_H__2D58E182_8E9E_4D82_8854_AA030B19BB23__INCLUDED_)
#define AFX_FIBONACCIO_H__2D58E182_8E9E_4D82_8854_AA030B19BB23__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// fibonaccio.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cfibonaccio dialog

class Cfibonaccio : public CDialog
{
// Construction
public:
	Cfibonaccio(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Cfibonaccio)
	enum { IDD = IDD_FIBONACIO };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cfibonaccio)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Cfibonaccio)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FIBONACCIO_H__2D58E182_8E9E_4D82_8854_AA030B19BB23__INCLUDED_)
