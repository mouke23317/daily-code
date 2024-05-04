#include "subnet_division.h"
unsigned int work_network_num (unsigned int subnet_num[], unsigned int subnet_num_sec[], int iden)
{
    int i;
    int flag = iden;//iden是识别号，用于确定是否需要计算差异点位置
    unsigned int cnt;

    for(i = 0;i < 4;i++)
    {
        if (flag == 1 && subnet_num[i] != subnet_num_sec[i])
        {
        cnt = Binary_and(subnet_num[i], subnet_num_sec[i]);//将数值化为二进制并进行差异点检测，
        flag = 0;//差异点计算函数进入识别
        cnt += i * 8;
        }
        subnet_num[i] = subnet_num[i] & subnet_num_sec[i];//按位相与获得结果  
    }
    return  cnt;//返回网络号后缀数字
}