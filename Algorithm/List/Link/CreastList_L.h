#pragma once

#include "../../definition.h"

// ����Ԫ������ΪElemtype
typedef int ElemType;

// ���Ա�ĵ�������ṹ
typedef struct LNode {
	ElemType data;
	struct LNode *next;
}LNode, *LinkList;


// ��λ������n��Ԫ�ص�ֵ��������ͷ���ĵ������Ա�
void CreateList_L(LinkList &L, int n);