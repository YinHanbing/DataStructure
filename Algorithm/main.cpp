#include "LinkList.h"
#include "SLList.h"
#include "SqList.h"

void main() {
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
}