#if !defined(AFX_MENUSDLG_H__437643FA_93CD_40AA_BD8C_E09D75BE5BED__INCLUDED_)
#define AFX_MENUSDLG_H__437643FA_93CD_40AA_BD8C_E09D75BE5BED__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// menusDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CmenusDlg dialog

class CmenusDlg : public CDialog
{
// Construction
public:
	CmenusDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CmenusDlg)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CmenusDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CmenusDlg)
	afx_msg void OnOpeMatFactorial();
	afx_msg void OnOpeMatInverso();
	afx_msg void OnOpeMatFibonacci();
	afx_msg void OnOpeGeoVolCilin();
	afx_msg void OnOpeGeoVolCono();
	afx_msg void OnOpeGeoVolPira();
	afx_msg void OnOpeGeoAreCorn();
	afx_msg void OnOpeGeoArePolig();
	afx_msg void OnOpeGeoAreTri();
	afx_msg void OnMenError();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MENUSDLG_H__437643FA_93CD_40AA_BD8C_E09D75BE5BED__INCLUDED_)
