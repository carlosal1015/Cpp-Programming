// aretrianguloDlg.cpp : implementation file
//

#include "stdafx.h"
#include "PROBLEMA2.h"
#include "aretrianguloDlg.h"
#include "triangulo1Dlg.h"
#include "triangulo2Dlg.h"
#include "triangulo3Dlg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CaretrianguloDlg dialog


CaretrianguloDlg::CaretrianguloDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CaretrianguloDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CaretrianguloDlg)
	m_RA = -1;
	//}}AFX_DATA_INIT
}


void CaretrianguloDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CaretrianguloDlg)
	DDX_Radio(pDX, IDR_1, m_RA);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CaretrianguloDlg, CDialog)
	//{{AFX_MSG_MAP(CaretrianguloDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CaretrianguloDlg message handlers

void CaretrianguloDlg::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();

	UpdateData(true);

	if(m_RA==0) {  Ctriangulo1Dlg dlg1; dlg1.DoModal();}
	if(m_RA==1) {  Ctriangulo2Dlg dlg1; dlg1.DoModal();}
	if(m_RA==2) {  Ctriangulo3Dlg dlg1; dlg1.DoModal();}

	UpdateData(false);









}
