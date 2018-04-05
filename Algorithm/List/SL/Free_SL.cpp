#include "Free_SL.h"

// 将下标为k的空闲结点回收到备用链表
void Free_SL(SLinkList &spce, int k) {
	spce[k].cur = spce[0].cur;
	spce[0].cur = k;
}// Free_SL