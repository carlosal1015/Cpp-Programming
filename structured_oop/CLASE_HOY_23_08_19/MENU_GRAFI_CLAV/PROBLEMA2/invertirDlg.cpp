// invertirDlg.cpp : implementation file
//

#include "stdafx.h"
#include "PROBLEMA2.h"
#include "invertirDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CinvertirDlg dialog


CinvertirDlg::CinvertirDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CinvertirDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CinvertirDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CinvertirDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CinvertirDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CinvertirDlg, CDialog)
	//{{AFX_MSG_MAP(CinvertirDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CinvertirDlg message handlers
