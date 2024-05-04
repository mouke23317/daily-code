#include"Node_Linear_List.h"
ElementType* Node_inster_elem(couple cnt)
{
    couple i;//数组下标计数器
    ElementType* insert_elem;
    
    insert_elem = (ElementType*)malloc(cnt * sizeof(ElementType));
    
    //读入插入数据
    while(cnt > 0)
    {
       scanf("%d", &insert_elem[i]);
       cnt--;
       i++;
    }
    return  insert_elem;
}