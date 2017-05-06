#include "LinkQueue.h"

// 插入元素e为Q的新的队尾元素
Status EnQueue(LinkQueue &Q, QElemType e) {
	QueuePrt p = (QueuePrt)malloc(sizeof(QNode));
	if (!p)
	{
		exit(OVERFLOW);
	}
	p->data = e;
	p->next = NULL;
	Q.rare->next = p;
	Q.rare = p;
	return OK;
}

