#include "BiThrTree.h"

/*
 * T指向头结点，头结点的左链lchild指向根节点，可参见线索化算法。
 * 中序遍历二叉线索树T的非递归算法，对每个数据元素调用函数Visit。
 */
Status InOrderTraverse_Thr(BiThrTree T, Status(*Visit)(TElemType e)) {
	BiThrTree p;
	p = T;
	while (p != T)
	{
		while (p->LTag == Link)
		{
			p = p->lchild;
		}
		if (!Visit(p->data))
		{
			return ERROR;
		}
		while (p->RTag == Thread&&p->rchild != T)
		{
			p = p->rchild;
			Visit(p->data);
		}
		p = p->rchild;
	}
	return OK;
}// InOrderTraverse_Thr
