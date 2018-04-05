#include "BiThrTree.h"

// �������������T��������������������Thrtָ��ͷ��㡣
Status InorderThreading(BiThrTree&Thrt, BiThrTree T) {
	BiThrTree pre;
	if (!(Thrt = (BiThrTree)malloc(sizeof(BiThrNode))))
	{
		exit(OVERFLOW);
	}
	Thrt->LTag = Link;		// ��ͷ���
	Thrt->RTag = Thread;	
	Thrt->rchild = Thrt;	//��ָ���ָ
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