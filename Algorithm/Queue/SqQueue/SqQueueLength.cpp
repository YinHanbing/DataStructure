#include "SqQueueLength.h"

// 返回Q的元素个数，即队列长度
int	QueueLength(SqQueue Q) {
	return (Q.rear - Q.front + MAXQSIZE) % MAXQSIZE;
}