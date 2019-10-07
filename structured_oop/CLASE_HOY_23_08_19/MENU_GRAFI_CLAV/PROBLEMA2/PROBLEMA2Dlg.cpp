// PROBLEMA2Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "PROBLEMA2.h"
#include "PROBLEMA2Dlg.h"
#include "bienvenidoDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPROBLEMA2Dlg dialog

CPROBLEMA2Dlg::CPROBLEMA2Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CPROBLEMA2Dlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CPROBLEMA2Dlg)
	m_usuario = _T("");
	m_password = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CPROBLEMA2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CPROBLEMA2Dlg)
	DDX_Text(pDX, IDE_USUARIO, m_usuario);
	DDX_Text(pDX, IDE_PASSWORD, m_password);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CPROBLEMA2Dlg, CDialog)
	//{{AFX_MSG_MAP(CPROBLEMA2Dlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDB_ACCEDER, OnAcceder)
	//}}AFX_MSG_MAP
	ON_EN_CHANGE(IDE_USUARIO, &CPROBLEMA2Dlg::OnEnChangeUsuario)
	ON_EN_CHANGE(IDE_PASSWORD, &CPROBLEMA2Dlg::OnEnChangePassword)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPROBLEMA2Dlg message handlers

BOOL CPROBLEMA2Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CPROBLEMA2Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CPROBLEMA2Dlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CPROBLEMA2Dlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CPROBLEMA2Dlg::OnAcceder() 
{
	// TODO: Add your control notification handler code here
   UpdateData(true);
    CString pasw ="";
	CString usuario ="";
    if(strcmp(m_password,pasw)==0 && strcmp(m_usuario,usuario)==0)
	{
     CbienvenidoDlg dlg1;
     dlg1.DoModal();

	}

	else
    {
		if(strcmp(m_password,pasw)==0 && strcmp(m_usuario,usuario)!=0)
			MessageBox("Clave Correcta, Error de Usuario","ERROR",MB_ICONSTOP);
		if(strcmp(m_password,pasw)!=0 && strcmp(m_usuario,usuario)==0)
			MessageBox("Usuario Correcto, Error de Clave","ERROR",MB_ICONSTOP);
		if(strcmp(m_password,pasw)!=0 && strcmp(m_usuario,usuario)!=0)
			MessageBox("Clave y Usuario Ingresados Incorrectamente","ERROR",MB_ICONSTOP);
	}

    UpdateData(false);


	




	
}


void CPROBLEMA2Dlg::OnEnChangeUsuario()
{
	// TODO:  Si éste es un control RICHEDIT, el control no
	// enviará esta notificación a menos que se invalide CDialog::OnInitDialog()
	// función y llamada CRichEditCtrl().SetEventMask()
	// con el marcador ENM_CHANGE ORed en la máscara.

	// TODO:  Agregue aquí el controlador de notificación de controles
}


void CPROBLEMA2Dlg::OnEnChangePassword()
{
	// TODO:  Si éste es un control RICHEDIT, el control no
	// enviará esta notificación a menos que se invalide CDialog::OnInitDialog()
	// función y llamada CRichEditCtrl().SetEventMask()
	// con el marcador ENM_CHANGE ORed en la máscara.

	// TODO:  Agregue aquí el controlador de notificación de controles
}
