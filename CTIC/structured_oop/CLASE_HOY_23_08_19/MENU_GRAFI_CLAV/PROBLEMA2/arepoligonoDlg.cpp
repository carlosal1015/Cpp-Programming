// arepoligonoDlg.cpp : implementation file
//

#include "stdafx.h"
#include "PROBLEMA2.h"
#include "arepoligonoDlg.h"
#include "math.h"
#define pi 2*asin(1.0)

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CarepoligonoDlg dialog


CarepoligonoDlg::CarepoligonoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CarepoligonoDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CarepoligonoDlg)
	m_la = 0.0;
	m_n = 0;
	m_area = 0.0;
	//}}AFX_DATA_INIT
}


void CarepoligonoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CarepoligonoDlg)
	DDX_Text(pDX, IDE_LADO, m_la);
	DDX_Text(pDX, IDE_NUMERO_LADOS, m_n);
	DDX_Text(pDX, IDE_AREA, m_area);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CarepoligonoDlg, CDialog)
	//{{AFX_MSG_MAP(CarepoligonoDlg)
	ON_BN_CLICKED(IDB_LIMPIAR, OnLimpiar)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CarepoligonoDlg message handlers

void CarepoligonoDlg::OnOK() 
{
	// TODO: Add extra validation here


	UpdateData(true);

	double te;

	te=pi/m_n;

	m_area=(pow(m_la,2)*m_n)/(4*tan(te));


	UpdateData(false);

	
	//CDialog::OnOK();

}

void CarepoligonoDlg::OnLimpiar() 
{
	// TODO: Add your control notification handler code here
	 UpdateData(true);

     m_area=0; m_la=0; m_n=0;

	 UpdateData(false);

}
