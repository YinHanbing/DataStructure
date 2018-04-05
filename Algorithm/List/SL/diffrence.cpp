#include "difference.h"

/*
 * 依次输入集合A和集合B的元素，在一维数组space中建立表示集和（A-B）U（B-A）
 * 的静态列表，S为其头指针。假设备用空间足够大，space[0].cur为其头指针。
 */
void difference(SLinkList &space, int &S) {
	InitSpace_SL(space);		// 初始化备用空间
	S = Malloc_SL(space);		// 生成S的头结点
	int r = S;				// r指向S的头结点
	int m, n;
	scanf("%d %d", &m, &n);				// 输入A和B的个数
	for (int j = 1; j <= m; ++j)		// 建立集合A的链表
	{
		int i = Malloc_SL(space);		// 分配结点
		scanf("%d",space[i].data);			// 输入A的元素值
		space[r].cur = i; r = i;		// 插入到表尾
	}// for
	space[r].cur = 0;		// 尾结点的指针为空
	for (int j = 1; j <= n; ++j)		// 依次输入B的元素，若不在当前表中，则插入，否则删除
	{
		int b;
		scanf("%d", &b);
		int p = S;
		int k = space[S].cur;		// k指向集合A中第一个结点
		while (k != space[r].cur&&space[k].data != b)		// 在当前表中查找
		{
			p = k;
			k = space[k].cur;
		}// while
		if (k == space[r].cur)		// 当前表中不存在该元素，插入r所指结点之后，且r的位置不变
		{
			int i = Malloc_SL(space);
			space[i].data = b;
			space[i].cur = space[r].cur;
			space[i].cur = i;
		}// if
		else		// 该元素已在表中，删除之					
		{
			space[p].cur = space[k].cur;
			Free_SL(space, k);
			if (r == k)			// 若删除的是r所指结点，则需修改尾指针
			{
				r = p;
			}
		}// else
	}// for
}// difference