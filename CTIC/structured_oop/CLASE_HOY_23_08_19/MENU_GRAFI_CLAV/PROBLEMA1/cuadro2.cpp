// cuadro2.cpp : implementation file
//

#include "stdafx.h"
#include "osorio.h"
#include "cuadro2.h"
#include "cuadro3.h"
#include "_ecua2grado.h"
#include "polinomio.h"
#include "ecua1grado.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Ccuadro2 dialog


Ccuadro2::Ccuadro2(CWnd* pParent /*=NULL*/)
	: CDialog(Ccuadro2::IDD, pParent)
{
	//{{AFX_DATA_INIT(Ccuadro2)
	m_ecua = -1;
	//}}AFX_DATA_INIT
}


void Ccuadro2::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Ccuadro2)
	DDX_Radio(pDX, IDR_ECUA_2_GRADO, m_ecua);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Ccuadro2, CDialog)
	//{{AFX_MSG_MAP(Ccuadro2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Ccuadro2 message handlers

void Ccuadro2::OnOK() 
{		
	// TODO: Add extra validation here

UpdateData(true);

     if(m_ecua==3){
           C_ecua2grado dlg3;
           dlg3.DoModal();}
   	 else{
		       if(m_ecua==1){   Cpolinomio dlg1;
                                 dlg1.DoModal();}

		       else{   
			            	if(m_ecua==2) { Ccuadro3 dlg3;
			                             	dlg3.DoModal();}

			               	else{
                                            Cecua1grado dlg1;
                                            dlg1.DoModal();}}}


/*	C_ecua2grado dlg3;
    dlg3.DoModal();*/
/*
	Cpolinomio dlg3;
    dlg3.DoModal();
	*/
/*
	switch(m_ecua){ 
	case 0:         { C_ecua2grado dlg3;
                     dlg3.DoModal();
					 break;}

	case 1:         { Cpolinomio dlg1;
                     dlg1.DoModal();	
					 break;}

	case 2:         { Ccuadro3 dlg3;
                     dlg3.DoModal();
					 break;}

	
	default:  break;
	
	*/
	

   UpdateData(false);

	}
	
	//CDialog::OnOK();
