#include "Node_Linear_List.h"
PtrToNode Node_List_create(couple *num)
{
    PtrToNode L = Node_create();//初始化一个头节点
    Link_Node(L, *num);//链接各个节点
    return L;
}