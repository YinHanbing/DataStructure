#pragma once

#include "definition.h"


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


/*
 * ��˳�����Ա�L�е�i��λ��֮ǰ�����µ�Ԫ��e
 * i�ĺϷ�ֵΪ1<=i<=ListLength_Sq(L)+1
 */
Status ListInsert_Sq(SqList &L, int i, ElemType e);


// ����һ�������б�
Status InitList_Sq(SqList &L);


/*
 *�����Ա�L�в��ҵ�1��ֵ��e����compare()��Ԫ�ص�λ��
 *���ҵ����򷵻�����L�е�λ�򣬷��򷵻�0
 */
int LocateElem_Sq(SqList L, ElemType e, Status(*compare)(ElemType, ElemType));


/* 
 * ��֪˳���La��Lb��Ԫ�ذ�ֵ�ǵݼ�����
 * ����La��Lb�õ��µ�˳�����Ա�Lc��Lc��Ԫ��Ҳ���ǵݼ�ֵ����
 */
void MergeList_Sq(SqList La, SqList Lb, SqList &Lc);

