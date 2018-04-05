#pragma once

#include "../../definition.h"


// 数据元素类型为Elemtype
typedef int ElemType;

// 线性表的单链表储存结构
typedef struct LNode {
	ElemType data;
	struct LNode *next;
}LNode, *LinkList;

// 在带头结点的单链线性表L中，删除第i个元素，并由e返回其值
Status ListDelete_L(LinkList &L, int i, ElemType &e);