#if !defined(AFX_CUADRO1_H__87EC7E8A_F569_4FA4_AF02_50384C6CA739__INCLUDED_)
#define AFX_CUADRO1_H__87EC7E8A_F569_4FA4_AF02_50384C6CA739__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// cuadro1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Ccuadro1 dialog

class Ccuadro1 : public CDialog
{
// Construction
public:
	Ccuadro1(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Ccuadro1)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Ccuadro1)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Ccuadro1)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CUADRO1_H__87EC7E8A_F569_4FA4_AF02_50384C6CA739__INCLUDED_)
