#include"Node_Linear_List.h"
 void Row_Node_List_create(Row_PNLL Row_head, Row_PNLL* Mid_Rear, PNLL L, couple num)
{
    Row_PNLL assisitant = *Mid_Rear;//助理指针，始终指向表尾
    PtrToNode_PRNLL new = (PtrToNode_PRNLL)malloc(sizeof(Row_NLL));//指向新节点
    assisitant -> Next_Head = new;
    new -> Data_Head = L;
    new -> Next_Head = NULL;
    new -> Num_Node = num;
    *Mid_Rear = assisitant -> Next_Head;
 }