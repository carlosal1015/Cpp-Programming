
// OPERA_RADIOSDlg.h: archivo de encabezado
//

#pragma once


// Cuadro de di�logo de COPERA_RADIOSDlg
class COPERA_RADIOSDlg : public CDialogEx
{
// Construcci�n
public:
	COPERA_RADIOSDlg(CWnd* pParent = NULL);	// Constructor est�ndar

// Datos del cuadro de di�logo
	enum { IDD = IDD_OPERA_RADIOS_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Compatibilidad con DDX/DDV


// Implementaci�n
protected:
	HICON m_hIcon;

	// Funciones de asignaci�n de mensajes generadas
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
