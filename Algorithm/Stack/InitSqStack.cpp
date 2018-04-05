#include "SqStack.h"

// ����һ����ջ
Status InitStack(SqStack &S) {
	S.base = (SElemType *)malloc(STACK_ININ_SIZE * sizeof(SElemType));
	if (!S.base)
	{
		exit(OVERFLOW);		// �������ʧ��
	}
	S.top = S.base;
	S.stacksize = STACK_ININ_SIZE;
	return OK;
}// InitStack
