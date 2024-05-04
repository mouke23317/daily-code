#include "subnet_division.h"
unsigned int iden_subnet_end(unsigned int mask_num)
{
    if ((mask_num % 8) == 0)
    return (mask_num / 8) - 1;
    else
    return (mask_num / 8);
}