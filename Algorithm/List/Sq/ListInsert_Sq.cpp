#include "ListInsert_Sq.h"


/*
 * ��˳�����Ա�L�е�i��λ��֮ǰ�����µ�Ԫ��e
 * i�ĺϷ�ֵΪ1<=i<=ListLength_Sq(L)+1
 */
Status ListInsert_Sq(SqList &L, int i, ElemType e) {
	if (i < 1 || i > L.length + 1) {
		return ERROR;	// iֵ���Ϸ�
	}
	if (L.length >= L.listsize) {		//��ǰ�ռ䴢�����������ӷ���
		ElemType *newbase = (ElemType *)realloc(L.elem, (L.listsize + LISTINCREMENT) * sizeof(ElemType));
		if (!newbase)exit(OVERFLOW);	// ����ռ����ʧ��
		L.elem = newbase;	// �»�ַ
		L.listsize += LISTINCREMENT;	// ���Ӵ�������
	}
	ElemType *q = &(L.elem[i - 1]);	// qΪ����λ��
	for (ElemType *p = &(L.elem[L.length - 1]); p >= q; --p) * (p + 1) = *p;	// ����λ�ü�֮���Ԫ�غ�����
	*q = e;		// ����e
	++L.length;		// ����1
	return OK;
}	// ListInsert_Sq