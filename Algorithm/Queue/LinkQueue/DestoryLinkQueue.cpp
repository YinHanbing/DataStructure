#include "DestoryLinkQueue.h"

// ���ٶ���Q
Status DestoryQueue(LinkQueue &Q) {
	while (Q.front)
	{
		Q.rare = Q.front->next;
		free(Q.front);
		Q.front = Q.rare;
	}
	return OK;
}