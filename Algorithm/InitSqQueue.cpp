#include "SqQueue.h"

// 构造一个空队列
Status InitQueue(SqQueue &Q) {
	Q.base = (QElemType *)malloc(MAXQSIZE * sizeof(QElemType));
	if (!Q.base)		// 储存分配失败
	{
		exit(OVERFLOW);		
	}
	Q.front = Q.rear = 0;
	return OK;
}