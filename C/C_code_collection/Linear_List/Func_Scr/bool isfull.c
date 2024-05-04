#include "Linear_List.h"
bool isfull(PLL L)
{
    if (L->Last == MAXSIZE-1)
        return true;
    else
        return false;
}