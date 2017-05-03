#pragma once

#include "definition.h"


// 数据元素类型为Elemtype
typedef int ElemType;

// 线性表的单链表储存结构
typedef struct LNode {
	ElemType data;
	struct LNode *next;
}LNode, *LinkList;


// 逆位序输入n个元素的值，建立带头结点的单链线性表
void CreateList_L(LinkList &L, int n);


/*
 * L为带头节点的单链表的头指针
 * 当第i个元素不存在时，其值赋给e并返回OK。否则返回ERROR
 */
Status GetElem_L(LinkList L, int i, ElemType &e);


// 在带头结点的单链线性表L中，删除第i个元素，并由e返回其值
Status ListDelete_L(LinkList &L, int i, ElemType &e);


// 在带头结点的单链线性表L中第i个位置之前插入元素e
Status ListInsert_L(LinkList &L, int i, ElemType e);


/*
 * 已知顺序表La和Lb的元素按值非递减排列
 * 并归La和Lb得到新的顺序线性表Lc，Lc的元素也按非递减值排列
 */
void MergeList_Sq(LinkList La, LinkList Lb, LinkList &Lc);




