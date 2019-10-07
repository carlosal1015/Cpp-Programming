
// opera_checksDlg.h: archivo de encabezado
//

#pragma once


// Cuadro de diálogo de Copera_checksDlg
class Copera_checksDlg : public CDialogEx
{
// Construcción
public:
	Copera_checksDlg(CWnd* pParent = NULL);	// Constructor estándar

// Datos del cuadro de diálogo
	enum { IDD = IDD_OPERA_CHECKS_DIALOG };

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
	BOOL m_soltero;
	BOOL m_casado;
	BOOL m_hijos;
	BOOL m_nohijo;
	afx_msg void OnBnClickedCalcular();
	float m_neto;
};
