// volcilindroDlg.cpp : implementation file
//

#include "stdafx.h"
#include "PROBLEMA2.h"
#include "volcilindroDlg.h"
#include "math.h"
#define  pi 2*asin(1.0)


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CvolcilindroDlg dialog


CvolcilindroDlg::CvolcilindroDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CvolcilindroDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CvolcilindroDlg)
	m_al = 0.0f;
	m_rb = 0.0f;
	m_vol = 0.0;
	//}}AFX_DATA_INIT
}


void CvolcilindroDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CvolcilindroDlg)
	DDX_Text(pDX, IDE_ALTURA, m_al);
	DDX_Text(pDX, IDE_RADIO_BASE, m_rb);
	DDX_Text(pDX, IDE_VOLUMEN, m_vol);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CvolcilindroDlg, CDialog)
	//{{AFX_MSG_MAP(CvolcilindroDlg)
	ON_BN_CLICKED(IDB_LIMPIAR, OnLimpiar)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CvolcilindroDlg message handlers

void CvolcilindroDlg::OnOK() 
{
	// TODO: Add extra validation here

	UpdateData(true);

	double are;

	are=pi*pow(m_rb,2);
	m_vol=are*m_al;




	UpdateData(false);




	
	//CDialog::OnOK();
}

void CvolcilindroDlg::OnLimpiar() 
{
	// TODO: Add your control notification handler code here

    UpdateData(true);

	m_vol=0; m_al=0; m_rb=0;

	UpdateData(false);

	
	
}
