#include"SLList.h"

// ���±�Ϊk�Ŀ��н����յ���������
void Free_SL(SLinkList &spce, int k) {
	spce[k].cur = spce[0].cur;
	spce[0].cur = k;
}// Free_SL