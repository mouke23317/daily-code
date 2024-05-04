#include <malloc.h>
#include "Node_Linear_List.h"
PtrToNode Node_create()
{
    PNLL L = (PNLL)malloc(sizeof(NLL));
    L->Next = NULL;
    return L;
}