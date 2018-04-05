#include "SqStack.h"

Status StackEmpty(SqStack S) {
	if (S.top==S.base)
	{
		return OK;
	}
	return ERROR;
}