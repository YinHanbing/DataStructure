#include "SqStack.h"

// 插入元素e为新的栈顶元素
Status Push(SqStack &S, SElemType e) {
	if (S.top - S.base >= S.stacksize)		// 栈满，追加存储空间
	{
		S.base = (SElemType*)realloc(S.base, (S.stacksize + STACKINSERMENT) * sizeof(SElemType));
		if (!S.base)	// 储存分配失败
		{
			exit(OVERFLOW);
		}
		S.top = S.base + S.stacksize;
		S.stacksize += STACKINSERMENT;
	}
	*S.top++ = e;
	return OK;
}// Push

