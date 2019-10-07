// factorialDlg.cpp : implementation file
//

#include "stdafx.h"
#include "PROBLEMA2.h"
#include "factorialDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CfactorialDlg dialog


CfactorialDlg::CfactorialDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CfactorialDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CfactorialDlg)
	m_N = 0;
	m_NFAC = 0;
	//}}AFX_DATA_INIT
}


void CfactorialDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CfactorialDlg)
	DDX_Text(pDX, IDE_N, m_N);
	DDX_Text(pDX, IDE_FACTORIAL, m_NFAC);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CfactorialDlg, CDialog)
	//{{AFX_MSG_MAP(CfactorialDlg)
	ON_BN_CLICKED(IDB_OPERAR, OnOperar)
	ON_BN_CLICKED(IDB_NUEVO, OnNuevo)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CfactorialDlg message handlers

void CfactorialDlg::OnOperar() 
{
	// TODO: Add your control notification handler code here

  UpdateData(true);
  int i;
  int f=1;
  for(i=2;i<=m_N;i++)
  { f=f*i;}

  m_NFAC=f;

  UpdateData(false);

	
}

void CfactorialDlg::OnNuevo() 
{
	// TODO: Add your control notification handler code here
	
	UpdateData(true);

	m_N=0;
	m_NFAC=0;

	UpdateData(false);
}
