#pragma once

#include "../../definition.h"

// 数据元素类型为Elemtype
typedef int ElemType;

// 线性表的单链表储存结构
typedef struct LNode {
	ElemType data;
	struct LNode *next;
}LNode, *LinkList;


// 逆位序输入n个元素的值，建立带头结点的单链线性表
void CreateList_L(LinkList &L, int n);