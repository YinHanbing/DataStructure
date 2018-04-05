#pragma once

#include "definition.h"
#include "BiTree.h"

// �������Ķ��������洢��ʾ
typedef enum PointerTag {
	Link, Thread	// Link == 0��ָ�룬Thread == 1������
};
typedef struct BiThrNode {
	TElemType data;
	struct BiThrNode *lchild, *rchild;		// ���Һ���ָ��
	PointerTag LTag, RTag;		// ���ұ�־
}BiThrNode, *BiThrTree;

/*
 * Tָ��ͷ��㣬ͷ��������lchildָ����ڵ㣬�ɲμ��������㷨��
 * �����������������T�ķǵݹ��㷨����ÿ������Ԫ�ص��ú���Visit��
 */
Status InOrderTraverse_Thr(BiThrTree T, Status(*Visit)(TElemType e));

// �������������T��������������������Thrtָ��ͷ��㡣
Status InorderThreading(BiThrTree&Thrt, BiThrTree T);

// 
void InThreading(BiThrTree p);

