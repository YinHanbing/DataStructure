#include "SqStack.h"

// 构造一个空栈
Status InitStack(SqStack &S) {
	S.base = (SElemType *)malloc(STACK_ININ_SIZE * sizeof(SElemType));
	if (!S.base)
	{
		exit(OVERFLOW);		// 储存分配失败
	}
	S.top = S.base;
	S.stacksize = STACK_ININ_SIZE;
	return OK;
}// InitStack
