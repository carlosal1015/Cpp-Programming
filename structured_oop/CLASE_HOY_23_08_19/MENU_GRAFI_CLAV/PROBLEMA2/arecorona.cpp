// arecorona.cpp : implementation file
//

#include "stdafx.h"
#include "PROBLEMA2.h"
#include "arecorona.h"
#include "math.h"
#define pi 2*asin(1.)


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Carecorona dialog


Carecorona::Carecorona(CWnd* pParent /*=NULL*/)
	: CDialog(Carecorona::IDD, pParent)
{
	//{{AFX_DATA_INIT(Carecorona)
	m_rM = 0.0f;
	m_rm = 0.0f;
	m_area = 0.0;
	//}}AFX_DATA_INIT
}


void Carecorona::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Carecorona)
	DDX_Text(pDX, IDE_RMAYOR, m_rM);
	DDX_Text(pDX, IDE_RMENOR, m_rm);
	DDX_Text(pDX, IDE_AREA, m_area);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Carecorona, CDialog)
	//{{AFX_MSG_MAP(Carecorona)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Carecorona message handlers

void Carecorona::OnOK() 
{
	// TODO: Add extra validation here

	UpdateData(true);
    
	m_area=pi*(pow(m_rM,2)-pow(m_rm,2));

	UpdateData(false);


	//ialog::OnOK();
}

