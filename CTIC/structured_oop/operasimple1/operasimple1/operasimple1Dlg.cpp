
// operasimple1Dlg.cpp: archivo de implementación
//

#include "stdafx.h"
#include "operasimple1.h"
#include "operasimple1Dlg.h"
#include "afxdialogex.h"
#include<math.h>
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cuadro de diálogo de Coperasimple1Dlg




Coperasimple1Dlg::Coperasimple1Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(Coperasimple1Dlg::IDD, pParent)
	, m_a(0)
	, m_b(0)
	, m_c(0)
	, m_solucion(0)
	, m_solucion2(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Coperasimple1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDE_A, m_a);
	DDX_Text(pDX, IDE_B, m_b);
	DDX_Text(pDX, IDE_C, m_c);
	DDX_Text(pDX, IDE_SALIDA, m_solucion);
	DDX_Text(pDX, IDE_SALIDA2, m_solucion2);
}

BEGIN_MESSAGE_MAP(Coperasimple1Dlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDB_CALCULAR, &Coperasimple1Dlg::OnBnClickedCalcular)
	ON_BN_CLICKED(IDB_CALCULAR2, &Coperasimple1Dlg::OnBnClickedCalcular2)
END_MESSAGE_MAP()


// Controladores de mensaje de Coperasimple1Dlg

BOOL Coperasimple1Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Establecer el icono para este cuadro de diálogo. El marco de trabajo realiza esta operación
	//  automáticamente cuando la ventana principal de la aplicación no es un cuadro de diálogo
	SetIcon(m_hIcon, TRUE);			// Establecer icono grande
	SetIcon(m_hIcon, FALSE);		// Establecer icono pequeño

	// TODO: agregar aquí inicialización adicional

	return TRUE;  // Devuelve TRUE  a menos que establezca el foco en un control
}

// Si agrega un botón Minimizar al cuadro de diálogo, necesitará el siguiente código
//  para dibujar el icono. Para aplicaciones MFC que utilicen el modelo de documentos y vistas,
//  esta operación la realiza automáticamente el marco de trabajo.

void Coperasimple1Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // Contexto de dispositivo para dibujo

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Centrar icono en el rectángulo de cliente
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Dibujar el icono
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// El sistema llama a esta función para obtener el cursor que se muestra mientras el usuario arrastra
//  la ventana minimizada.
HCURSOR Coperasimple1Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void Coperasimple1Dlg::OnBnClickedCalcular()
{
	UpdateData(true);
	if(m_a+m_c>0 && m_b>0)
	m_solucion=(m_a+m_b)/(sqrt(m_a+m_c))-sqrt(m_a+m_b)/(sqrt(m_b));
	else
		MessageBox(_T("ERROR"),_T("SIN SOLUCION"));
	UpdateData(false);
	// TODO: Agregue aquí su código de controlador de notificación de control
}


void Coperasimple1Dlg::OnBnClickedCalcular2()
{
	if(m_a+m_c>0 && m_b-m_c>0)
		m_solucion2=(m_a+m_b)/(sqrt(m_a+m_c))-sqrt(m_a+m_b)/(sqrt(m_b-m_c));
	else
		MessageBox(_T("ERROR"),_T("SIN SOLUCION"));
	// TODO: Agregue aquí su código de controlador de notificación de control
}
