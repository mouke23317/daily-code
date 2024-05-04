#include "Node_Linear_List.h"
void input_filter(int* func_mamber)
{
    illegal_input: 
                scanf("%d", func_mamber);
                getchar();

    if(*func_mamber <= 0)
    {
        printf("非法输入，请重新输入");
        goto illegal_input;
    }
}