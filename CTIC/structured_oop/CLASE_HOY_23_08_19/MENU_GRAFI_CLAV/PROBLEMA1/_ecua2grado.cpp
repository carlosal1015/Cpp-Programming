// _ecua2grado.cpp : implementation file
//

#include "stdafx.h"
#include "osorio.h"
#include "_ecua2grado.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// C_ecua2grado dialog


C_ecua2grado::C_ecua2grado(CWnd* pParent /*=NULL*/)
	: CDialog(C_ecua2grado::IDD, pParent)
{
	//{{AFX_DATA_INIT(C_ecua2grado)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void C_ecua2grado::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(C_ecua2grado)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(C_ecua2grado, CDialog)
	//{{AFX_MSG_MAP(C_ecua2grado)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// C_ecua2grado message handlers
