#include <stdio.h>
#include <stdlib.h>
#include "Process_Scheduling.h"
#include "Output.h"
void PCB_Queue_Control(p_PCQ Queue_First)
{
    p_PCB Counter = Queue_First -> Front; //迭代
    p_PCB Assistant = Queue_First -> Front -> Next; //队头有效节点
    p_PCB Head_Shadow = Queue_First -> Front;
    int NUM_Item = Queue_First -> Queues_Ele_NUM;
    

    printf("\n目前队头节点：%c%c", Assistant -> PCB_Name[0], Assistant -> PCB_Name[1]);
    while (Counter -> Next != NULL)
    {
        //运行模拟
        printf("\n%c%c就绪,运行次数%d,运行优先级%d", Assistant -> PCB_Name[0], Assistant -> PCB_Name[1],
          Assistant -> PCB_Time, Assistant -> PCB_Run_priority);

        Assistant -> PCB_Condition = 82; //就绪
        (Assistant -> PCB_Run_priority)--;
        (Assistant -> PCB_Time)--;
        //结束
        printf("\n%c%c结束运行,运行次数还有%d,运行优先级降为%d", Assistant -> PCB_Name[0], Assistant -> PCB_Name[1],
          Assistant -> PCB_Time, Assistant -> PCB_Run_priority);

        Assistant -> PCB_Condition = 69;
       

        if ((Assistant -> PCB_Time) != 0)
        {
            PCB_Sort(Queue_First -> Front, &NUM_Item); //还有运行时间就排序
            Assistant = Head_Shadow -> Next;
            printf("\n当前队列情况：");
            printf("\n队头节点更改为%c%c", Assistant -> PCB_Name[0], Assistant -> PCB_Name[1]);
           

        }

        else
        {
            Head_Shadow -> Next = Assistant -> Next;
            p_Next_PCB Dele = Assistant;
            free(Dele);
            Assistant = Head_Shadow -> Next;
            NUM_Item--;
            printf("\n节点%c%c运行时间为0，出队", Assistant -> PCB_Name[0], Assistant -> PCB_Name[1]);
        }
        int i;
        //更新队尾
        p_PCB rear_update = Head_Shadow;
        while ((rear_update -> Next) != NULL)
            rear_update = rear_update -> Next;
            Queue_First -> Rear = rear_update;
        printf("\n队尾节点目前为%c%c", Queue_First -> Rear -> PCB_Name[0], Queue_First -> Rear -> PCB_Name[1]);
            
    }
}

// printf("\n目前队头节点：%c%c", Assistant -> PCB_Name[0], Assistant -> PCB_Name[1]);
//      printf("\n%c%c就绪,运行次数%d,运行优先级%d", Assistant -> PCB_Name[0], Assistant -> PCB_Name[1],
//          Assistant -> PCB_Time, Assistant -> PCB_Run_priority);
//           printf("\n%c%c结束运行,运行次数还有%d,运行优先级降为%d", Assistant -> PCB_Name[0], Assistant -> PCB_Name[1],
//          Assistant -> PCB_Time, Assistant -> PCB_Run_priority);
//           printf("\n队头节点更改为%c%c", Assistant -> PCB_Name[0], Assistant -> PCB_Name[1]);
//             printf("\n%c%c就绪,运行次数%d,运行优先级%d", Assistant -> PCB_Name[0], Assistant -> PCB_Name[1],
//             Assistant -> PCB_Time, Assistant -> PCB_Run_priority);
//                         printf("\n队尾节点目前为%c%c", Queue_First -> Rear -> PCB_Name[0], Queue_First -> Rear -> PCB_Name[1]);
//             printf("\n节点%c%c运行时间为0，出队", Assistant -> PCB_Name[0], Assistant -> PCB_Name[1]);
