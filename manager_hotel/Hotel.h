#pragma once

#include "Room.h"
//#include "QueueHotel.h"
#include <queue>

class CHotel : public CWnd 
{
	DECLARE_DYNAMIC(CHotel)
	public:
	CHotel();
	virtual ~CHotel();

protected:
	DECLARE_MESSAGE_MAP()
public:
	//количество 
	unsigned int cl_count;	// клиентов (всего заселившихся)
	unsigned int cl_demon;	// клиентов-демонов
	unsigned int cl_queue;	// клиентов в очереди
	// обслуживающий персонал
	UINT waiters;			// официантов
	UINT janitors;			// уборщиков
	long money;				// текущий бюджет
	ULONGLONG tm_reg;		// время обслуживания клиента на респепшене
	//стоимость 
	float costNumOne;		// 1 одноместная кровать
	float costNum2One;		// 2 одноместных кровати
	float costNumTwo;		// двухместная кровать
	// прочие настройки
	bool pol;				// true - пол имеет значение, false - нет
	CRoom* rooms[12];		// указатели на комнаты

	void RegClient(bool type_client,UINT num_room,CDC *dc,CWnd *win);
};


