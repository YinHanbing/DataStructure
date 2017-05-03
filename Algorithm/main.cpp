#include "LinkList.h"
#include "SLList.h"
#include "SqList.h"

void main(){
	/*	***SqList***

		SqList L;
		int i;
		ElemType e;


		// �����Ա�������Ԫ��
		InitList_Sq(L);
		printf("***������%d��Ԫ�أ�ÿ��Ԫ�ؼ��ÿո�ֿ�***\n", LIST_INIT_SIZE);
		for (i = 0; i<L.listsize; i++)
		{
			scanf("%d", &L.elem[i]);
			++L.length;
		}
		printf("\n***���Ա��е�Ԫ���У�\n");    // ��ӡ���Ա��е�Ԫ��

		for (i = 0; i < L.length; i++)
		{
			printf("%d ", *(L.elem + i));
		}
		printf("\n");

		// ����Ҫ�����λ�ü�Ԫ��
		printf("\n***��������������λ�ü�Ԫ��:\n");
		scanf("%d%d", &i, &e);
		ListInsert_Sq(L, i, e);		// ���ò��뺯��
		printf("\n***��������Ա��е�Ԫ���У�\n");
		for (i = 0; i < L.length; i++)
		{
			printf("%d ", L.elem[i]);
		}
		printf("\n");

		// ����Ҫɾ��Ԫ������λ��
		printf("\n***������Ҫɾ��Ԫ������λ�ã�\n");
		scanf("%d", &i);
		printf("\n***ɾ�������Ա��е�Ԫ���У�\n");
		ListDelete_Sq(L, i, e);		// ����ɾ������
		for (i = 0; i < L.length; i++)
		{
			printf("%d ", *(L.elem + i));
		}
		printf("\n");
		printf("\n***ɾ����Ԫ��Ϊ��\n%d\n", e);
		printf("\n");

	***SqList***	*/

	LinkList p, L;
	int i, n;

	// ��������
	printf("������Ҫ���������Ԫ�ظ���:\n");
	scanf("%d", &n);
	CreateList_L(L, n);
	printf("\n������:\n");
	for (p = L->next; p; p = p->next)
	{
		printf("%d ", p->data);
	}

	ElemType e;
	printf("\n\n������Ҫ��ȡ��Ԫ�����ڵ�λ��:\n");
	scanf("%d", &i);
	GetElem_L(L, i, e);
	printf("\n��λ���ϵ�Ԫ��Ϊ:\n\n");
	printf("e = %d\n", e);

	// ��λ��i����Ԫ��e
	printf("\n��������������λ�ü�Ԫ��:\n");
	scanf("%d%d", &i,&e);
	ListInsert_L(L, i, e);
	printf("\n����������Ϊ:\n");
	for (p = L->next; p; p = p->next)
	{
		printf("%d ", p->data);
	}
	printf("\n");

	// ɾ����i��λ�õ�Ԫ�غ󣬴�ӡLinkList�е�Ԫ�ز���e����ɾ����Ԫ��
	printf("\n������ɾ��Ԫ�ص�λ��:\n");
	scanf("%d", &i);
	ListDelete_L(L, i, e);
	printf("\ncɾ���������:\n");
	for (p = L->next; p; p = p->next)
	{
		printf("%d ", p->data);
	}
	printf("\n\nɾ����Ԫ��Ϊ:\n");
	printf("e = %d\n\n", e);
}