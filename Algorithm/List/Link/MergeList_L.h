#pragma once

#include "../../definition.h"


// ����Ԫ������ΪElemtype
typedef int ElemType;

// ���Ա�ĵ�������ṹ
typedef struct LNode {
	ElemType data;
	struct LNode *next;
}LNode, *LinkList;

/*
 * ��֪˳���La��Lb��Ԫ�ذ�ֵ�ǵݼ�����
 * ����La��Lb�õ��µ�˳�����Ա�Lc��Lc��Ԫ��Ҳ���ǵݼ�ֵ����
 */
void MergeList_Sq(LinkList La, LinkList Lb, LinkList &Lc);