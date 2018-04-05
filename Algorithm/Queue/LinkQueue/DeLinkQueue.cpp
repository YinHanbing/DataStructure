#include "DeLinkQueue.h"


/*
 * 若队列不空，则删除Q的队头元素，用e返回其值，并返回OK
 * 否则返回ERROR
 */
Status DeQueue(LinkQueue &Q, QElemType &e) {
	if (Q.front == Q.rare)
	{
		return ERROR;
	}
	QueuePrt p = Q.front->next;
	e = p->data;
	Q.front->next = p->next;
	if (Q.rare == p)
	{
		Q.rare = Q.front;	// 当队列中最后一个元素被删除后，队尾指针也丢失了，因此需要对队尾指针重新赋值
		free(p);
		return OK;
	}
}