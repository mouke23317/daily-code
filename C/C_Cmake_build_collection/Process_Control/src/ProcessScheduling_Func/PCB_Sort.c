#include "Process_Scheduling.h"
#include <stdio.h>
void PCB_Sort(p_PCB Head_p_PCB, int* NUM_Items)
{
    int i;
    int j;
    int k;
    
    p_PCB Assistan_p_PCB = Head_p_PCB;//已排序头
    p_PCB Pri_mobile_p_PCB = Assistan_p_PCB -> Next; //当前比较点的前一个节点
    p_PCB mobile_p_PCB = Assistan_p_PCB -> Next -> Next; //移动比较点
    p_PCB register_p_PCB = Assistan_p_PCB;   //存mobile的下一个
    for (i = 0; i < (*NUM_Items - 1); i++) //已走过的节点
    {
        for(j = 0; j < (((*NUM_Items) - i) - 1); j++) 
        {
            if ((Assistan_p_PCB -> Next -> PCB_Run_priority) < (mobile_p_PCB -> PCB_Run_priority))//大于的值立即换
            {
                register_p_PCB = mobile_p_PCB -> Next;
                // if (register_p_PCB == NULL)
                //     Pri_mobile_p_PCB == Pri_mobile_p_PCB;
                // else
                    Pri_mobile_p_PCB -> Next = mobile_p_PCB -> Next;
                mobile_p_PCB -> Next = Assistan_p_PCB -> Next;
                Assistan_p_PCB -> Next = mobile_p_PCB;
                mobile_p_PCB = register_p_PCB;
            }
            
            else
            {
                Pri_mobile_p_PCB = mobile_p_PCB;
                mobile_p_PCB = mobile_p_PCB -> Next;
            }
        }
        
        //迭代
        Assistan_p_PCB = Assistan_p_PCB -> Next;
        mobile_p_PCB = Assistan_p_PCB -> Next -> Next;
        Pri_mobile_p_PCB = Assistan_p_PCB -> Next;
    }
    
}