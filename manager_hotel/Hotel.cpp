// Hotel.cpp : implementation file
//

#include "stdafx.h"
#include "manager_hotel.h"
//#include "Hotel.h"
#include "manager_hotelDoc.h"

//#include "manager_hotelView.h"

HWND hWnd;
// CHotel
IMPLEMENT_DYNAMIC(CHotel, CWnd)

CHotel::CHotel()
: cl_count(0)
, cl_demon(6)
, cl_queue(13)
, costNumOne(500)
, costNum2One(200)
, costNumTwo(300)
, waiters(1)
, janitors (1)			
, money(1000)
, tm_reg (1000)
{
	for (int i(0);i<12;i++)
	{
		if(i==2||i==3||i==9||i==11)//2yh mestnie
		rooms[i]=new CRoom(2);
		else	rooms[i]= new CRoom(1); //1mestnie
	}

		//rooms[0]=new CRoom(2);
}

CHotel::~CHotel()
{
	for (int i(0);i<12;i++) if(rooms[i])
		delete rooms[i];

}

CRect FindRoom(UINT num_room)
{
	CRect coord(0,0,0,0);
	switch(num_room)
	{
	case 1: coord=CRect(10,120,40,150);
		break;
	case 2: coord=CRect(170,120,200,150);
		break;
	case 3: coord=CRect(330,120,360,150);
		break;
	case 4: coord=CRect(490,120,520,150);
		break;
	case 5: coord=CRect(10,280,40,310);
		break;
	case 6: coord=CRect(170,280,200,310);
		break;
	case 7: coord=CRect(330,280,360,310);
		break;
	case 8: coord=CRect(490,280,520,310);
		break;
	case 9: coord=CRect(10,440,40,470);
		break;
	case 10: coord=CRect(170,440,200,470);
		break;
	case 11: coord=CRect(330,440,360,470);
		break;
	case 12: coord=CRect(490,440,520,470);
		break;
	}
	return coord;
}




void CHotel::RegClient(bool type_client,UINT num_room,CDC *dc,CWnd *wind)
{
	
	
	CRect coord(0,0,0,0);
	if (type_client) // демон 
	{
		coord = FindRoom(num_room);
		CBitmapButton *cb;
		cb=new CBitmapButton;
		if (Hotel.rooms[num_room]->n==2) {coord.left+=30;coord.right+=30;}
		cb->Create(_T(""),BS_OWNERDRAW|WS_VISIBLE,CRect(coord.left,coord.top,coord.right,coord.bottom),wind,0);
		
		cb->LoadBitmaps(IDB_BITMAP11);
		cb->EnableWindow(true);
		wind->UpdateWindow();
	}
	else // реальный клиент
	{
	}
}


BEGIN_MESSAGE_MAP(CHotel, CWnd)
END_MESSAGE_MAP()


