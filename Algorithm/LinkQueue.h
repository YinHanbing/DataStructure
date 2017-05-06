#pragma once

#include "definition.h"

typedef int QElemType;

// �������С����������е���ʽ�洢�ṹ
typedef struct QNode {
	QElemType data;
	struct QNode *next;
}QNode,*QueuePrt;

typedef struct {
	QueuePrt front;		// ��ͷָ��
	QueuePrt rare;		// ��βָ��
}LinkQueue;

// ����һ���ն���Q
Status InitQueue(LinkQueue &Q);

// ���ٶ���
Status DestoryQueue(LinkQueue &Q);

// ����Ԫ��eΪQ���µĶ�βԪ��
Status EnQueue(LinkQueue &Q, QElemType e);

/*
 * �����в��գ���ɾ��Q�Ķ�ͷԪ�أ���e������ֵ��������OK
 * ���򷵻�ERROR
 */
Status DeQueue(LinkQueue &Q, QElemType &e);
