#if !defined(AFX_CUADRO3_H__C9F98079_B56B_4287_B9EC_7073EDA051D0__INCLUDED_)
#define AFX_CUADRO3_H__C9F98079_B56B_4287_B9EC_7073EDA051D0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// cuadro3.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Ccuadro3 dialog

class Ccuadro3 : public CDialog
{
// Construction
public:
	Ccuadro3(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Ccuadro3)
	enum { IDD = IDD_BOLETA };
	CString	m_codigo;
	CString	m_nombres;
	int		m_ht;
	int		m_hx;
	int		m_nfaltas;
	float	m_txhn;
	CString	m_salnombre;
	BOOL	m_ts;
	BOOL	m_hi;
	BOOL	m_ca;
	BOOL	m_so;
	int		m_rt;
	double	m_boni;
	double	m_sueldo;
	double	m_sn;
	double	m_ds;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Ccuadro3)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Ccuadro3)
	afx_msg void OnAceptar();
	afx_msg void OnOtro();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CUADRO3_H__C9F98079_B56B_4287_B9EC_7073EDA051D0__INCLUDED_)
