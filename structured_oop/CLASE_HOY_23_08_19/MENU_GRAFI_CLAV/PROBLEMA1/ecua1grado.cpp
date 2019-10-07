// ecua1grado.cpp : implementation file
//

#include "stdafx.h"
#include "osorio.h"
#include "ecua1grado.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cecua1grado dialog


Cecua1grado::Cecua1grado(CWnd* pParent /*=NULL*/)
	: CDialog(Cecua1grado::IDD, pParent)
{
	//{{AFX_DATA_INIT(Cecua1grado)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void Cecua1grado::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cecua1grado)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Cecua1grado, CDialog)
	//{{AFX_MSG_MAP(Cecua1grado)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cecua1grado message handlers
