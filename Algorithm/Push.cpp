#include "SqStack.h"

// ����Ԫ��eΪ�µ�ջ��Ԫ��
Status Push(SqStack &S, SElemType e) {
	if (S.top - S.base >= S.stacksize)		// ջ����׷�Ӵ洢�ռ�
	{
		S.base = (SElemType*)realloc(S.base, (S.stacksize + STACKINSERMENT) * sizeof(SElemType));
		if (!S.base)	// �������ʧ��
		{
			exit(OVERFLOW);
		}
		S.top = S.base + S.stacksize;
		S.stacksize += STACKINSERMENT;
	}
	*S.top++ = e;
	return OK;
}// Push

