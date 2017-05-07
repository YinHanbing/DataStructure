#include "SqBiTree.h"
#include "SqStack.h"

/*
 * �������������������нڵ��ֵ��һ���ַ������ո��ַ���ʾ����
 * ������������ʾ�Ķ�����T
 */
Status CreateBiTree(BiTree &T) {
	char ch;
	scanf(&ch);
	if (ch==' ')
	{
		T = NULL;
	}
	else
	{
		if (!(T=(BiTNode *)malloc(sizeof(BiTNode))))
		{
			exit(OVERFLOW);
		}
		T->data = ch;	// ���ɸ��ڵ�
		CreateBiTree(T->lchild);	// ����������
		CreateBiTree(T->rchild);	// ����������
	}// else
	return OK;
}// CreateBitree