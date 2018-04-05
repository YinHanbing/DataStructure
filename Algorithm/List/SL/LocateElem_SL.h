#pragma once

#include "../../definition.h"

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