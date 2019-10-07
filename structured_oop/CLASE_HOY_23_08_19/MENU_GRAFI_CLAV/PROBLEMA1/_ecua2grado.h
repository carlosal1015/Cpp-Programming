#if !defined(AFX__ECUA2GRADO_H__C0217FFF_7589_4FE5_95B5_B3315D77EEEB__INCLUDED_)
#define AFX__ECUA2GRADO_H__C0217FFF_7589_4FE5_95B5_B3315D77EEEB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// _ecua2grado.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// C_ecua2grado dialog

class C_ecua2grado : public CDialog
{
// Construction
public:
	C_ecua2grado(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(C_ecua2grado)
	enum { IDD = IDD_ECU_2_GRADO };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(C_ecua2grado)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(C_ecua2grado)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX__ECUA2GRADO_H__C0217FFF_7589_4FE5_95B5_B3315D77EEEB__INCLUDED_)
