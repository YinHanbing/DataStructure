#pragma once

#include "../../definition.h"

//  ----- ѭ�����С����������е�˳��洢�ṹ -----

// QElemType�Ƕ���Ԫ�ص�����
typedef int QElemType;

// �����г���
#define MAXQSIZE 5	
typedef struct {
	QElemType *base;	//	��ʼ���Ķ�̬���䴢��ռ�
	int front;		// ͷָ�룬�����в��գ�ָ�����ͷԪ��
	int	rear;	// βָ�룬�����в��գ�ָ�����βԪ�ص���һ��λ��
}SqQueue;

/*
* �����в��գ���ɾ��Q�Ķ�ͷԪ�أ���e������ֵ��������OK
* ���򷵻�ERROR
*/
Status DeQueue(SqQueue &Q, QElemType &e);