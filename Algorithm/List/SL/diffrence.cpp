#include "difference.h"

/*
 * �������뼯��A�ͼ���B��Ԫ�أ���һά����space�н�����ʾ���ͣ�A-B��U��B-A��
 * �ľ�̬�б�SΪ��ͷָ�롣���豸�ÿռ��㹻��space[0].curΪ��ͷָ�롣
 */
void difference(SLinkList &space, int &S) {
	InitSpace_SL(space);		// ��ʼ�����ÿռ�
	S = Malloc_SL(space);		// ����S��ͷ���
	int r = S;				// rָ��S��ͷ���
	int m, n;
	scanf("%d %d", &m, &n);				// ����A��B�ĸ���
	for (int j = 1; j <= m; ++j)		// ��������A������
	{
		int i = Malloc_SL(space);		// ������
		scanf("%d",space[i].data);			// ����A��Ԫ��ֵ
		space[r].cur = i; r = i;		// ���뵽��β
	}// for
	space[r].cur = 0;		// β����ָ��Ϊ��
	for (int j = 1; j <= n; ++j)		// ��������B��Ԫ�أ������ڵ�ǰ���У�����룬����ɾ��
	{
		int b;
		scanf("%d", &b);
		int p = S;
		int k = space[S].cur;		// kָ�򼯺�A�е�һ�����
		while (k != space[r].cur&&space[k].data != b)		// �ڵ�ǰ���в���
		{
			p = k;
			k = space[k].cur;
		}// while
		if (k == space[r].cur)		// ��ǰ���в����ڸ�Ԫ�أ�����r��ָ���֮����r��λ�ò���
		{
			int i = Malloc_SL(space);
			space[i].data = b;
			space[i].cur = space[r].cur;
			space[i].cur = i;
		}// if
		else		// ��Ԫ�����ڱ��У�ɾ��֮					
		{
			space[p].cur = space[k].cur;
			Free_SL(space, k);
			if (r == k)			// ��ɾ������r��ָ��㣬�����޸�βָ��
			{
				r = p;
			}
		}// else
	}// for
}// difference