#pragma once


// Cuadro de di�logo de CSenoDlg

class CSenoDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSenoDlg)

public:
	CSenoDlg(CWnd* pParent = NULL);   // Constructor est�ndar
	virtual ~CSenoDlg();

// Datos del cuadro de di�logo
	enum { IDD = IDD_SENO };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Compatibilidad con DDX/DDV

	DECLARE_MESSAGE_MAP()
};
