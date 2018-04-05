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

//  若备用空间链表非空，则返回分配的节点下标，否则返回0
int Malloc_SL(SLinkList &space);
