#include <stdio.h>
void PCB_Info_Input(int* Input_PCB_Time, int* Input_PCB_priority, int* NUM_Items)
{
    int i;
    char c = 0;
    printf("输入要求运行时间：");
    scanf("%d", Input_PCB_Time);

    printf("输入运行所有PCB的优先级（空格隔开）：");
    for (i = 0; i < *NUM_Items; i++)
    {
        if(scanf("%d", &Input_PCB_priority[i]) != 1);
    }
}

