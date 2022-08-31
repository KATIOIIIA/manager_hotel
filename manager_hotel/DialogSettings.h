#pragma once
#include "afxwin.h"


// DialogSettings dialog

class DialogSettings : public CDialog
{
	DECLARE_DYNAMIC(DialogSettings)

public:
	DialogSettings(CWnd* pParent = NULL);   // standard constructor
	virtual ~DialogSettings();

// Dialog Data
	enum { IDD = IDD_DIALOGSETTINGS };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//virtual void Serialize(CArchive &ar);
	DECLARE_MESSAGE_MAP()
public:
	
	float costNumTwo;
	float costNumOne;
	float costNum2One;
	UINT cl_demon;
	CButton pol;
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnEnChangeEdit7();
	UINT waiters;
	UINT janitors;
	long money;
	ULONGLONG tm_reg;
};
