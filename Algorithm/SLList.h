#pragma once

#include "definition.h"

// 数据元素类型为Elemtype
typedef int ElemType;

// 线性表的静态单链表储存结构
#define MAXSIZE 1000	// 链表的最大长度
typedef struct 
{
	ElemType data;
	int cur;
}component, SLinkList[MAXSIZE];


/*
 * 在静态单链线性表L中查找第1个值为e的元素
 * 若找到，则反回它在L中的位序，否则返回0
 */
int LocateElem_SL(SLinkList S, ElemType e);

/*
 * 将一维数组space中各分量链成一个备用链表，space[0].cur为头指针，
 * “0”表示空指针
 */
void InitSpace_SL(SLinkList &space);


//  若备用空间链表非空，则返回分配的节点下标，否则返回0
int Malloc_SL(SLinkList &space);


// 将下标为k的空闲结点回收到备用链表
void Free_SL(SLinkList &spce, int k);


/*
 * 依次输入集合A和集合B的元素，在一维数组space中建立表示集和（A-B）U（B-A）
 * 的静态列表，S为其头指针。假设备用空间足够大，space[0].cur为其头指针。
 */
void difference(SLinkList &space, int &S);