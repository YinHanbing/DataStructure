/*
#include "LinkList.h"
#include "SLList.h"
#include "SqList.h"
#include "SqQueue.h"
#include "SqStack.h"
#include "LinkQueue.h"
*/

/*
// 对于输入的任意一个非负十进制整数，打印输出与其等值的八进制数
void conversion() {
	SqStack S;
	int N;
	SElemType e;

	InitStack(S);		// 构造空栈
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
	// 向线性表中输入元素
	InitList_Sq(L);
	printf("***请输入%d个元素，每个元素间用空格分开***\n", LIST_INIT_SIZE);
	for (i = 0; i < L.listsize; i++)
	{
		scanf("%d", &L.elem[i]);
		++L.length;
	}
	printf("\n***线性表中的元素有：\n");    // 打印线性表中的元素
	for (i = 0; i < L.length; i++)
	{
		printf("%d ", *(L.elem + i));
	}
	printf("\n");
	// 输入要插入的位置及元素
	printf("\n***请依次输入插入的位置及元素:\n");
	scanf("%d%d", &i, &e);
	ListInsert_Sq(L, i, e);		// 调用插入函数
	printf("\n***插入后线性表中的元素有：\n");
	for (i = 0; i < L.length; i++)
	{
		printf("%d ", L.elem[i]);
	}
	printf("\n");
	// 输入要删除元素所在位置
	printf("\n***请输入要删除元素所在位置：\n");
	scanf("%d", &i);
	printf("\n***删除后线性表中的元素有：\n");
	ListDelete_Sq(L, i, e);		// 调用删除函数
	for (i = 0; i < L.length; i++)
	{
		printf("%d ", *(L.elem + i));
	}
	printf("\n");
	printf("\n***删除的元素为：\n%d\n", e);
	printf("\n");
*/

/*
	LinkList p, L;
	int i, n;

	// 创建链表
	printf("请输入要创建链表的元素个数:\n");
	scanf("%d", &n);
	CreateList_L(L, n);
	printf("\n倒序结果:\n");
	for (p = L->next; p; p = p->next)
	{
		printf("%d ", p->data);
	}

	ElemType e;
	printf("\n\n请输入要获取的元素所在的位置:\n");
	scanf("%d", &i);
	GetElem_L(L, i, e);
	printf("\n该位置上的元素为:\n\n");
	printf("e = %d\n", e);

	// 在位置i插入元素e
	printf("\n请依次输入插入的位置及元素:\n");
	scanf("%d%d", &i,&e);
	ListInsert_L(L, i, e);
	printf("\n插入后的链表为:\n");
	for (p = L->next; p; p = p->next)
	{
		printf("%d ", p->data);
	}
	printf("\n");

	// 删除第i个位置的元素后，打印LinkList中的元素并用e返回删除的元素
	printf("\n请输入删除元素的位置:\n");
	scanf("%d", &i);
	ListDelete_L(L, i, e);
	printf("\nc删除后的链表:\n");
	for (p = L->next; p; p = p->next)
	{
		printf("%d ", p->data);
	}
	printf("\n\n删除的元素为:\n");
	printf("e = %d\n\n", e);

*/

/*
	SqQuene Q;
	int	i;
	QElemType e;
	
	// 初始化队列
	InitQueue(Q);
	for (i = 0; i < MAXQSIZE - 1; i++)
	{
		scanf("%d", &e);	// 插入队列元素
		EnQueue(Q, e);
	}
	for (i = Q.front; i != Q.rear; i = (i + 1) % MAXQSIZE)
	{
		printf("%d ", Q.base[i]);
	}
	printf("\n");
	printf("Length = %d\n", QueueLength(Q));	// 输出队列长度
	
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
	
	printf("请输入队列长度:\n");
	int n, i;
	scanf("%d", &n);
	
	printf("\n请依次输入队列元素:\n");
	QElemType e;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &e);
		EnQueue(Q, e);
	}
	
	printf("\n现有队列:\n");
	QueuePrt q;
	for (q = Q.front->next; q; q = q->next)
	{
		printf("%d ",q->data);
	}
	printf("\n");
	
	printf("\n已删除队头元素e:\n");
	DeQueue(Q, e);
	printf("e = %d\n", e);
	
	printf("\n队列中现有元素:\n");
	for (q = Q.front->next; q; q = q->next)
	{
		printf("%d ",q->data);
	}
	printf("\n");
	
	printf("\n已销毁队列，现队头元素为:\n");
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
	printf("打印栈中的元素:");
	for (i = 0; i < S.top - S.base; i++)
	{
		printf("%d ", S.base[i]);
	}
	printf("\n");
	
	GetTop(S, e);
	printf("栈顶元素是: %d\n", e);
	
	printf("请输入压入栈顶的元素:");
	scanf("%d", &e);
	Push(S, e);
	
	printf("调用入栈算法后栈中元素: ");
	for (i = 0; i < S.top - S.base; i++)
	{
		printf("%d ", S.base[i]);
	}
	printf("\n");
	
	printf("调用出栈算法后栈中元素: ");
	for (i = 0; i < S.top - S.base; i++)
	{
		printf("%d ", S.base[i]);
	}
	printf("\n");
	printf("弹出的栈顶元素是: %d\n", e);
*/

/*
	conversion();
*/

}
