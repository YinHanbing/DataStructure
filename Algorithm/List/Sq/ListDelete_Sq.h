#pragma once

#include "../../definition.h"


// ����Ԫ������ΪElemtype
typedef int ElemType;

// ���Ա�Ķ�̬����˳�򴢴�ṹ
#define LIST_INIT_SIZE 5	// ���Ա���ռ�ĳ�ʼ������
#define LISTINCREMENT 2		// ���Ա���ռ�ķ�������

typedef struct {
	ElemType *elem;		// ����ռ��ַ
	int length;		// ��ǰ����
	int listsize;	// ��ǰ����Ĵ�����������sizeof��ElenpType��Ϊ��λ��
}SqList;

/*
 * ��˳���L��ɾ����i��Ԫ�أ�����e������ֵ
 * i�ĺϷ�ֵΪ1<=i<=ListLength_Sq(L)+1
 */
Status ListDelete_Sq(SqList &L, int i, ElemType &e);

