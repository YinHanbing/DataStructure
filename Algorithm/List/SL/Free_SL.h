#pragma once

#include "../../definition.h"

// ����Ԫ������ΪElemtype
typedef int ElemType;

// ���Ա�ľ�̬��������ṹ
#define MAXSIZE 1000	// �������󳤶�
typedef struct
{
	ElemType data;
	int cur;
}component, SLinkList[MAXSIZE];

// ���±�Ϊk�Ŀ��н����յ���������
void Free_SL(SLinkList &spce, int k);