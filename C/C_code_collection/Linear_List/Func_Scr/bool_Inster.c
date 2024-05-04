#include "Linear_List.h"
bool Inster(PLL L,ElementType X, int i)//将元素X插入位置i
{
    Position j;

    if(isfull(L) || isillegal(L, i, 2))//判断是否表满，位序是否不合法
        return false;

    for(j = L->Last ; j >= i-1 ; j--)
        L->Data[j+1] = L->Data[j];
    L->Data[i-1] = X;
    L->Last++;
    return true;
}