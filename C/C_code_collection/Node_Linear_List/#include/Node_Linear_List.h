#include <stdio.h>
// #define ERROR -1
#include <stdbool.h>
#include <stdlib.h>
typedef int ElementType;//元素装载
typedef int Key;//按序列查找序列装载
typedef int couple;//个数

typedef struct Node_Linear_List* Position;//地址位置查找专用
typedef struct Node_Linear_List* PtrToNode;//指向下一个节点专用
typedef struct Node_Linear_List
{
    ElementType Data;
    PtrToNode Next;
}NLL, *PNLL;//节点定义专用

//一个集权行结构体，用于将所有首元素节点集成行
typedef struct Row_Node_Linear_list* Position_PRNLL;//指向节点专用
typedef struct Row_Node_Linear_list* PtrToNode_PRNLL;//指向下一个节点专用
typedef struct Row_Node_Linear_list//每行链表头节点
{
    couple Num_Node;       //每行元素个数
    PtrToNode Data_Head;  //指向每行的第一个元素节点
    PtrToNode_PRNLL Next_Head;  //指向下一行的元素节点
}Row_NLL, *Row_PNLL;



PNLL Node_create();// 创建节点函数
Position Find_Kth(PtrToNode L, Key Kth, couple compare);//按序查找，返回对应序列的地址
Position Find_key(PtrToNode L, ElementType X);//按照值查找节点，返回对应节点地址
PtrToNode search_inster_Node(PtrToNode L, ElementType X);
bool cheak(PNLL L, Key Kth, couple compare);//检查链表内是否存在该序列
PtrToNode Node_inster(PtrToNode L, ElementType X, Key Kth);//链表插入内容
PtrToNode Node_delete(PtrToNode L, ElementType X);//链表内容删除
int Node_list_Length(PtrToNode L);//计算链表长度
void Link_Node(PtrToNode L, couple num);
void output_list_element(PtrToNode L);
ElementType* Node_inster_elem(couple cnt);
PtrToNode Node_List_create(couple* num);
void meun();
char Simple_get_frist_char();
void eatchar();
Position search_list_rear(PNLL Front);
Position Node_unite(PNLL Front, PNLL Behind);
void input_filter(int* func_mamber);
void Row_Node_List_create(Row_PNLL Row_head, Position_PRNLL* Mid_Rear, PNLL L, couple num);
Row_PNLL Row_Node_List_read(Row_PNLL Row_Head, couple num);