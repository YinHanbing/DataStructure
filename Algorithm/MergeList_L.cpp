#include "LinkList.h"


/*
 * 已知顺序表La和Lb的元素按值非递减排列
 * 并归La和Lb得到新的顺序线性表Lc，Lc的元素也按非递减值排列
 */

void MergeList_Sq(LinkList La, LinkList Lb, LinkList &Lc) {
	LinkList pa = La->next;
	LinkList pb = Lb->next;
	LinkList pc;
	Lc = pc = La;	// La的头结点作为Lc的头结点
	while (pa&&pb)
	{
		if (pa->data <= pb->data)
		{
			pc->next = pb;
			pc = pa;
			pa = pa->next;
		}
		else
		{
			pc->next = pb;
			pc = pb;
			pb = pb->next;
		}
		pc->next = pa ? pa : pb;	//插入剩余段
		free(Lb);	// 释放Lb的头结点
	}
}	//MergeList_L