#include "Linear_List.h"
bool isillegal(PLL L, int i, int iden)
{
    if(i < 0 || i > (L->Last+iden))
        {
            printf("位序不合法\n");
            return true;
        }
   return false;
}