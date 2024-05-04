#include "Linear_List.h"
bool Delete(PLL L, int i)
{
    Position j;

    if(isillegal(L, i, 1))//判断位序合法性
    return false;

    for(j = i ; j <= L->Last ; j++)
        L->Data[j-1] = L->Data[j];
    L->Last--;
    return true;

}