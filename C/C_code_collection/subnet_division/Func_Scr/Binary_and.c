unsigned int Binary_and(unsigned num, unsigned num_sec)
{
    unsigned int cnt;
    
    for (cnt = 0;(!!(num << cnt & 0X80)) ^ (!!(num_sec << cnt & 0X80)) != 1; cnt++);
    //从左往右读取num二进制位数值并和num_sec二进制位数值并转化，按位相异或
    return cnt;
}