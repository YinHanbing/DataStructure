#include "LinkQueue.h"

// 构造一个空队列
Status InitQueue(LinkQueue &Q) {
	Q.front = Q.rare = (QueuePrt)malloc(sizeof(QNode));
	if (!Q.front)		// 储存分配失败
	{
		exit(OVERFLOW);
	}
	Q.front->next = NULL;
	return OK;
}
