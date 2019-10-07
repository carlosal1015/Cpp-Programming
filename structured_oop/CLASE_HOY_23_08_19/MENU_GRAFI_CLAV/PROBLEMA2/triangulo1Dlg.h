#if !defined(AFX_TRIANGULO1DLG_H__7207689B_71FE_4FC3_9409_A4E8821218CA__INCLUDED_)
#define AFX_TRIANGULO1DLG_H__7207689B_71FE_4FC3_9409_A4E8821218CA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// triangulo1Dlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Ctriangulo1Dlg dialog

class Ctriangulo1Dlg : public CDialog
{
// Construction
public:
	Ctriangulo1Dlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Ctriangulo1Dlg)
	enum { IDD = IDD_AREA_TRIANGULO_1 };
	double	m_A;
	double	m_B;
	double	m_C;
	double	m_AREA;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Ctriangulo1Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Ctriangulo1Dlg)
	virtual void OnOK();
	afx_msg void OnLimpiar();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TRIANGULO1DLG_H__7207689B_71FE_4FC3_9409_A4E8821218CA__INCLUDED_)
