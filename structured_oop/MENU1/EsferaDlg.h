#pragma once


// Cuadro de di�logo de CEsferaDlg

class CEsferaDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CEsferaDlg)

public:
	CEsferaDlg(CWnd* pParent = NULL);   // Constructor est�ndar
	virtual ~CEsferaDlg();

// Datos del cuadro de di�logo
	enum { IDD = IDD_ESFERA };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Compatibilidad con DDX/DDV

	DECLARE_MESSAGE_MAP()
};
