#include "Linear_List.h"
void input(PLL L)
{
    int i;
    for(i=0 ; i < 10 ; i++)
    {
        scanf("%d", &L->Data[i]);
        L->Last++;
    }
}