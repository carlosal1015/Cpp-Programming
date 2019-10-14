// volconoDlg.cpp : implementation file
//

#include "stdafx.h"
#include "PROBLEMA2.h"
#include "volconoDlg.h"
#include "math.h"
#define  pi 2*asin(1.0)

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CvolconoDlg dialog


CvolconoDlg::CvolconoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CvolconoDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CvolconoDlg)
	m_al = 0.0f;
	m_ra = 0.0f;
	m_vol = 0.0;
	//}}AFX_DATA_INIT
}


void CvolconoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CvolconoDlg)
	DDX_Text(pDX, IDE_ALTURA, m_al);
	DDX_Text(pDX, IDE_RADIO, m_ra);
	DDX_Text(pDX, IDE_VOLUMEN, m_vol);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CvolconoDlg, CDialog)
	//{{AFX_MSG_MAP(CvolconoDlg)
	ON_BN_CLICKED(IDB_LIMPIAR, OnLimpiar)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CvolconoDlg message handlers

void CvolconoDlg::OnOK() 
{
	// TODO: Add extra validation here

    UpdateData(true);

    double are;
	are=pi*pow(m_ra,2);

	m_vol=are*m_al/3;



	UpdateData(false);

	
	//CDialog::OnOK();
}

void CvolconoDlg::OnLimpiar() 
{
	// TODO: Add your control notification handler code here

	UpdateData(true);

    m_vol=0; m_al=0; m_ra=0;


	UpdateData(false);
	
}
