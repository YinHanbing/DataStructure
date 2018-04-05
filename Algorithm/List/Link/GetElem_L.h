#pragma once

#include "../../definition.h"


// 数据元素类型为Elemtype
typedef int ElemType;

// 线性表的单链表储存结构
typedef struct LNode {
	ElemType data;
	struct LNode *next;
}LNode, *LinkList;

/*
 * L为带头节点的单链表的头指针
 * 当第i个元素不存在时，其值赋给e并返回OK。否则返回ERROR
 */
Status GetElem_L(LinkList L, int i, ElemType &e);