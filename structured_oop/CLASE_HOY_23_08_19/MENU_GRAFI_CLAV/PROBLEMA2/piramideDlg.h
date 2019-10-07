#if !defined(AFX_PIRAMIDEDLG_H__EFC6B31D_C30C_4EBC_A4DF_83D7DEA76A1E__INCLUDED_)
#define AFX_PIRAMIDEDLG_H__EFC6B31D_C30C_4EBC_A4DF_83D7DEA76A1E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// piramideDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CpiramideDlg dialog

class CpiramideDlg : public CDialog
{
// Construction
public:
	CpiramideDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CpiramideDlg)
	enum { IDD = IDD_VOL_PIRAMIDE };
	int		m_n;
	float	m_la;
	float	m_al;
	double	m_vol;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CpiramideDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CpiramideDlg)
	afx_msg void OnOpeGeoVolCono();
	virtual void OnOK();
	afx_msg void OnLimpiar();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PIRAMIDEDLG_H__EFC6B31D_C30C_4EBC_A4DF_83D7DEA76A1E__INCLUDED_)
