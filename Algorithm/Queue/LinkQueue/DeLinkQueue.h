#pragma once

#include "../../definition.h"

typedef int QElemType;

// �������С����������е���ʽ�洢�ṹ
typedef struct QNode {
	QElemType data;
	struct QNode *next;
}QNode, *QueuePrt;

typedef struct {
	QueuePrt front;		// ��ͷָ��
	QueuePrt rare;		// ��βָ��
}LinkQueue;

/*
 * �����в��գ���ɾ��Q�Ķ�ͷԪ�أ���e������ֵ��������OK
 * ���򷵻�ERROR
 */
Status DeQueue(LinkQueue &Q, QElemType &e);