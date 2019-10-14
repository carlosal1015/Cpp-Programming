// TrianguloDlg.cpp: archivo de implementación
//

#include "stdafx.h"
#include "MENU1.h"
#include "TrianguloDlg.h"
#include "afxdialogex.h"


// Cuadro de diálogo de CTrianguloDlg

IMPLEMENT_DYNAMIC(CTrianguloDlg, CDialogEx)

CTrianguloDlg::CTrianguloDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CTrianguloDlg::IDD, pParent)
{

}

CTrianguloDlg::~CTrianguloDlg()
{
}

void CTrianguloDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTrianguloDlg, CDialogEx)
END_MESSAGE_MAP()


// Controladores de mensajes de CTrianguloDlg
