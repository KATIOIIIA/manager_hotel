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
	//���������� 
	unsigned int cl_count;	// �������� (����� ������������)
	unsigned int cl_demon;	// ��������-�������
	unsigned int cl_queue;	// �������� � �������
	// ������������� ��������
	UINT waiters;			// ����������
	UINT janitors;			// ���������
	long money;				// ������� ������
	ULONGLONG tm_reg;		// ����� ������������ ������� �� ����������
	//��������� 
	float costNumOne;		// 1 ����������� �������
	float costNum2One;		// 2 ����������� �������
	float costNumTwo;		// ����������� �������
	// ������ ���������
	bool pol;				// true - ��� ����� ��������, false - ���
	CRoom* rooms[12];		// ��������� �� �������

	void RegClient(bool type_client,UINT num_room,CDC *dc,CWnd *win);
};


