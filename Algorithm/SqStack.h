#pragma once

#include "definition.h"
#include "SqBiTree.h"

// 栈的顺序储存表示
#define STACK_ININ_SIZE 5   // 储存空间初始分配量
#define STACKINSERMENT 2    // 储存空间分配增量

//typedef int SElemType;
typedef BiTree SElemType;

typedef struct{
    SElemType *base;    // 在栈构造之前和销毁之后，base的值为NULL
    SElemType *top;     // 栈顶指针
    int stacksize;      // 当前已分配的储存空间，以元素为单位
}SqStack;

// 构造一个空栈
Status InitStack (SqStack &S);      

// 销毁栈S，S不再存在
Status DestoryStack(SqStack &S);    

// 把S置为空栈
Status ClearStack(SqStack &S);      

// 若S为空栈，则返回TURE，否则返回FALSE
Status StackEmpty(SqStack S);

// 返回S的元素个数，即栈的长度
Status StackLength(SqStack S);

// 若栈不空，则用e返回S的栈顶元素，并返回OK；否则返回ERROR
Status GetTop(SqStack S, SElemType &e);

// 插入元素e为新的栈顶元素
Status Push(SqStack &S, SElemType e);

// 若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK，否则返回ERROR
Status Pop(SqStack &S, SElemType &e);

// 从底栈到顶栈依次对栈中每个元素调用函数Visit()。一旦发现Visit()失败，则操作失败
Status StackTraverse(SqStack S, Status (*Visit)());


