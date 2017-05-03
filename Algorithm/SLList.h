#pragma once

#include "definition.h"

// ����Ԫ������ΪElemtype
typedef int ElemType;

// ���Ա�ľ�̬��������ṹ
#define MAXSIZE 1000	// �������󳤶�
typedef struct 
{
	ElemType data;
	int cur;
}component, SLinkList[MAXSIZE];


/*
 * �ھ�̬�������Ա�L�в��ҵ�1��ֵΪe��Ԫ��
 * ���ҵ����򷴻�����L�е�λ�򣬷��򷵻�0
 */
int LocateElem_SL(SLinkList S, ElemType e);

/*
 * ��һά����space�и���������һ����������space[0].curΪͷָ�룬
 * ��0����ʾ��ָ��
 */
void InitSpace_SL(SLinkList &space);


//  �����ÿռ�����ǿգ��򷵻ط���Ľڵ��±꣬���򷵻�0
int Malloc_SL(SLinkList &space);


// ���±�Ϊk�Ŀ��н����յ���������
void Free_SL(SLinkList &spce, int k);


/*
 * �������뼯��A�ͼ���B��Ԫ�أ���һά����space�н�����ʾ���ͣ�A-B��U��B-A��
 * �ľ�̬�б�SΪ��ͷָ�롣���豸�ÿռ��㹻��space[0].curΪ��ͷָ�롣
 */
void difference(SLinkList &space, int &S);