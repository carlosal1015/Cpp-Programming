// piramideDlg.cpp : implementation file
//

#include "stdafx.h"
#include "PROBLEMA2.h"
#include "piramideDlg.h"
#include "volconoDlg.h"
#include "math.h"
#define  pi 2*asin(1.0)

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CpiramideDlg dialog


CpiramideDlg::CpiramideDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CpiramideDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CpiramideDlg)
	m_n = 0;
	m_la = 0.0f;
	m_al = 0.0f;
	m_vol = 0.0;
	//}}AFX_DATA_INIT
}


void CpiramideDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CpiramideDlg)
	DDX_Text(pDX, IDE_NUMERO_LADOS, m_n);
	DDX_Text(pDX, IDE_LADO, m_la);
	DDX_Text(pDX, IDE_ALTURA, m_al);
	DDX_Text(pDX, IDE_VOLUMEN, m_vol);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CpiramideDlg, CDialog)
	//{{AFX_MSG_MAP(CpiramideDlg)
	ON_COMMAND(MNU_OPE_GEO_VOL_CONO, OnOpeGeoVolCono)
	ON_BN_CLICKED(IDB_LIMPIAR, OnLimpiar)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CpiramideDlg message handlers

void CpiramideDlg::OnOpeGeoVolCono() 
{
	// TODO: Add your command handler code here
	CvolconoDlg dlg1;
	dlg1.DoModal();
	
}

void CpiramideDlg::OnOK() 
{
	// TODO: Add extra validation here

     
	UpdateData(true);

	double te;
	double area;

	te=pi/m_n;

	area=(pow(m_la,2)*m_n)/(4*tan(te));

	m_vol=area*m_al/3;


	UpdateData(false);




	
	//CDialog::OnOK();
}

void CpiramideDlg::OnLimpiar() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);

	m_vol=0; m_al=0; m_la=0; m_n=0;

	UpdateData(false);

}
