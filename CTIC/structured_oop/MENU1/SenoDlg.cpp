// SenoDlg.cpp: archivo de implementaci�n
//

#include "stdafx.h"
#include "MENU1.h"
#include "SenoDlg.h"
#include "afxdialogex.h"


// Cuadro de di�logo de CSenoDlg

IMPLEMENT_DYNAMIC(CSenoDlg, CDialogEx)

CSenoDlg::CSenoDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CSenoDlg::IDD, pParent)
{

}

CSenoDlg::~CSenoDlg()
{
}

void CSenoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSenoDlg, CDialogEx)
END_MESSAGE_MAP()


// Controladores de mensajes de CSenoDlg
