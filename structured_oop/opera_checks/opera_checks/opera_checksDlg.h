
// opera_checksDlg.h: archivo de encabezado
//

#pragma once


// Cuadro de di�logo de Copera_checksDlg
class Copera_checksDlg : public CDialogEx
{
// Construcci�n
public:
	Copera_checksDlg(CWnd* pParent = NULL);	// Constructor est�ndar

// Datos del cuadro de di�logo
	enum { IDD = IDD_OPERA_CHECKS_DIALOG };

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
	BOOL m_soltero;
	BOOL m_casado;
	BOOL m_hijos;
	BOOL m_nohijo;
	afx_msg void OnBnClickedCalcular();
	float m_neto;
};
