#include "LinkList.h"

// �ڴ�ͷ���ĵ������Ա�L�е�i��λ��֮ǰ����Ԫ��e
Status ListInsert_L(LinkList &L, int i, ElemType e) {
	LinkList p = L;
	int j = 0;
	while (p && j < i - 1)	 // Ѱ�ҵ�i-1���ڵ�
	{	
		p = p->next;
		++j;
	}
	if ( !p || j > i - 1)	//	iС��1���ߴ��ڱ���1 
	{
		return ERROR;	
	}
	LinkList s = (LinkList)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return OK;
}// ListInsert_L