#include <stdio.h>
#include <stdlib.h>
#include "Process_Scheduling.h"
void Output_test_PCB_Node_Info(p_PCB First_Var, int* NUM_Items)
{
    int i;
    p_PCB Second_Var = First_Var -> Next;
    for (i = 0; i < *NUM_Items; i++)
    {
        printf("\n");
        printf("PCB_Name = %c%c\n", Second_Var -> PCB_Name[0], Second_Var -> PCB_Name[1]);
        printf("PCB_Time = %d\n", Second_Var -> PCB_Time);
        printf("PCB_Run_priority = %d\n", Second_Var -> PCB_Run_priority);
        printf("PCB_Condition = %c\n", Second_Var -> PCB_Condition);
        Second_Var = Second_Var -> Next;
    }
    printf("Last_Naxt = %p\n", Second_Var);
    free (First_Var);
    free(Second_Var);
}