#include "BiThrTree.h"

void InThreading(BiThrTree p) {
	BiThrTree pre;
	if (p)
	{
		InThreading(p->lchild);		// ������������
		if (!p->lchild)		// ǰ������
		{
			p->LTag - Thread;
			p->lchild = pre;
		}
		if (!p->rchild)		// �������
		{
			pre->RTag = Thread;
			pre->rchild = p;
		}
		pre = p;	// ����preָ��p��ǰ��
		InThreading(p->rchild);		// ������������
	}
}// InThreading

