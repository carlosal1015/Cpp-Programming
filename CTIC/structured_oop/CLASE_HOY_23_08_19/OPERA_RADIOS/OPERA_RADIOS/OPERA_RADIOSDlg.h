
// OPERA_RADIOSDlg.h: archivo de encabezado
//

#pragma once


// Cuadro de diálogo de COPERA_RADIOSDlg
class COPERA_RADIOSDlg : public CDialogEx
{
// Construcción
public:
	COPERA_RADIOSDlg(CWnd* pParent = NULL);	// Constructor estándar

// Datos del cuadro de diálogo
	enum { IDD = IDD_OPERA_RADIOS_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Compatibilidad con DDX/DDV


// Implementación
protected:
	HICON m_hIcon;

	// Funciones de asignación de mensajes generadas
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
//	int m_categoria;
	float m_neto;
	afx_msg void OnBnClickedCalcular();
	int m_catego;
};
