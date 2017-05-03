#pragma once

#include "definition.h"


// ����Ԫ������ΪElemtype
typedef int ElemType;

// ���Ա�ĵ�������ṹ
typedef struct LNode {
	ElemType data;
	struct LNode *next;
}LNode, *LinkList;


// ��λ������n��Ԫ�ص�ֵ��������ͷ���ĵ������Ա�
void CreateList_L(LinkList &L, int n);


/*
 * LΪ��ͷ�ڵ�ĵ������ͷָ��
 * ����i��Ԫ�ز�����ʱ����ֵ����e������OK�����򷵻�ERROR
 */
Status GetElem_L(LinkList L, int i, ElemType &e);


// �ڴ�ͷ���ĵ������Ա�L�У�ɾ����i��Ԫ�أ�����e������ֵ
Status ListDelete_L(LinkList &L, int i, ElemType &e);


// �ڴ�ͷ���ĵ������Ա�L�е�i��λ��֮ǰ����Ԫ��e
Status ListInsert_L(LinkList &L, int i, ElemType e);


/*
 * ��֪˳���La��Lb��Ԫ�ذ�ֵ�ǵݼ�����
 * ����La��Lb�õ��µ�˳�����Ա�Lc��Lc��Ԫ��Ҳ���ǵݼ�ֵ����
 */
void MergeList_Sq(LinkList La, LinkList Lb, LinkList &Lc);




