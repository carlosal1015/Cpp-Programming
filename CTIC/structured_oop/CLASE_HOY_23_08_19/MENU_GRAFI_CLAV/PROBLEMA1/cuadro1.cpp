// cuadro1.cpp : implementation file
//

#include "stdafx.h"
#include "osorio.h"
#include "cuadro1.h"
#include "cuadro2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Ccuadro1 dialog


Ccuadro1::Ccuadro1(CWnd* pParent /*=NULL*/)
	: CDialog(Ccuadro1::IDD, pParent)
{
	//{{AFX_DATA_INIT(Ccuadro1)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void Ccuadro1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Ccuadro1)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Ccuadro1, CDialog)
	//{{AFX_MSG_MAP(Ccuadro1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Ccuadro1 message handlers

void Ccuadro1::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData(true);

   Ccuadro2 dlg2;
   dlg2.DoModal();

   UpdateData(false);

	
   CDialog::OnOK();
}
