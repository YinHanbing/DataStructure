#include "LinkList.h"
#include "SLList.h"
#include "SqList.h"

void main(){
	/*	***SqList***

		SqList L;
		int i;
		ElemType e;


		// 向线性表中输入元素
		InitList_Sq(L);
		printf("***请输入%d个元素，每个元素间用空格分开***\n", LIST_INIT_SIZE);
		for (i = 0; i<L.listsize; i++)
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

	***SqList***	*/

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
}