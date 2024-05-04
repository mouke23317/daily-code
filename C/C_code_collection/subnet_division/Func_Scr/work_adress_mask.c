void work_adress_mask (unsigned int subnet_mask[], unsigned int mask_num)
{
    int i ,j;

    for(i = 0;i < (mask_num / 8);i++)  //确定前面全1部分的子网掩码
    subnet_mask[i] = 255;


    if((mask_num % 8) != 0)            //如果存在余数，就对尾号子网掩码进行计算
    {
        int translation = 256;         //移位中转
        for(j = i, i = 0;i < (mask_num % 8);i++)
        {
            translation >>= 1;        //每次循环移位一次，次数由后缀mod8余数决定
            subnet_mask[j] += translation;
        } 
    }
}