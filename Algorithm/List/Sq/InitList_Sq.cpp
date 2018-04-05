#include "InitList_Sq.h"


// 构造一个线性列表
Status InitList_Sq(SqList &L) 
{
	L.elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
	if (!L.elem) {
		exit(OVERFLOW);		// 储存空间分配失败
	}
	L.length = 0;		// 空表长度为0
	L.listsize = LIST_INIT_SIZE;	// 初始储存容量
	return OK;
}	//InitList_Sq