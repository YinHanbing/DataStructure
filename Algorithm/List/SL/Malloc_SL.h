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

//  �����ÿռ�����ǿգ��򷵻ط���Ľڵ��±꣬���򷵻�0
int Malloc_SL(SLinkList &space);
