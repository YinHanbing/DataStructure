#pragma once

#include "definition.h"


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


/*
 * 在顺序线性表L中第i个位置之前插入新的元素e
 * i的合法值为1<=i<=ListLength_Sq(L)+1
 */
Status ListInsert_Sq(SqList &L, int i, ElemType e);


// 构造一个线性列表
Status InitList_Sq(SqList &L);


/*
 *在线性表L中查找第1个值与e满足compare()的元素的位序
 *若找到，则返回其在L中的位序，否则返回0
 */
int LocateElem_Sq(SqList L, ElemType e, Status(*compare)(ElemType, ElemType));


/* 
 * 已知顺序表La和Lb的元素按值非递减排列
 * 并归La和Lb得到新的顺序线性表Lc，Lc的元素也按非递减值排列
 */
void MergeList_Sq(SqList La, SqList Lb, SqList &Lc);

