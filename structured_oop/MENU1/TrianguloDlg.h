#pragma once


// Cuadro de di�logo de CTrianguloDlg

class CTrianguloDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CTrianguloDlg)

public:
	CTrianguloDlg(CWnd* pParent = NULL);   // Constructor est�ndar
	virtual ~CTrianguloDlg();

// Datos del cuadro de di�logo
	enum { IDD = IDD_TRIANGULO };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Compatibilidad con DDX/DDV

	DECLARE_MESSAGE_MAP()
};
