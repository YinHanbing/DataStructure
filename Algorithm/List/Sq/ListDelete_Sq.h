#pragma once

#include "../../definition.h"


// 数据元素类型为Elemtype
typedef int ElemType;

// 线性表的动态分配顺序储存结构
#define LIST_INIT_SIZE 5	// 线性表储存空间的初始分配量
#define LISTINCREMENT 2		// 线性表储存空间的分配增量

typedef struct {
	ElemType *elem;		// 储存空间基址
	int length;		// 当前长度
	int listsize;	// 当前分配的储存容量（以sizeof（ElenpType）为单位）
}SqList;

/*
 * 在顺序表L中删除第i个元素，并用e返回其值
 * i的合法值为1<=i<=ListLength_Sq(L)+1
 */
Status ListDelete_Sq(SqList &L, int i, ElemType &e);

