#include "Process_Scheduling.h"
#include <stdlib.h>
#include <stdio.h>
p_PCB PCB_init(p_PCB Head_p_PCB, int NUM_items, int NUM_time, int* NUM_priority)
{
    int i = 0;
    int Block_num = 49;
    Head_p_PCB = (p_PCB)malloc(sizeof(PCB)); //头节点，没有有效内容
    if (Head_p_PCB == NULL)
        {
            perror("Memory allocation failed");
            return NULL;
        } 

    p_PCB mobile_p_PCB = Head_p_PCB;              //节点移动助手,初始位置为头节点
    p_PCB Assistant_p_PCB = NULL;           //构建链表助手

    for (i = 0; i < NUM_items; i++)    
    {
        Assistant_p_PCB = (p_PCB)malloc(sizeof(PCB)); //新节点创建
        printf("\n地址:%p", Assistant_p_PCB);
      

        if (Assistant_p_PCB == NULL)
        {
            perror("Memory allocation failed");
            return NULL;
        }

        //初始化PCB名字
        int Name_num = 0;
        Assistant_p_PCB -> PCB_Name[Name_num] = 112;
        
        Name_num++;
        Assistant_p_PCB -> PCB_Name[Name_num] = Block_num;
        
        Block_num++;
        


        //初始化剩下3个变量
        Assistant_p_PCB -> PCB_Run_priority = NUM_priority[i];
       
        Assistant_p_PCB -> PCB_Time = NUM_time;
        
        Assistant_p_PCB -> PCB_Condition = 69;//初始为‘E’结束状态

        //链接节点
        mobile_p_PCB -> Next = Assistant_p_PCB;
        Assistant_p_PCB -> Next = NULL;
        mobile_p_PCB = Assistant_p_PCB;
    }
    p_PCB S_Head_p_PCB = Head_p_PCB;
     for (i = 0; i < NUM_items; i++)
    {
        printf("%p\n", S_Head_p_PCB);
        S_Head_p_PCB = S_Head_p_PCB -> Next;
    }
    return Head_p_PCB;
}

