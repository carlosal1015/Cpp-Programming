#if !defined(AFX_CUADRO2_H__5934A667_B19D_4978_89FA_7D736B6255C8__INCLUDED_)
#define AFX_CUADRO2_H__5934A667_B19D_4978_89FA_7D736B6255C8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// cuadro2.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Ccuadro2 dialog

class Ccuadro2 : public CDialog
{
// Construction
public:
	Ccuadro2(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Ccuadro2)
	enum { IDD = IDD_DIALOG2 };
	int		m_ecua;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Ccuadro2)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Ccuadro2)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CUADRO2_H__5934A667_B19D_4978_89FA_7D736B6255C8__INCLUDED_)
