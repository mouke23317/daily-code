#include "Linear_List.h"
//寻找元素X
Position Find(PLL L,ElementType X)
{
    Position i = 0;
    while(i <= L->Last && L -> Data[i] != X)
    i++;

    if(i > L->Last)
    return ERROR;
    else
    return i;
}