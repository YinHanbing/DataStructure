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

// ����Ԫ��eΪQ���µĶ�βԪ��
Status EnQueue(LinkQueue &Q, QElemType e);