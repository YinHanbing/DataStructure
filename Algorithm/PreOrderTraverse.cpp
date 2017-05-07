#include "SqBiTree.h"
#include "SqStack.h"

/*
 * 采用二叉链表存储结构，Visit是对数据元素操作的应用函数
 * 先序遍历二叉树T的递归算法，对每个数据元素调用函数Visit
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
