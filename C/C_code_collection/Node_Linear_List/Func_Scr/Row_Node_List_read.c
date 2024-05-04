#include"Node_Linear_List.h"
Row_PNLL Row_Node_List_read(Row_PNLL Row_Head, Key Kth)
{
    couple cnt;
    Row_PNLL assisitant = Row_Head -> Next_Head;
    for(cnt = 1; cnt <= Kth; cnt++)
    {
        printf("Next%0X, Data%0X, Num%d",assisitant -> Next_Head, assisitant -> Data_Head, assisitant -> Num_Node);
        assisitant = assisitant -> Next_Head;//迭代
    }
    return assisitant;
}