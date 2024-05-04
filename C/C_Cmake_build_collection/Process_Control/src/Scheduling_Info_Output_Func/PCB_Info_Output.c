#include <stdio.h>
#include "Process_Scheduling.h"
void PCB_Info_Output(p_PCB Head_p_PCB)
{
    p_PCB Assistant = Head_p_PCB -> Next;
    while (Assistant -> Next != NULL)
    {
        printf("\n%c%c就绪\n运行次数%d\n运行优先级%d\n", 
        Assistant -> PCB_Name[0], Assistant -> PCB_Name[1],Assistant -> PCB_Time, Assistant -> PCB_Run_priority);
        Assistant = Assistant -> Next;
    }
}

