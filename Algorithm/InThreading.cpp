#include "BiThrTree.h"

void InThreading(BiThrTree p) {
	BiThrTree pre;
	if (p)
	{
		InThreading(p->lchild);		// 左子树线索化
		if (!p->lchild)		// 前驱线索
		{
			p->LTag - Thread;
			p->lchild = pre;
		}
		if (!p->rchild)		// 后继线索
		{
			pre->RTag = Thread;
			pre->rchild = p;
		}
		pre = p;	// 保持pre指向p的前驱
		InThreading(p->rchild);		// 右子树线索化
	}
}// InThreading

