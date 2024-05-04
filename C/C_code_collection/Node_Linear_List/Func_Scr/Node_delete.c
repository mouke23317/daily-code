#include "Node_Linear_List.h"
#include <malloc.h>
PtrToNode Node_delete(PtrToNode L, Key Kth)
{
    PNLL p, tmp;
    couple compare = Node_list_Length(L);
    if (Kth == 1)
    {
        L = L -> Next;
        return L;
    }
    else
    {
        if (!(cheak(L, Kth, compare)))
           return NULL;
        else
        {
           p = Find_Kth(L, Kth, compare);
           tmp = p -> Next;
           p -> Next = p ->Next -> Next;
           if (tmp)
           free (tmp);
           return L;
        }
    }
}