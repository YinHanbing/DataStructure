#include "MergeList_Sq.h"


/* 
 * 已知顺序表La和Lb的元素按值非递减排列
 * 并归La和Lb得到新的顺序线性表Lc，Lc的元素也按非递减值排列
 */

void MergeList_Sq(SqList La, SqList Lb, SqList &Lc) {
	ElemType *pa = La.elem;
	ElemType *pb = Lb.elem;
	Lc.listsize = Lc.length + Lb.length;
	ElemType *pc = Lc.elem = (ElemType *)malloc(Lc.listsize * sizeof(ElemType));

	if (!Lc.elem)
	{
		exit(OVERFLOW);	// 储存分配失败
	}

	ElemType *pa_last = La.elem + La.length - 1;
	ElemType *pb_last = Lb.elem + Lb.length - 1;
	while (pa <= pa_last && pb <= pb_last){
		if	( *pa <= *pb ) {
			*pc++ = *pa++ ;
		}
		else {
			*pc++ = *pb++;
		}
	}

	while (pa <= pa_last) {
		*pc++= *pa++;		// 插入La的剩余元素
	}

	while (pb <= pb_last) {
		*pc++ = *pb++;	// 插入Lb的剩余元素
	}
}	//MergeList_Sq