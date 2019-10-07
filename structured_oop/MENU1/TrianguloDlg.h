#pragma once


// Cuadro de diálogo de CTrianguloDlg

class CTrianguloDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CTrianguloDlg)

public:
	CTrianguloDlg(CWnd* pParent = NULL);   // Constructor estándar
	virtual ~CTrianguloDlg();

// Datos del cuadro de diálogo
	enum { IDD = IDD_TRIANGULO };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Compatibilidad con DDX/DDV

	DECLARE_MESSAGE_MAP()
};
