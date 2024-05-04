#include "Node_Linear_List.h"
bool cheak(PNLL L,Key Kth, couple compare)
{
     if (Kth > 0 && (Kth <= compare))
    {
        return true;
    }
    return false;
    printf("不存在该位置。\n");
}