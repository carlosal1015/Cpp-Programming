#if !defined(AFX_FACTORIALDLG_H__25FAFCAF_76AA_4C51_93AE_140978CC35F1__INCLUDED_)
#define AFX_FACTORIALDLG_H__25FAFCAF_76AA_4C51_93AE_140978CC35F1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// factorialDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CfactorialDlg dialog

class CfactorialDlg : public CDialog
{
// Construction
public:
	CfactorialDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CfactorialDlg)
	enum { IDD = IDD_FACTORIAL };
	int		m_N;
	int		m_NFAC;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CfactorialDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CfactorialDlg)
	afx_msg void OnOperar();
	afx_msg void OnNuevo();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FACTORIALDLG_H__25FAFCAF_76AA_4C51_93AE_140978CC35F1__INCLUDED_)
