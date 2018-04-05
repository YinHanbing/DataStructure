#include "MergeList_Sq.h"


/* 
 * ��֪˳���La��Lb��Ԫ�ذ�ֵ�ǵݼ�����
 * ����La��Lb�õ��µ�˳�����Ա�Lc��Lc��Ԫ��Ҳ���ǵݼ�ֵ����
 */

void MergeList_Sq(SqList La, SqList Lb, SqList &Lc) {
	ElemType *pa = La.elem;
	ElemType *pb = Lb.elem;
	Lc.listsize = Lc.length + Lb.length;
	ElemType *pc = Lc.elem = (ElemType *)malloc(Lc.listsize * sizeof(ElemType));

	if (!Lc.elem)
	{
		exit(OVERFLOW);	// �������ʧ��
	}

	ElemType *pa_last = La.elem + La.length - 1;
	ElemType *pb_last = Lb.elem + Lb.length - 1;
	while (pa <= pa_last && pb <= pb_last){
		if	( *pa <= *pb ) {
			*pc++ = *pa++ ;
		}
		else {
			*pc++ = *pb++;
		}
	}

	while (pa <= pa_last) {
		*pc++= *pa++;		// ����La��ʣ��Ԫ��
	}

	while (pb <= pb_last) {
		*pc++ = *pb++;	// ����Lb��ʣ��Ԫ��
	}
}	//MergeList_Sq