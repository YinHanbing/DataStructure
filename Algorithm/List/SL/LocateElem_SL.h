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
 * �ھ�̬�������Ա�L�в��ҵ�1��ֵΪe��Ԫ��
 * ���ҵ����򷴻�����L�е�λ�򣬷��򷵻�0
 */
int LocateElem_SL(SLinkList S, ElemType e);