// bienvenidoDlg.cpp : implementation file
//

#include "stdafx.h"
#include "PROBLEMA2.h"
#include "bienvenidoDlg.h"
#include "menusDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CbienvenidoDlg dialog


CbienvenidoDlg::CbienvenidoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CbienvenidoDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CbienvenidoDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CbienvenidoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CbienvenidoDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CbienvenidoDlg, CDialog)
	//{{AFX_MSG_MAP(CbienvenidoDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CbienvenidoDlg message handlers

void CbienvenidoDlg::OnOK() 
{
	// TODO: Add extra validation here

    CmenusDlg dlg1;
	dlg1.DoModal();


	
	CDialog::OnOK();
}
