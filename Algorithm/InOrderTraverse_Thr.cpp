#include "BiThrTree.h"

/*
 * Tָ��ͷ��㣬ͷ��������lchildָ����ڵ㣬�ɲμ��������㷨��
 * �����������������T�ķǵݹ��㷨����ÿ������Ԫ�ص��ú���Visit��
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
