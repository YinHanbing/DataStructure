#include "InitList_Sq.h"


// ����һ�������б�
Status InitList_Sq(SqList &L) 
{
	L.elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
	if (!L.elem) {
		exit(OVERFLOW);		// ����ռ����ʧ��
	}
	L.length = 0;		// �ձ���Ϊ0
	L.listsize = LIST_INIT_SIZE;	// ��ʼ��������
	return OK;
}	//InitList_Sq