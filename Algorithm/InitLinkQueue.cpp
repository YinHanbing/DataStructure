#include "LinkQueue.h"

// ����һ���ն���
Status InitQueue(LinkQueue &Q) {
	Q.front = Q.rare = (QueuePrt)malloc(sizeof(QNode));
	if (!Q.front)		// �������ʧ��
	{
		exit(OVERFLOW);
	}
	Q.front->next = NULL;
	return OK;
}
