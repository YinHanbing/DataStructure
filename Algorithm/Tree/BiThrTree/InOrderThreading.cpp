#include "BiThrTree.h"

// 中序遍历二叉树T，并将其中序线索化，Thrt指向头结点。
Status InorderThreading(BiThrTree&Thrt, BiThrTree T) {
	BiThrTree pre;
	if (!(Thrt = (BiThrTree)malloc(sizeof(BiThrNode))))
	{
		exit(OVERFLOW);
	}
	Thrt->LTag = Link;		// 建头结点
	Thrt->RTag = Thread;	
	Thrt->rchild = Thrt;	//右指针回指
	if (!T)
	{
		Thrt->lchild = Thrt;
	}
	else
	{
		Thrt->lchild = T;
		pre = Thrt;
		InThreading(T);
		pre->rchild = Thrt;
		pre->RTag = Thread;
		Thrt->rchild = pre;
	}
	return OK;
}// InOrderThreading