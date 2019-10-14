// PROBLEMA2Dlg.h : header file
//

#if !defined(AFX_PROBLEMA2DLG_H__CFCF4588_E619_415F_B29B_7DE5228B92FA__INCLUDED_)
#define AFX_PROBLEMA2DLG_H__CFCF4588_E619_415F_B29B_7DE5228B92FA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CPROBLEMA2Dlg dialog

class CPROBLEMA2Dlg : public CDialog
{
// Construction
public:
	CPROBLEMA2Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CPROBLEMA2Dlg)
	enum { IDD = IDD_PROBLEMA2_DIALOG };
	CString	m_usuario;
	CString	m_password;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPROBLEMA2Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CPROBLEMA2Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnAcceder();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeUsuario();
	afx_msg void OnEnChangePassword();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROBLEMA2DLG_H__CFCF4588_E619_415F_B29B_7DE5228B92FA__INCLUDED_)
