#pragma once

#include "definition.h"

// ջ��˳�򴢴��ʾ
#define STACK_ININ_SIZE 5   // ����ռ��ʼ������
#define STACKINSERMENT 2    // ����ռ��������

typedef struct{
    SElemType *base;    // ��ջ����֮ǰ������֮��base��ֵΪNULL
    SElenType *top;     // ջ��ָ��
    int stacksize;      // ��ǰ�ѷ���Ĵ���ռ䣬��Ԫ��Ϊ��λ
}SqStack;

// ����һ����ջ
Status InitStack (SqStack &S);      

// ����ջS��S���ٴ���
Status DestoryStack(SqStack &S);    

// ��S��Ϊ��ջ
Status ClearStack(SqStack &S);      

// ��SΪ��ջ���򷵻�TURE�����򷵻�FALSE
Status StackEmpty(SqStack S);

// ����S��Ԫ�ظ�������ջ�ĳ���
Status StackLength(SqStack S);

// ��ջ���գ�����e����S��ջ��Ԫ�أ�������OK�����򷵻�ERROR
Status GetTop(SqStack S, SElemType &e);

// ����Ԫ��eΪ�µ�ջ��Ԫ��
Status Push(SqStack &S, SElemType e);

// ��ջ���գ���ɾ��S��ջ��Ԫ�أ���e������ֵ��������OK�����򷵻�ERROR
Status Pop(SqStack &S, SElemType &e);

// �ӵ�ջ����ջ���ζ�ջ��ÿ��Ԫ�ص��ú���visit()��һ������visit()ʧ�ܣ������ʧ��
Status StackTraverse(SqStack S, Status((*visit)());


