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

/*
 * ��һά����space�и���������һ����������space[0].curΪͷָ�룬
 * ��0����ʾ��ָ��
 */
void InitSpace_SL(SLinkList &space);