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

// ����һ�������б�
Status InitList_Sq(SqList &L);