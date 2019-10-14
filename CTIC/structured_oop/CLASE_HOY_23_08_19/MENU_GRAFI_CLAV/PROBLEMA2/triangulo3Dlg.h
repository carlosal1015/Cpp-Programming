#if !defined(AFX_TRIANGULO3DLG_H__3B03ED13_83E2_441D_88F1_4F5212462E62__INCLUDED_)
#define AFX_TRIANGULO3DLG_H__3B03ED13_83E2_441D_88F1_4F5212462E62__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// triangulo3Dlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Ctriangulo3Dlg dialog

class Ctriangulo3Dlg : public CDialog
{
// Construction
public:
	Ctriangulo3Dlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Ctriangulo3Dlg)
	enum { IDD = IDD_AREA_TRIANGULO_3 };
	float	m_a;
	float	m_b;
	float	m_ag;
	double	m_s;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Ctriangulo3Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Ctriangulo3Dlg)
	virtual void OnOK();
	afx_msg void OnLimpiar();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TRIANGULO3DLG_H__3B03ED13_83E2_441D_88F1_4F5212462E62__INCLUDED_)
