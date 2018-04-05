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

// 将下标为k的空闲结点回收到备用链表
void Free_SL(SLinkList &spce, int k);