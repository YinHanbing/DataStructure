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
 * 将一维数组space中各分量链成一个备用链表，space[0].cur为头指针，
 * “0”表示空指针
 */
void InitSpace_SL(SLinkList &space);