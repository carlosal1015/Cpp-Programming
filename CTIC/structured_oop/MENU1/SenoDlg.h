#pragma once


// Cuadro de diálogo de CSenoDlg

class CSenoDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSenoDlg)

public:
	CSenoDlg(CWnd* pParent = NULL);   // Constructor estándar
	virtual ~CSenoDlg();

// Datos del cuadro de diálogo
	enum { IDD = IDD_SENO };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Compatibilidad con DDX/DDV

	DECLARE_MESSAGE_MAP()
};
