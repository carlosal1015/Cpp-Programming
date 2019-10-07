
// operasimple1Dlg.h: archivo de encabezado
//

#pragma once


// Cuadro de diálogo de Coperasimple1Dlg
class Coperasimple1Dlg : public CDialogEx
{
// Construcción
public:
	Coperasimple1Dlg(CWnd* pParent = NULL);	// Constructor estándar

// Datos del cuadro de diálogo
	enum { IDD = IDD_OPERASIMPLE1_DIALOG };

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
	float m_a;
	float m_b;
	float m_c;
	float m_solucion;
	afx_msg void OnBnClickedCalcular();
	double m_solucion2;
	afx_msg void OnBnClickedCalcular2();
};
