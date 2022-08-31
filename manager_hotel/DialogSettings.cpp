// DialogSettings.cpp : implementation file
//

#include "stdafx.h"
#include "manager_hotel.h"
#include "DialogSettings.h"



// DialogSettings dialog

IMPLEMENT_DYNAMIC(DialogSettings, CDialog)

DialogSettings::DialogSettings(CWnd* pParent /*=NULL*/)
	: CDialog(DialogSettings::IDD, pParent)
	, costNumTwo(0)
	, costNumOne(0)
	, costNum2One(0)
	, cl_demon(0)
	, waiters(0)
	, janitors(0)
	, money(0)
	, tm_reg(0)
{
	
}

DialogSettings::~DialogSettings()
{
}

void DialogSettings::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, costNumTwo);
	DDX_Text(pDX, IDC_EDIT2, costNumOne);
	DDX_Text(pDX, IDC_EDIT3, costNum2One);
	DDX_Text(pDX, IDC_EDIT4, cl_demon);
	DDV_MinMaxUInt(pDX, cl_demon, 0, 19);
	DDX_Control(pDX, IDC_RADIO2, pol);
	DDX_Text(pDX, IDC_WAITERS, waiters);
	DDV_MinMaxUInt(pDX, waiters, 0, 15);
	DDX_Text(pDX, IDC_JANITORS, janitors);
	DDV_MinMaxUInt(pDX, janitors, 0, 15);
	DDX_Text(pDX, IDC_MONEY, money);
	DDX_Text(pDX, IDC_REGTM, tm_reg);
}


BEGIN_MESSAGE_MAP(DialogSettings, CDialog)
END_MESSAGE_MAP()


// DialogSettings message handlers
