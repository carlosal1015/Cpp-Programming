#if !defined(AFX_ECUA1GRADO_H__A31E6C71_2258_4379_9CBC_238CAADFDBD5__INCLUDED_)
#define AFX_ECUA1GRADO_H__A31E6C71_2258_4379_9CBC_238CAADFDBD5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ecua1grado.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cecua1grado dialog

class Cecua1grado : public CDialog
{
// Construction
public:
	Cecua1grado(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Cecua1grado)
	enum { IDD = IDD_ECUA_1_GRADO };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cecua1grado)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Cecua1grado)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ECUA1GRADO_H__A31E6C71_2258_4379_9CBC_238CAADFDBD5__INCLUDED_)
