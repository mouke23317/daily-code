#include "Node_Linear_List.h"
#include <malloc.h>
 PtrToNode Node_inster(PtrToNode L, ElementType X, Key Kth)
{
    PNLL p;//临时操作指针
    PNLL tmp;//节点中转指针
    couple compare = Node_list_Length(L);
    tmp = Node_create();//创建节点
    tmp -> Data =  X;
    if (Kth == 0)
    {
        tmp ->Next = L;//旧的链表头变成新链表头的下一个节点
        return tmp;
    }
    else
    {
        if (cheak(L, Kth, compare))
        {
            p = Find_Kth(L, Kth, compare);//按序查找，返回节点地址
            tmp -> Next = p -> Next;//让新结点的指针域指向插入节点的后一节点
            p -> Next = tmp;//让插入节点的指针域指向新结点
            compare++;
            return L;
        }
        else
        {
            free(tmp);
            return NULL;
        }
    
    }
}