#include "Linear_List.h"
ElementType  FindKth(PLL L, int i)//寻找第i个元素
{
    if( (i-1) <= L->Last )
    return  L->Data[i-1];
    else
    return ERROR;
}