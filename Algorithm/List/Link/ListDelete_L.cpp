#include "ListDelete_L.h"

// �ڴ�ͷ���ĵ������Ա�L�У�ɾ����i��Ԫ�أ�����e������ֵ
Status ListDelete_L(LinkList &L, int i, ElemType &e) {
	LinkList p = L; 
	int j = 0;
	while (p->next && j < i - 1)	// Ѱ�ҵ�i����㣬����pָ����ǰ�� 
	{	
		p = p->next;
		++j;
	}
	if (!(p->next) || j > i - 1)	// ɾ��λ�ò�����
	{
		return ERROR;
	}
		LinkList q = p->next;	// ɾ�����ͷŽ��
		p->next = q->next;	
		e = q->data;
		free(q);
		return OK;
}//	ListDelete_L