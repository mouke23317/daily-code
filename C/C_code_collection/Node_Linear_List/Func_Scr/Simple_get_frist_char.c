#include "Node_Linear_List.h"
char Simple_get_frist_char()
{
    char elem;
    int cnt = 0;

    while((elem = getchar()) != '\n')
    {
        if((elem >= 65 && elem <= 90) || (elem >= 97 && elem <= 122))
        {
            eatchar();
            return elem;
        }
    }
    printf("\n非法输入，程序结束\n");
    return -1;
}