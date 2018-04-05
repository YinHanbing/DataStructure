#include "DeSqQueue.h"

/*
 * �����в��գ���ɾ��Q�Ķ�ͷԪ�أ���e������ֵ��������OK
 * ���򷵻�ERROR
 */
Status DeQueue(SqQueue &Q, QElemType &e) {
	if (Q.front == Q.rear)
	{
		return ERROR;
	}
	e = Q.base[Q.front];
	Q.front = (Q.front + 1) % MAXQSIZE;
	return OK;
}