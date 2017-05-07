#pragma once

#include "definition.h"

typedef char TElemType;

// �������ĵĶ�������洢��ʾ
typedef struct BiTNode {
	TElemType data;
	struct BiTNode *lchild, *rchild;	// ���Һ���ָ��
}BiTNode, *BiTree;

/*
 * �������������������н���ֵ��һ���ַ������ո��ַ���ʾ������
 * ������������ʾ�Ķ�����T��
 */
Status CreateBiTree(BiTree &t);

/*
 * ���ö�������洢�ṹ��Visit�ǽ�������Ӧ�ú�����
 * �ȱ���������t����ÿ�������ú���Visitһ���ҽ�һ�Ρ�
 * һ��Visit()ʧ�ܣ������ʧ�ܡ�
 */
Status PreOrderTraverse(BiTree t, Status(*Visit)(TElemType));

/*
 * ���ö�������洢�ṹ��Visit�ǽ�������Ӧ�ú�����
 * �б���������t����ÿ�������ú���Visitһ���ҽ�һ�Ρ�
 * һ��Visit()ʧ�ܣ������ʧ�ܡ�
 */
Status InOrderTraverse(BiTree t, Status(*Visit)(TElemType));

/*
 * ���ö�������洢�ṹ��Visit�ǽ�������Ӧ�ú�����
 * �����������t����ÿ�������ú���Visitһ���ҽ�һ�Ρ�
 * һ��Visit()ʧ�ܣ������ʧ�ܡ�
 */
Status PostOrderTraverse(BiTree t, Status(*Visit)(TElemType));

/*
 * ���ö�������洢�ṹ��Visit�ǽ�������Ӧ�ú�����
 * �����������t����ÿ�������ú���Visitһ���ҽ�һ�Ρ�
 * һ��Visit()ʧ�ܣ������ʧ�ܡ�
 */
Status LevelOrderTraverser(BiTree t, Status(*Visit)(TElemType));

// Visit����
Status PrintElement(TElemType e);

