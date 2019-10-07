#if !defined(AFX_ARETRIANGULODLG_H__DDC75537_D65F_4D02_8F07_D02F345FE956__INCLUDED_)
#define AFX_ARETRIANGULODLG_H__DDC75537_D65F_4D02_8F07_D02F345FE956__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// aretrianguloDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CaretrianguloDlg dialog

class CaretrianguloDlg : public CDialog
{
// Construction
public:
	CaretrianguloDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CaretrianguloDlg)
	enum { IDD = IDD_ARE_TRIANGULO };
	int		m_RA;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CaretrianguloDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CaretrianguloDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ARETRIANGULODLG_H__DDC75537_D65F_4D02_8F07_D02F345FE956__INCLUDED_)
