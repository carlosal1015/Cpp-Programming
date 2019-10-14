#if !defined(AFX_ARECORONA_H__BB6E3B5B_D809_4BEC_A34B_01E1768E5B30__INCLUDED_)
#define AFX_ARECORONA_H__BB6E3B5B_D809_4BEC_A34B_01E1768E5B30__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// arecorona.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Carecorona dialog

class Carecorona : public CDialog
{
// Construction
public:
	Carecorona(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Carecorona)
	enum { IDD = IDD_ARE_CORONA_CIRCULAR };
	float	m_rM;
	float	m_rm;
	double	m_area;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Carecorona)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Carecorona)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ARECORONA_H__BB6E3B5B_D809_4BEC_A34B_01E1768E5B30__INCLUDED_)
