#include "LinkList.h"

/*
 * LΪ��ͷ�ڵ�ĵ������ͷָ��
 * ����i��Ԫ�ز�����ʱ����ֵ����e������OK�����򷵻�ERROR
 */

Status GetElem_L(LinkList L, int i, ElemType &e) {
LinkList p = L -> next; int j = 1;   // ��ʼ����pָ���һ���ڵ㣬jΪ������
//LNode *p = L->next; int j = 1;

while (p && j < i) {     //˳ָ�������ң�ֱ��pָ���i��Ԫ�ػ�pΪ��
    p = p ->next; ++j;
}

if (!p || j > i) {   // ��i��Ԫ�ز�����
    return ERROR;
    e = p -> data;  //ȡ��i��Ԫ��   
    return OK;
}
}// GetElem_L