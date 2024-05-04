#include <stdio.h>
#include <stdlib.h>
#include "Process_Scheduling.h"
#include "Input.h"
#include "Output.h"
#include "Test.h"
#include <windows.h>
int main(void)
{
    int NUM_items = 5;
    int i;
    int NUM_time = 0;
    int NUM_priority[NUM_items];
    p_PCQ Queue_First;
    p_PCB Head_p_PCB = NULL;
    for (i = 0; i < 5; i++)
    {
        NUM_priority[i] = 0;
        printf("%0x\n", &NUM_priority[i]);
    }
    
    PCB_Info_Input(&NUM_time, NUM_priority, &NUM_items); //输入块信息
    //Output_test_PCB_Info(&NUM_time, NUM_priority, &NUM_items);
    Head_p_PCB = PCB_init(Head_p_PCB, NUM_items, NUM_time, NUM_priority);  //建立块并将信息注入块
    //Output_test_PCB_Node_Info( Head_p_PCB, &NUM_items);
    PCB_Sort(Head_p_PCB, &NUM_items);
    Queue_First = PCB_Queue_Init(Queue_First, Head_p_PCB, &NUM_items);
    PCB_Queue_Control(Queue_First);
    return 0;
}