#include"Node_Linear_List.h"
void Link_Node(PtrToNode L, couple num)
{
    Key i;//链表当前序列位
    ElementType X;//记录元素值
    Position previous = L;//指向前一个待链接结构体
    Position move;//移动辅助链接指针
    for (i = 1 ;i <= num ;i++)
    {
        scanf("%d", &X);
        getchar();
        if (i == 1)//特例装载第一个元素
        {
            L -> Data = X;
            //printf("第%d地址为：%p" , i, L);//测试
            continue;
        }

        move = Node_create();//创建节点
        //printf("\n第%d地址为：%p" , i, move);//测试
        move -> Data = X;
        previous -> Next = move;
        previous = move;
    }
}