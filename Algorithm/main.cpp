/*
#include "LinkList.h"
#include "SLList.h"
#include "SqList.h"
#include "SqQueue.h"
#include "SqStack.h"
#include "LinkQueue.h"
*/

/*
// �������������һ���Ǹ�ʮ������������ӡ��������ֵ�İ˽�����
void conversion() {
	SqStack S;
	int N;
	SElemType e;

	InitStack(S);		// �����ջ
	scanf("%d", &N);
	while (N)
	{
		Push(S, N % 8);
		N = N / 8;
	}
	while (!StackEmpty(S))
	{
		Pop(S, e);
		printf("%d", e);
	}
	printf("\n");
}
*/

void main() {

/*
	SqList L;
	int i;
	ElemType e;
	// �����Ա�������Ԫ��
	InitList_Sq(L);
	printf("***������%d��Ԫ�أ�ÿ��Ԫ�ؼ��ÿո�ֿ�***\n", LIST_INIT_SIZE);
	for (i = 0; i < L.listsize; i++)
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
*/

/*
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

*/

/*
	SqQuene Q;
	int	i;
	QElemType e;
	
	// ��ʼ������
	InitQueue(Q);
	for (i = 0; i < MAXQSIZE - 1; i++)
	{
		scanf("%d", &e);	// �������Ԫ��
		EnQueue(Q, e);
	}
	for (i = Q.front; i != Q.rear; i = (i + 1) % MAXQSIZE)
	{
		printf("%d ", Q.base[i]);
	}
	printf("\n");
	printf("Length = %d\n", QueueLength(Q));	// ������г���
	
	DeQueue(Q, e);
	for (i = Q.front; i != Q.rear; i = (i + 1) % MAXQSIZE)
	{
		printf("%d ", Q.base[i]);
	}
	printf("\n");
	printf("e = %d\n", e);
	printf("Length = %d\n", QueueLength(Q));
*/

/*
	LinkQueue Q;
	InitQueue(Q);
	
	printf("��������г���:\n");
	int n, i;
	scanf("%d", &n);
	
	printf("\n�������������Ԫ��:\n");
	QElemType e;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &e);
		EnQueue(Q, e);
	}
	
	printf("\n���ж���:\n");
	QueuePrt q;
	for (q = Q.front->next; q; q = q->next)
	{
		printf("%d ",q->data);
	}
	printf("\n");
	
	printf("\n��ɾ����ͷԪ��e:\n");
	DeQueue(Q, e);
	printf("e = %d\n", e);
	
	printf("\n����������Ԫ��:\n");
	for (q = Q.front->next; q; q = q->next)
	{
		printf("%d ",q->data);
	}
	printf("\n");
	
	printf("\n�����ٶ��У��ֶ�ͷԪ��Ϊ:\n");
	DestoryQueue(Q);
	printf("Q.front = %d\n\n", Q.front);
*/

/*
	SqStack S;
	SElemType e;
	int i;
	
	InitStack(S);
	
	for (i = 0; i < STACK_ININ_SIZE; i++)
	{
		scanf("%d", S.base + i);
		++S.top;
	}
	printf("��ӡջ�е�Ԫ��:");
	for (i = 0; i < S.top - S.base; i++)
	{
		printf("%d ", S.base[i]);
	}
	printf("\n");
	
	GetTop(S, e);
	printf("ջ��Ԫ����: %d\n", e);
	
	printf("������ѹ��ջ����Ԫ��:");
	scanf("%d", &e);
	Push(S, e);
	
	printf("������ջ�㷨��ջ��Ԫ��: ");
	for (i = 0; i < S.top - S.base; i++)
	{
		printf("%d ", S.base[i]);
	}
	printf("\n");
	
	printf("���ó�ջ�㷨��ջ��Ԫ��: ");
	for (i = 0; i < S.top - S.base; i++)
	{
		printf("%d ", S.base[i]);
	}
	printf("\n");
	printf("������ջ��Ԫ����: %d\n", e);
*/

/*
	conversion();
*/

}
