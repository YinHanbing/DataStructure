#pragma once

#include "../../definition.h"

typedef int QElemType;

// 单链队列————队列的链式存储结构
typedef struct QNode {
	QElemType data;
	struct QNode *next;
}QNode, *QueuePrt;

typedef struct {
	QueuePrt front;		// 对头指针
	QueuePrt rare;		// 对尾指针
}LinkQueue;
