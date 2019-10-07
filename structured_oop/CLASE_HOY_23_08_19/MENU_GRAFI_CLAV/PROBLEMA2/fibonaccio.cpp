// fibonaccio.cpp : implementation file
//

#include "stdafx.h"
#include "PROBLEMA2.h"
#include "fibonaccio.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cfibonaccio dialog


Cfibonaccio::Cfibonaccio(CWnd* pParent /*=NULL*/)
	: CDialog(Cfibonaccio::IDD, pParent)
{
	//{{AFX_DATA_INIT(Cfibonaccio)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void Cfibonaccio::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cfibonaccio)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Cfibonaccio, CDialog)
	//{{AFX_MSG_MAP(Cfibonaccio)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cfibonaccio message handlers
