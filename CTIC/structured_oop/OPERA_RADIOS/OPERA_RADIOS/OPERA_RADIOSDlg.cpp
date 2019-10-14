
// OPERA_RADIOSDlg.cpp: archivo de implementación
//

#include "stdafx.h"
#include "OPERA_RADIOS.h"
#include "OPERA_RADIOSDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cuadro de diálogo de COPERA_RADIOSDlg




COPERA_RADIOSDlg::COPERA_RADIOSDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(COPERA_RADIOSDlg::IDD, pParent)
	, m_catego(0)
	
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_neto = 0.0f;
}

void COPERA_RADIOSDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDE_NETO, m_neto);
	DDX_Radio(pDX, IDC_RADIO1, m_catego);
}

BEGIN_MESSAGE_MAP(COPERA_RADIOSDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDB_CALCULAR, &COPERA_RADIOSDlg::OnBnClickedCalcular)
END_MESSAGE_MAP()


// Controladores de mensaje de COPERA_RADIOSDlg

BOOL COPERA_RADIOSDlg::OnInitDialog()
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

void COPERA_RADIOSDlg::OnPaint()
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
HCURSOR COPERA_RADIOSDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void COPERA_RADIOSDlg::OnBnClickedCalcular()
{
	UpdateData(true);
	if(m_catego==0)
		m_neto=2500+2500*0.075;
	if(m_catego==1)
		m_neto=1700+1700*0.057;
	if(m_catego==2)
		m_neto=1200+1200*0.038;
	UpdateData(false);

	// TODO: Agregue aquí su código de controlador de notificación de control
}
