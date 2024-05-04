#include "subnet_division.h"
unsigned int subnet_workout(unsigned int division_num)
{
    unsigned int cnt;
    unsigned int index;
    for (cnt = 0, index = 1;index < division_num;cnt++)
    index <<= 1;
    
    return cnt;
}