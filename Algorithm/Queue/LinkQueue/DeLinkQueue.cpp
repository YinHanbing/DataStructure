#include "DeLinkQueue.h"


/*
 * �����в��գ���ɾ��Q�Ķ�ͷԪ�أ���e������ֵ��������OK
 * ���򷵻�ERROR
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
		Q.rare = Q.front;	// �����������һ��Ԫ�ر�ɾ���󣬶�βָ��Ҳ��ʧ�ˣ������Ҫ�Զ�βָ�����¸�ֵ
		free(p);
		return OK;
	}
}