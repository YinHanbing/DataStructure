#pragma once

#include "definition.h"

typedef int QElemType;

// 单链队列————队列的链式存储结构
typedef struct QNode {
	QElemType data;
	struct QNode *next;
}QNode,*QueuePrt;

typedef struct {
	QueuePrt front;		// 对头指针
	QueuePrt rare;		// 对尾指针
}LinkQueue;

// 构造一个空队列Q
Status InitQueue(LinkQueue &Q);

// 销毁队列
Status DestoryQueue(LinkQueue &Q);

// 插入元素e为Q的新的队尾元素
Status EnQueue(LinkQueue &Q, QElemType e);

/*
 * 若队列不空，则删除Q的队头元素，用e返回其值，并返回OK
 * 否则返回ERROR
 */
Status DeQueue(LinkQueue &Q, QElemType &e);
