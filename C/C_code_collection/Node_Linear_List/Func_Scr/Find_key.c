#include "Node_Linear_List.h"
Position Find_key(PNLL L, ElementType X)
{
    Position p = L;
    while (p && p->Data != X)
    {
        p = p->Next;
    }
    if (p)
    return p;
    else 
    return NULL;
}