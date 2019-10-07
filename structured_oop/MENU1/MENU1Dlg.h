
// MENU1Dlg.h: archivo de encabezado
//

#pragma once


// Cuadro de di�logo de CMENU1Dlg
class CMENU1Dlg : public CDialogEx
{
// Construcci�n
public:
	CMENU1Dlg(CWnd* pParent = NULL);	// Constructor est�ndar

// Datos del cuadro de di�logo
	enum { IDD = IDD_MENU1_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Compatibilidad con DDX/DDV


// Implementaci�n
protected:
	HICON m_hIcon;

	// Funciones de asignaci�n de mensajes generadas
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMatematicasSalir();
	afx_msg void OnAyudaAcercade();
	afx_msg void OnSerie1Seno();
	afx_msg void OnAreasTriangulo();
	afx_msg void OnVolumenEsfera();
};
