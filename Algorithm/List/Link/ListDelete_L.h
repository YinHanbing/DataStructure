#pragma once

#include "../../definition.h"


// ����Ԫ������ΪElemtype
typedef int ElemType;

// ���Ա�ĵ�������ṹ
typedef struct LNode {
	ElemType data;
	struct LNode *next;
}LNode, *LinkList;

// �ڴ�ͷ���ĵ������Ա�L�У�ɾ����i��Ԫ�أ�����e������ֵ
Status ListDelete_L(LinkList &L, int i, ElemType &e);