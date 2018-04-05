#pragma once

#include "definition.h"

typedef char TElemType;

// 二叉树的的二叉链表存储表示
typedef struct BiTNode {
	TElemType data;
	struct BiTNode *lchild, *rchild;	// 左右孩子指针
}BiTNode, *BiTree;

/*
 * 按先序次序输入二叉树中结点的值（一个字符），空格字符表示空树，
 * 构造二叉链表表示的二叉树T。
 */
Status CreateBiTree(BiTree &t);

/*
 * 采用二叉链表存储结构，Visit是结点操作的应用函数。
 * 先遍历二叉树t，对每个结点调用函数Visit一次且仅一次。
 * 一旦Visit()失败，则操作失败。
 */
Status PreOrderTraverse(BiTree t, Status(*Visit)(TElemType));

/*
 * 采用二叉链表存储结构，Visit是结点操作的应用函数。
 * 中遍历二叉树t，对每个结点调用函数Visit一次且仅一次。
 * 一旦Visit()失败，则操作失败。
 */
Status InOrderTraverse(BiTree t, Status(*Visit)(TElemType));

/*
 * 采用二叉链表存储结构，Visit是结点操作的应用函数。
 * 后遍历二叉树t，对每个结点调用函数Visit一次且仅一次。
 * 一旦Visit()失败，则操作失败。
 */
Status PostOrderTraverse(BiTree t, Status(*Visit)(TElemType));

/*
 * 采用二叉链表存储结构，Visit是结点操作的应用函数。
 * 层遍历二叉树t，对每个结点调用函数Visit一次且仅一次。
 * 一旦Visit()失败，则操作失败。
 */
Status LevelOrderTraverser(BiTree t, Status(*Visit)(TElemType));

// Visit函数
Status PrintElement(TElemType e);

