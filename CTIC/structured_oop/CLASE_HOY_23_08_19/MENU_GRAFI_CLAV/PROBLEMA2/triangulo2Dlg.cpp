// triangulo2Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "PROBLEMA2.h"
#include "triangulo2Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Ctriangulo2Dlg dialog


Ctriangulo2Dlg::Ctriangulo2Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(Ctriangulo2Dlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(Ctriangulo2Dlg)
	m_b = 0.0f;
	m_s = 0.0f;
	m_a = 0.0f;
	//}}AFX_DATA_INIT
}


void Ctriangulo2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Ctriangulo2Dlg)
	DDX_Text(pDX, IDE_BASE, m_b);
	DDX_Text(pDX, IDE_AREA, m_s);
	DDX_Text(pDX, IDE_ALTURA, m_a);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Ctriangulo2Dlg, CDialog)
	//{{AFX_MSG_MAP(Ctriangulo2Dlg)
	ON_BN_CLICKED(IDB_LIMPIAR, OnLimpiar)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Ctriangulo2Dlg message handlers

void Ctriangulo2Dlg::OnOK() 
{
	// TODO: Add extra validation here


    UpdateData(true);

	m_s=m_b*m_a/2;



	UpdateData(false);


	
	//CDialog::OnOK();
}

void Ctriangulo2Dlg::OnLimpiar() 
{
	// TODO: Add your control notification handler code here

    UpdateData(true);

	m_s=0; m_a=0; m_b=0;

	UpdateData(false);


	
}
