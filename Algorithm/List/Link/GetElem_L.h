#pragma once

#include "../../definition.h"


// ����Ԫ������ΪElemtype
typedef int ElemType;

// ���Ա�ĵ�������ṹ
typedef struct LNode {
	ElemType data;
	struct LNode *next;
}LNode, *LinkList;

/*
 * LΪ��ͷ�ڵ�ĵ������ͷָ��
 * ����i��Ԫ�ز�����ʱ����ֵ����e������OK�����򷵻�ERROR
 */
Status GetElem_L(LinkList L, int i, ElemType &e);