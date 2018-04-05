#pragma once

#include "../../definition.h"

//  ----- 循环队列————队列的顺序存储结构 -----

// QElemType是队列元素的类型
typedef int QElemType;

// 最大队列长度
#define MAXQSIZE 5	
typedef struct {
	QElemType *base;	//	初始化的动态分配储存空间
	int front;		// 头指针，若队列不空，指向队列头元素
	int	rear;	// 尾指针，若队列不空，指向队列尾元素的下一个位置
}SqQueue;

// 插入元素e为Q的新的队尾元素
Status EnQueue(SqQueue &Q, QElemType e);