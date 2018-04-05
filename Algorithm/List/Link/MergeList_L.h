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
 * 已知顺序表La和Lb的元素按值非递减排列
 * 并归La和Lb得到新的顺序线性表Lc，Lc的元素也按非递减值排列
 */
void MergeList_Sq(LinkList La, LinkList Lb, LinkList &Lc);