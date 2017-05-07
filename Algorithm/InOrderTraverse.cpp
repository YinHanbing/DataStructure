#include "BiTree.h"
#include "SqStack.h"

/*
 * ���ö�������洢�ṹ��Visit�Ƕ�����Ԫ�ز�����Ӧ�ú���
 * �������������T�ķǵݹ��㷨����ÿ������Ԫ�ص��ú���Visit
 */
Status InOrderTraverse(BiTree T, Status(*Visit)(TElemType e)) {
	SqStack S;
	BiTree p;
	InitStack(S);
	p = T;
	while (p || !StackEmpty(S))
	{
		if (p)	// ��ָ���ջ������������
		{
			Push(S, p);
			p = p->lchild;
		}
		else	// ��ָ����ջ�����ʸ���㣬����������
		{
			Pop(S, p);
			if (!Visit(p->data))
			{
				return ERROR;
			}
			p = p->rchild;
		}// else
	}// while
	return OK;
}// InOrderTraverse
