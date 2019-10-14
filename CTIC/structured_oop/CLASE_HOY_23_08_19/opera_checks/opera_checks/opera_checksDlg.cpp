
// opera_checksDlg.cpp: archivo de implementación
//

#include "stdafx.h"
#include "opera_checks.h"
#include "opera_checksDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cuadro de diálogo de Copera_checksDlg




Copera_checksDlg::Copera_checksDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(Copera_checksDlg::IDD, pParent)
	, m_soltero(FALSE)
	, m_casado(FALSE)
	, m_hijos(FALSE)
	, m_nohijo(FALSE)
	, m_neto(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Copera_checksDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Check(pDX, IDC_CHECK1, m_soltero);
	DDX_Check(pDX, IDC_CHECK2, m_casado);
	DDX_Check(pDX, IDC_CHECK3, m_hijos);
	DDX_Check(pDX, IDC_CHECK4, m_nohijo);
	DDX_Text(pDX, IDC_EDIT1, m_neto);
}

BEGIN_MESSAGE_MAP(Copera_checksDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDB_CALCULAR, &Copera_checksDlg::OnBnClickedCalcular)
END_MESSAGE_MAP()


// Controladores de mensaje de Copera_checksDlg

BOOL Copera_checksDlg::OnInitDialog()
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

void Copera_checksDlg::OnPaint()
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
HCURSOR Copera_checksDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void Copera_checksDlg::OnBnClickedCalcular()
{
	UpdateData(true);
	float var1=0,var2=0,var3=0,var4=0;
	if(m_soltero&&m_hijos)
		 var1=2300+2300*0.078;
	if(m_soltero&&m_nohijo)
		 var1=2300+2300*0.027;

	if(m_casado&&m_hijos)
		 var2=2300+2300*0.095;
	if(m_casado&&m_nohijo)
		 var2=2300+2300*0.027;
	/*	
	if(m_hijos)
	 var3= 2300*0.078;
	if(m_nohijo)
	var4=2300*0.07;
	*/
	m_neto=(var1+var2);//+var3+var4);
	UpdateData(false);

	// TODO: Agregue aquí su código de controlador de notificación de control
}
