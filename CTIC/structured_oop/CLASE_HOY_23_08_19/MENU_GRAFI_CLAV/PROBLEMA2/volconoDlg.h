#if !defined(AFX_VOLCONODLG_H__78CC3838_6A1C_4706_95D9_714EA39C0C80__INCLUDED_)
#define AFX_VOLCONODLG_H__78CC3838_6A1C_4706_95D9_714EA39C0C80__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// volconoDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CvolconoDlg dialog

class CvolconoDlg : public CDialog
{
// Construction
public:
	CvolconoDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CvolconoDlg)
	enum { IDD = IDD_VOL_CONO };
	float	m_al;
	float	m_ra;
	double	m_vol;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CvolconoDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CvolconoDlg)
	virtual void OnOK();
	afx_msg void OnLimpiar();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VOLCONODLG_H__78CC3838_6A1C_4706_95D9_714EA39C0C80__INCLUDED_)
