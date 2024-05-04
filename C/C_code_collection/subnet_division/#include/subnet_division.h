#include <stdio.h>
void input_ip_adress (unsigned int subnet_num[]);
void work_adress_mask (unsigned int subnet_mask[], unsigned int mask_num);
void output (unsigned int output_arr[]);
void subnet_list (unsigned int subnet_num[], unsigned int mask_num, unsigned int cnt,unsigned int division_num);
unsigned int subnet_workout(unsigned int division_num);
unsigned int Binary_and(unsigned num, unsigned num_sec);
unsigned int work_network_num (unsigned int subnet_num[], unsigned int subnet_num_sec[], int iden);
unsigned int iden_subnet_end(unsigned int mask_num);


//功能说明
//void input_ip_adress         收集ip地址信息
//void work_adress_mask        通过cidr后缀计算子网掩码
//void output                  输出ip信息
//void subnet_list             计算并列举cidr地址快子网
//unsigned int subnet_workout  计算子网所需位数
//unsigned int Binary_and      转化为二进制并相与,找出差异点
//unsigned int work_network_num计算网络号后缀
//unsigned int iden_subnet_end 识别网络号结尾