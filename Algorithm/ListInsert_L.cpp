#include "LinkList.h"

// 在带头结点的单链线性表L中第i个位置之前插入元素e
Status ListInsert_L(LinkList &L, int i, ElemType e) {
	LinkList p = L;
	int j = 0;
	while (p && j < i - 1)	 // 寻找第i-1个节点
	{	
		p = p->next;
		++j;
	}
	if ( !p || j > i - 1)	//	i小于1或者大于表长加1 
	{
		return ERROR;	
	}
	LinkList s = (LinkList)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return OK;
}// ListInsert_L