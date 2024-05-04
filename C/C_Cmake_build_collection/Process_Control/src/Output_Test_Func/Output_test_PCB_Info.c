#include <stdio.h>
void Output_test_PCB_Info(int* First_Var, int* Second_Var, int* NUM_Items)
{
    int i;
    printf("第一个变量%d\n", *First_Var);
    for (i = 0; i < *NUM_Items; i++)
    {
        printf("第二个变量%d\n", Second_Var[i]);
    }
}