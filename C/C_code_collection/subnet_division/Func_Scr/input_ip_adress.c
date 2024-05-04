#include "subnet_division.h"
void input_ip_adress (unsigned int subnet_num[])
{
    int i;
    
    for(i = 0;i < 4;i++)                //收集ip地址
    {
        scanf("%d", &subnet_num[i]);
        getchar();
    }
}
