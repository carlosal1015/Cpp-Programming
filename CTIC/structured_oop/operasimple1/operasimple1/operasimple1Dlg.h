
// operasimple1Dlg.h: archivo de encabezado
//

#pragma once


// Cuadro de di�logo de Coperasimple1Dlg
class Coperasimple1Dlg : public CDialogEx
{
// Construcci�n
public:
	Coperasimple1Dlg(CWnd* pParent = NULL);	// Constructor est�ndar

// Datos del cuadro de di�logo
	enum { IDD = IDD_OPERASIMPLE1_DIALOG };

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
	float m_a;
	float m_b;
	float m_c;
	float m_solucion;
	afx_msg void OnBnClickedCalcular();
	double m_solucion2;
	afx_msg void OnBnClickedCalcular2();
};
