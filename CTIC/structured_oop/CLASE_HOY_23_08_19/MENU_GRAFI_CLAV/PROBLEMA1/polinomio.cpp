// polinomio.cpp : implementation file
//

#include "stdafx.h"
#include "osorio.h"
#include "polinomio.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cpolinomio dialog


Cpolinomio::Cpolinomio(CWnd* pParent /*=NULL*/)
	: CDialog(Cpolinomio::IDD, pParent)
{
	//{{AFX_DATA_INIT(Cpolinomio)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void Cpolinomio::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cpolinomio)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Cpolinomio, CDialog)
	//{{AFX_MSG_MAP(Cpolinomio)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cpolinomio message handlers
