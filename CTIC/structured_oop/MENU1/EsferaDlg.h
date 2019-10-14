#pragma once


// Cuadro de diálogo de CEsferaDlg

class CEsferaDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CEsferaDlg)

public:
	CEsferaDlg(CWnd* pParent = NULL);   // Constructor estándar
	virtual ~CEsferaDlg();

// Datos del cuadro de diálogo
	enum { IDD = IDD_ESFERA };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Compatibilidad con DDX/DDV

	DECLARE_MESSAGE_MAP()
};
