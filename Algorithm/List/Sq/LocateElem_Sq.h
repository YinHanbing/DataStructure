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
 * �����Ա�L�в��ҵ�1��ֵ��e����compare()��Ԫ�ص�λ��
 * ���ҵ����򷵻�����L�е�λ�򣬷��򷵻�0
 */
int LocateElem_Sq(SqList L, ElemType e, Status(*compare)(ElemType, ElemType));

