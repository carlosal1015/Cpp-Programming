// osorioDlg.h : header file
//

#if !defined(AFX_OSORIODLG_H__17529DEB_C578_440B_8B5A_045CD61333A7__INCLUDED_)
#define AFX_OSORIODLG_H__17529DEB_C578_440B_8B5A_045CD61333A7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// COsorioDlg dialog

class COsorioDlg : public CDialog
{
// Construction
public:
	COsorioDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(COsorioDlg)
	enum { IDD = IDD_OSORIO_DIALOG };
	CString	m_password;
	CString	m_usuario;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COsorioDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(COsorioDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnIngresar();
	afx_msg void OnSalir();
	afx_msg void OnLimpiar();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_OSORIODLG_H__17529DEB_C578_440B_8B5A_045CD61333A7__INCLUDED_)
