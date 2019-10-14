#if !defined(AFX_TRIANGULO2DLG_H__AA0B3838_830E_4A56_BD12_83B8C4CE9983__INCLUDED_)
#define AFX_TRIANGULO2DLG_H__AA0B3838_830E_4A56_BD12_83B8C4CE9983__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// triangulo2Dlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Ctriangulo2Dlg dialog

class Ctriangulo2Dlg : public CDialog
{
// Construction
public:
	Ctriangulo2Dlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Ctriangulo2Dlg)
	enum { IDD = IDD_AREA_TRIANGULO_2 };
	float	m_b;
	float	m_s;
	float	m_a;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Ctriangulo2Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Ctriangulo2Dlg)
	virtual void OnOK();
	afx_msg void OnLimpiar();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TRIANGULO2DLG_H__AA0B3838_830E_4A56_BD12_83B8C4CE9983__INCLUDED_)
