#pragma once

#include "definition.h"
#include "BiTree.h"

// 二叉树的二叉线索存储表示
typedef enum PointerTag {
	Link, Thread	// Link == 0：指针，Thread == 1：线索
};
typedef struct BiThrNode {
	TElemType data;
	struct BiThrNode *lchild, *rchild;		// 左右孩子指针
	PointerTag LTag, RTag;		// 左右标志
}BiThrNode, *BiThrTree;

/*
 * T指向头结点，头结点的左链lchild指向根节点，可参见线索化算法。
 * 中序遍历二叉线索树T的非递归算法，对每个数据元素调用函数Visit。
 */
Status InOrderTraverse_Thr(BiThrTree T, Status(*Visit)(TElemType e));

// 中序遍历二叉树T，并将其中序线索化，Thrt指向头结点。
Status InorderThreading(BiThrTree&Thrt, BiThrTree T);

// 
void InThreading(BiThrTree p);

