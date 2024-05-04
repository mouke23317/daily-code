#include "Node_Linear_List.h"
Position Find_Kth(PNLL L, Key Kth, couple compare)
{
    Position p;
    int i;
    p = L;
    
    if (cheak (L, Kth, compare))
    {
        for (i = 1 ; i != Kth ; i++)
        {
            p = p->Next;
        }
        return p;
    }
    return NULL;
}