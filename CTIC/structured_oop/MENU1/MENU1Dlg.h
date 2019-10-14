
// MENU1Dlg.h: archivo de encabezado
//

#pragma once


// Cuadro de diálogo de CMENU1Dlg
class CMENU1Dlg : public CDialogEx
{
// Construcción
public:
	CMENU1Dlg(CWnd* pParent = NULL);	// Constructor estándar

// Datos del cuadro de diálogo
	enum { IDD = IDD_MENU1_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Compatibilidad con DDX/DDV


// Implementación
protected:
	HICON m_hIcon;

	// Funciones de asignación de mensajes generadas
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
