#include "SqQueueLength.h"

// ����Q��Ԫ�ظ����������г���
int	QueueLength(SqQueue Q) {
	return (Q.rear - Q.front + MAXQSIZE) % MAXQSIZE;
}