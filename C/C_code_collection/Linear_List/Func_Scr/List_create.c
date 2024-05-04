//创建新的线性表
#include "Linear_List.h"//创建新的线性表
#include <malloc.h>
PLL List_create()
{
    PLL L;
    L=(PLL)malloc(sizeof(LL));
    L->Last = -1;
    return L;
}