#include "SqBiTree.h"
#include "SqStack.h"

/*
 * 按先序次序输入二叉树中节点的值（一个字符），空格字符表示空树
 * 构造二叉链表表示的二叉树T
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
		T->data = ch;	// 生成根节点
		CreateBiTree(T->lchild);	// 构造左子树
		CreateBiTree(T->rchild);	// 构造左子树
	}// else
	return OK;
}// CreateBitree