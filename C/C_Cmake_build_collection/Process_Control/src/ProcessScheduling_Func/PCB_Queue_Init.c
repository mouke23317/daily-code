#include "Process_Scheduling.h"
#include <stdio.h>
#include <stdlib.h>
p_PCQ PCB_Queue_Init(p_PCQ Queue_First, p_PCB Head_p_PCB, int* NUM_Items)
{
    Queue_First = (p_PCQ)malloc(sizeof(PCQ));
    Queue_First -> Front = Head_p_PCB;
    p_PCB Assistant_p_PCB = Queue_First -> Front;

    Queue_First -> Queues_Ele_NUM = (*NUM_Items);

    //找队尾
    while ((Assistant_p_PCB -> Next) != NULL)
    {
        Assistant_p_PCB = Assistant_p_PCB -> Next;
    }
    Queue_First -> Rear = Assistant_p_PCB;
    return Queue_First;
}