#include "subnet_division.h"
void subnet_list (unsigned int subnet_num[], unsigned int mask_num, unsigned int cnt, unsigned int division_num)
{
    //subnet_num[]   网络号末端地址
    //mask_num     网络号后缀
    //cnt          子网位数
    //division_num 划分子网个数
    int add_subnet; //子网数形成以及位搬运
    int init;
    for (add_subnet = 0 ,init = *subnet_num ;add_subnet < division_num ;add_subnet++)
    {
        
        *subnet_num = (init | (add_subnet << (8 - (mask_num % 8) - cnt)));
        output (subnet_num - (mask_num / 8));
        printf ("\n");
    }
}