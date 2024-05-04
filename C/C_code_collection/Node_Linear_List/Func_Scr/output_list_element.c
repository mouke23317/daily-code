#include "Node_Linear_List.h"
void output_list_element(PtrToNode L)
{
    Key i;
    PNLL output = L;
    for (i = 1 ;output != NULL ;i++)
    {
     printf("\n第%d个元素：%d" ,i ,output -> Data);
     output = output-> Next;
    }
    printf("\n");
}