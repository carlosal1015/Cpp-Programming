// menusDlg.cpp : implementation file
//

#include "stdafx.h"
#include "PROBLEMA2.h"
#include "menusDlg.h"
#include "factorialDlg.h"
#include "invertirDlg.h"
#include "fibonaccio.h"
#include "volconoDlg.h"
#include "volcilindroDlg.h"
#include "piramideDlg.h"
#include "arecorona.h"
#include "arepoligonoDlg.h"
#include "aretrianguloDlg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CmenusDlg dialog


CmenusDlg::CmenusDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CmenusDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CmenusDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CmenusDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CmenusDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CmenusDlg, CDialog)
	//{{AFX_MSG_MAP(CmenusDlg)
	ON_COMMAND(MNU_OPE_MAT_FACTORIAL, OnOpeMatFactorial)
	ON_COMMAND(MNU_OPE_MAT_INVERSO, OnOpeMatInverso)
	ON_COMMAND(MNU_OPE_MAT_FIBONACCI, OnOpeMatFibonacci)
	ON_COMMAND(MNU_OPE_GEO_VOL_CILIN, OnOpeGeoVolCilin)
	ON_COMMAND(MNU_OPE_GEO_VOL_CONO, OnOpeGeoVolCono)
	ON_COMMAND(MNU_OPE_GEO_VOL_PIRA, OnOpeGeoVolPira)
	ON_COMMAND(MNU_OPE_GEO_ARE_CORN, OnOpeGeoAreCorn)
	ON_COMMAND(MNU_OPE_GEO_ARE_POLIG, OnOpeGeoArePolig)
	ON_COMMAND(MNU_OPE_GEO_ARE_TRI, OnOpeGeoAreTri)
	ON_COMMAND(MNU_MEN_ERROR, OnMenError)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CmenusDlg message handlers

void CmenusDlg::OnOpeMatFactorial() 

{
	// TODO: Add your command handler code here
	
    CfactorialDlg dlg1;
	dlg1.DoModal();

}

void CmenusDlg::OnOpeMatInverso() 
{
	// TODO: Add your command handler code here

   CinvertirDlg dlg1;
  dlg1.DoModal();


	
}

void CmenusDlg::OnOpeMatFibonacci() 
{
	// TODO: Add your command handler code here

	Cfibonaccio dlg1;
	dlg1.DoModal();
	
}

void CmenusDlg::OnOpeGeoVolCilin() 
{
	// TODO: Add your command handler code here
	CvolcilindroDlg dlg1;
	dlg1.DoModal();
	
}

void CmenusDlg::OnOpeGeoVolCono() 
{
	// TODO: Add your command handler code here
	CvolconoDlg dlg1;
	dlg1.DoModal();
	
}

void CmenusDlg::OnOpeGeoVolPira() 
{
	// TODO: Add your command handler code here

    CpiramideDlg dlg1;
	dlg1.DoModal();
	
}

void CmenusDlg::OnOpeGeoAreCorn() 
{
	// TODO: Add your command handler code here
	Carecorona dlg1;
	dlg1.DoModal();
	
}

void CmenusDlg::OnOpeGeoArePolig() 
{
	// TODO: Add your command handler code here
	CarepoligonoDlg dlg1;
	dlg1.DoModal();
	
}

void CmenusDlg::OnOpeGeoAreTri() 
{
	// TODO: Add your command handler code here

	CaretrianguloDlg dlg1;
	dlg1.DoModal();
	
}


void CmenusDlg::OnMenError() 
{
	// TODO: Add your command handler code here


	MessageBox("PLEASE HELP MI","THERE IS AN ERROR",MB_ICONERROR|MB_OK);
	
}
