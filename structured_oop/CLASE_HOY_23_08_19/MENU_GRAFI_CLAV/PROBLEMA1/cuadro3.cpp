// cuadro3.cpp : implementation file
//

#include "stdafx.h"
#include "osorio.h"
#include "cuadro3.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Ccuadro3 dialog


Ccuadro3::Ccuadro3(CWnd* pParent /*=NULL*/)
	: CDialog(Ccuadro3::IDD, pParent)
{
	//{{AFX_DATA_INIT(Ccuadro3)
	m_codigo = _T("");
	m_nombres = _T("");
	m_ht = 0;
	m_hx = 0;
	m_nfaltas = 0;
	m_txhn = 0.0f;
	m_salnombre = _T("");
	m_ts = FALSE;
	m_hi = FALSE;
	m_ca = FALSE;
	m_so = FALSE;
	m_rt = -1;
	m_boni = 0.0;
	m_sueldo = 0.0;
	m_sn = 0.0;
	m_ds = 0.0;
	//}}AFX_DATA_INIT
}


void Ccuadro3::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Ccuadro3)
	DDX_Text(pDX, IDE_CODIGO, m_codigo);
	DDX_Text(pDX, IDE_NOMBRES, m_nombres);
	DDX_Text(pDX, IDE_HORAS_TRABAJADAS, m_ht);
	DDX_Text(pDX, IDE_HORAS_EXTRAS, m_hx);
	DDX_Text(pDX, IDE_N_FALTAS, m_nfaltas);
	DDX_Text(pDX, IDE_TARIFA_X, m_txhn);
	DDX_Text(pDX, IDE_SAL_NOMBRES, m_salnombre);
	DDX_Check(pDX, IDCH_T_SERVICIO, m_ts);
	DDX_Check(pDX, IDCH_HIJOS, m_hi);
	DDX_Check(pDX, IDCH_CARGO, m_ca);
	DDX_Check(pDX, IDCH_SOSTENFAMILIAR, m_so);
	DDX_Radio(pDX, IDR_AFFP, m_rt);
	DDX_Text(pDX, IDE_BONIFICACION, m_boni);
	DDX_Text(pDX, IDE_SUELDO, m_sueldo);
	DDX_Text(pDX, IDE_SUELDO_NETO, m_sn);
	DDX_Text(pDX, IDE_DESCUENTOS, m_ds);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Ccuadro3, CDialog)
	//{{AFX_MSG_MAP(Ccuadro3)
	ON_BN_CLICKED(IDB_ACEPTAR, OnAceptar)
	ON_BN_CLICKED(IDB_OTRO, OnOtro)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Ccuadro3 message handlers

void Ccuadro3::OnAceptar() 
{
	double bonus;
	double des;
	UpdateData(true);

	m_salnombre=m_nombres;
	m_sueldo=m_txhn*40;
	m_hx=m_ht-40;

	//calculo de bonus
	bonus=0;
	if(m_ts) bonus=bonus+m_sueldo*0.05;
	if(m_hi) bonus=bonus+m_sueldo*0.02;
	if(m_ca) bonus=bonus+m_sueldo*0.025;
	if(m_so) bonus=bonus+m_sueldo*0.015;

    m_boni=bonus;

	//calculo de los descuentos
    
	des=m_nfaltas*m_sueldo/30;

	if(m_rt==0) des=des+3.75*(m_sueldo+m_boni)/100;
	if(m_rt==1) des=des+3.55*(m_sueldo+m_boni)/100;
	if(m_rt==2) des=des+3.84*(m_sueldo+m_boni)/100;


	
    m_ds=des;

    //calculo del sueldo neto

	m_sn=m_sueldo+m_boni-m_ds;

    
    


	UpdateData(false);
	
}

void Ccuadro3::OnOtro() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);

	m_nombres="";
	m_salnombre="";
	m_ds=0;
	m_boni=0;
	m_sn=0;
	m_sueldo=0;
	m_ht=0;
	m_hx=0;
	m_txhn=0;
	m_nfaltas=0;

	UpdateData(false);
}
