#include "Node_Linear_List.h"
int Node_list_Length(PNLL L)
{
    Position p;//临时接收链表头节点地址变量
    int cnt = 0;//计数器
    p = L;
    while (p)
    {
        cnt++;
        p = p ->Next;
    }
    return cnt;
}