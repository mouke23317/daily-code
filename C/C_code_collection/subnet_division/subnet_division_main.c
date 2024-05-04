#include "subnet_division.h"
int main(void)
{
    unsigned int cnt;                   //子网网络计数器
    unsigned int division_num;
    unsigned int i;
    unsigned int j;
    unsigned int mask_num;              //cidr后缀数字
    unsigned int subnet_num[4] = {0};              //ip地址数组
    unsigned int subnet_num_sec[4] = {0};
    unsigned int subnet_mask[4] = {0};             //通过后缀将子网掩码计算结果放在这

    printf("子网划分");
    printf("请输入您的cidr地址块:"); 
    input_ip_adress (subnet_num);        
    printf("请输入您的后缀数字:");                  //收集cidr后缀数字
    scanf("%d", &mask_num);
    printf("请输入您需要划分子网个数：");   
    scanf("%d", &division_num);  
    printf("\n子网划分为：");
    subnet_list (&subnet_num[iden_subnet_end(mask_num)], mask_num, subnet_workout(division_num), division_num);

    printf("\n确定网络号并输出子网掩码");
    printf("\n请输入您的ip地址:"); 
    input_ip_adress (subnet_num);                  //收集ip地址
    printf("请输入您的后缀数字:");                  //收集cidr后缀数字
    scanf("%d", &mask_num);           
    work_adress_mask (subnet_mask, mask_num);     //根据cidr计算子网掩码                    
    printf("您的子网掩码为：");
    output (subnet_mask);                         //输出子网掩码
    printf("\n您的网络号为：");                       
    work_network_num (subnet_mask, subnet_num, 0);  //按位相遇计算出网络号
    output (subnet_mask);                        //输出网络号


    printf("\n\n地址归纳");
    printf("\n请输入子网个数：");
    scanf("%d", &cnt);
    if(cnt > 1)
    {
         printf("请输入您的子网ip地址:");
         input_ip_adress (subnet_num);
         input_ip_adress (subnet_num_sec);
         for(i = 0;i < cnt - 1;i++)
         {
            mask_num = work_network_num (subnet_num, subnet_num_sec, 1);
            
            if(i < cnt - 2)
            input_ip_adress(subnet_num_sec);
         }
         printf("\n您的子网归纳为：");
         output(subnet_num);
         printf("/%d", mask_num);
     }
    return 0;
}
// if(i != 3)
//         {
//             printf(".");
//         }