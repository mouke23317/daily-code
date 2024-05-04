#ifndef PROCESS_SCHEDULING_H
#define PROCESS_SCHEDULING_H
typedef char Process_Char; //文字状态
typedef int Process_NUM;   //数字状态
typedef struct Process_Control_Block* p_Next_PCB;
typedef struct Process_Control_Block
{
    Process_Char PCB_Name[2];
    Process_NUM PCB_Time;
    Process_NUM PCB_Run_priority;
    Process_Char PCB_Condition;

    p_Next_PCB Next;//指向下一个节点专用

}PCB, *p_PCB;/*节点指针定义专用*/

typedef struct Process_Control_Queue
{
    p_PCB Front;  //指向已经出队节点，其下一个是就绪节点
    p_PCB Rear;   //队尾节点，目前优先值最低节点
    Process_NUM Queues_Ele_NUM;
}PCQ, *p_PCQ;

p_PCB PCB_init(p_PCB Array_p_PCB, int NUM_items, int NUM_time, int* NUM_priority);
void PCB_Sort(p_PCB Head_p_PCB, int* NUM_Items);
p_PCQ PCB_Queue_Init(p_PCQ Queue_First, p_PCB Head_p_PCB, int* NUM_Items);
void PCB_Queue_Control(p_PCQ Queue_First);

#endif



