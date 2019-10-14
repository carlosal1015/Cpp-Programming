#if !defined(AFX_VOLCILINDRODLG_H__FA8A14E7_154D_4103_A0EB_2C435EB039CE__INCLUDED_)
#define AFX_VOLCILINDRODLG_H__FA8A14E7_154D_4103_A0EB_2C435EB039CE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// volcilindroDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CvolcilindroDlg dialog

class CvolcilindroDlg : public CDialog
{
// Construction
public:
	CvolcilindroDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CvolcilindroDlg)
	enum { IDD = IDD_VOL_CILINDRO };
	float	m_al;
	float	m_rb;
	double	m_vol;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CvolcilindroDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CvolcilindroDlg)
	virtual void OnOK();
	afx_msg void OnLimpiar();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VOLCILINDRODLG_H__FA8A14E7_154D_4103_A0EB_2C435EB039CE__INCLUDED_)
