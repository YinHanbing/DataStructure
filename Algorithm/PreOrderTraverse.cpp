#include "SqBiTree.h"
#include "SqStack.h"

/*
 * ���ö�������洢�ṹ��Visit�Ƕ�����Ԫ�ز�����Ӧ�ú���
 * �������������T�ĵݹ��㷨����ÿ������Ԫ�ص��ú���Visit
 */
Status PreOrderTraverse(BiTree T, Status(*Visit)(TElemType)) {
	if (T)
	{
		if (Visit(T->data))
		{
			if (PreOrderTraverse(T->lchild,Visit))
			{
				if (PreOrderTraverse(T->rchild, Visit))
				{
					return OK;
				}
			}
		}
		return ERROR;
	}
	else
	{
		return OK;
	}
}
