#include "SqQueue.h"

// ����һ���ն���
Status InitQueue(SqQueue &Q) {
	Q.base = (QElemType *)malloc(MAXQSIZE * sizeof(QElemType));
	if (!Q.base)		// �������ʧ��
	{
		exit(OVERFLOW);		
	}
	Q.front = Q.rear = 0;
	return OK;
}