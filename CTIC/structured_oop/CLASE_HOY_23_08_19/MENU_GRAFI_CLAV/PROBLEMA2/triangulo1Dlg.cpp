// triangulo1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "PROBLEMA2.h"
#include "triangulo1Dlg.h"
#include "math.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Ctriangulo1Dlg dialog


Ctriangulo1Dlg::Ctriangulo1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(Ctriangulo1Dlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(Ctriangulo1Dlg)
	m_A = 0.0;
	m_B = 0.0;
	m_C = 0.0;
	m_AREA = 0.0;
	//}}AFX_DATA_INIT
}


void Ctriangulo1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Ctriangulo1Dlg)
	DDX_Text(pDX, IDE_LADO_A, m_A);
	DDX_Text(pDX, IDE_LADO_B, m_B);
	DDX_Text(pDX, IDE_LADO_C, m_C);
	DDX_Text(pDX, IDE_AREA, m_AREA);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Ctriangulo1Dlg, CDialog)
	//{{AFX_MSG_MAP(Ctriangulo1Dlg)
	ON_BN_CLICKED(IDB_LIMPIAR, OnLimpiar)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Ctriangulo1Dlg message handlers

void Ctriangulo1Dlg::OnOK() 
{
	// TODO: Add extra validation here

   double p;

   UpdateData(true);

   if(m_A<(m_B+m_C)&&m_B<(m_A+m_C)&&m_C<(m_B+m_C)){

	   p=(m_A+m_B+m_C)/2;

	   m_AREA=sqrt(p*(p-m_A)*(p-m_B)*(p-m_C));}

	   else{

		   MessageBox("Los lados del triangulo ingresados no son validos","ERROR",MB_ICONERROR);


   }
   

   UpdateData(false);







	
	//CDialog::OnOK();
}

void Ctriangulo1Dlg::OnLimpiar() 
{
	// TODO: Add your control notification handler code here


	UpdateData(true);

	m_A=0; m_B=0; m_C=0; m_AREA=0;



	UpdateData(false);
	
}
