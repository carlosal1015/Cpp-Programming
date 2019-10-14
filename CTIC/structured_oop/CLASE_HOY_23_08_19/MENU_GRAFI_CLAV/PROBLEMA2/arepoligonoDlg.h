#if !defined(AFX_AREPOLIGONODLG_H__457816DD_D264_46C6_8F50_57D82F61B1C5__INCLUDED_)
#define AFX_AREPOLIGONODLG_H__457816DD_D264_46C6_8F50_57D82F61B1C5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// arepoligonoDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CarepoligonoDlg dialog

class CarepoligonoDlg : public CDialog
{
// Construction
public:
	CarepoligonoDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CarepoligonoDlg)
	enum { IDD = IDD_ARE_POLIGONO };
	double	m_la;
	int		m_n;
	double	m_area;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CarepoligonoDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CarepoligonoDlg)
	virtual void OnOK();
	afx_msg void OnLimpiar();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AREPOLIGONODLG_H__457816DD_D264_46C6_8F50_57D82F61B1C5__INCLUDED_)
