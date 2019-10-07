// EsferaDlg.cpp: archivo de implementación
//

#include "stdafx.h"
#include "MENU1.h"
#include "EsferaDlg.h"
#include "afxdialogex.h"


// Cuadro de diálogo de CEsferaDlg

IMPLEMENT_DYNAMIC(CEsferaDlg, CDialogEx)

CEsferaDlg::CEsferaDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CEsferaDlg::IDD, pParent)
{

}

CEsferaDlg::~CEsferaDlg()
{
}

void CEsferaDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CEsferaDlg, CDialogEx)
END_MESSAGE_MAP()


// Controladores de mensajes de CEsferaDlg
