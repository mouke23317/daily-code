#ifndef _LIST_LINE_H
#define _LIST_LINE_H
#include <stdio.h>
#include <stdbool.h>
#define MAXSIZE 1000
#define ERROR -1
typedef int ElementType;
typedef int Position;
typedef struct List_Line
{
    ElementType Data[MAXSIZE];
    Position Last;
}LL, *PLL;

PLL List_create();//创建新的线性表
ElementType  FindKth(PLL L, int i);//寻找表中第i个元素
Position Find_key(PLL L, ElementType X);//寻找元素X
bool Inster(PLL L,ElementType X, int i);//指定位序插入元素
bool Delete(PLL L, int i);//删除指定位序的元素
bool isfull(PLL L);//判断是否表满
bool isillegal(PLL L, int i, int iden);//检查位序是否不合法，iden是识别号，检测是添加元素还是删除元素调用，增加与删除执行的方式不一样

//测试用
void input(PLL L);
void output(PLL L);
void worktxt(PLL L);
#endif