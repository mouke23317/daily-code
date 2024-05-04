#include "subnet_division.h"
void output (unsigned int output_arr[])
{
    int i;
    for(i = 0;i < 4;i++)
    {
        printf("%d", output_arr[i]);
        if(i != 3)
        {
            printf(".");
        }
    }
}