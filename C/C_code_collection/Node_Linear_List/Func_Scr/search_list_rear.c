#include "Node_Linear_List.h"
Position search_list_rear(PNLL Front)
{
    PtrToNode tmp = Front;

    while(tmp -> Next != NULL)
    {
    tmp = tmp -> Next;
    }
    return tmp;
}