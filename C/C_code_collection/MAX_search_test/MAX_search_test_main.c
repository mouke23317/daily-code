#include <stdio.h>1
#include "MAX_LIM.h"//ʹ���Լ���ͷ�ļ���""

int main (void)
{
    int a = 1;
    int b = 9;
    scanf("%d %d",&a,&b);
    int C = MAX_fun(a,b);
    printf("%d\n",C);
    printf("%d",MAX_LIM);
    int c=test(a);
    printf("%d",c);

    return 0;
}