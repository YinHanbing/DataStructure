#include "LinkList.h"

// ��λ������n��Ԫ�ص�ֵ��������ͷ���ĵ������Ա�
void CreateList_L(LinkList &L, int n) {
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;		// �Ƚ���һ����ͷ���ĵ�����
	for (int i = n; i > 0; --i)
	{
		LinkList p = (LinkList)malloc(sizeof(LNode));	// �����½��
		scanf("%d",&p->data);		// ����Ԫ��ֵ
		p->next = L->next;	// ���뵽��ͷ
		L->next = p;
	}
}// CreateList_L