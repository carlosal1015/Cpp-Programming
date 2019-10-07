// triangulo3Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "PROBLEMA2.h"
#include "triangulo3Dlg.h"
#include "math.h"
#define pi 2*asin(1.0)

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Ctriangulo3Dlg dialog


Ctriangulo3Dlg::Ctriangulo3Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(Ctriangulo3Dlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(Ctriangulo3Dlg)
	m_a = 0.0f;
	m_b = 0.0f;
	m_ag = 0.0f;
	m_s = 0.0;
	//}}AFX_DATA_INIT
}


void Ctriangulo3Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Ctriangulo3Dlg)
	DDX_Text(pDX, IDE_LADO_A, m_a);
	DDX_Text(pDX, IDE_LADO_B, m_b);
	DDX_Text(pDX, IDE_ANGULO, m_ag);
	DDX_Text(pDX, IDE_AREA, m_s);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Ctriangulo3Dlg, CDialog)
	//{{AFX_MSG_MAP(Ctriangulo3Dlg)
	ON_BN_CLICKED(IDB_LIMPIAR, OnLimpiar)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Ctriangulo3Dlg message handlers

void Ctriangulo3Dlg::OnOK() 
{
	// TODO: Add extra validation here

	double angulo;

    UpdateData(true);

	angulo=m_ag*pi/180;

	m_s=m_a*m_b*sin(angulo)/2;


	UpdateData(false);

	
	//CDialog::OnOK();
}

void Ctriangulo3Dlg::OnLimpiar() 
{
	// TODO: Add your control notification handler code here
	
	UpdateData(true);

	m_a=0; m_b=0; m_s=0; m_ag=0;


	UpdateData(false);
}
