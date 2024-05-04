#include "Node_Linear_List.h"
Position Node_unite(PNLL Front, PNLL Behind)
{
    PtrToNode tmp = search_list_rear(Front);//找到头部数组尾部
    tmp -> Next = Behind;//头部尾部链接后部数组
}