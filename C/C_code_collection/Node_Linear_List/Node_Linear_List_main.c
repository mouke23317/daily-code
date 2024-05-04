#include "Node_Linear_List.h"
int main(void)
{
    char choose = '0';
    PtrToNode Frist = NULL;
    Row_NLL Row_Head;//行链表头节点
    Position_PRNLL Mid_Rear =  &Row_Head;//记录当前行链表尾
    couple count = 0;//链表行数计数器

    meun();       //初始化菜单    
    choose = Simple_get_frist_char();//获取字符串中第一个字符
    do{
        
        ElementType X;//链表插入元素装载容器
        Key Kth;      //按需查找数
        couple cnt;   //记录元素个数或次数计数器
        couple row_cnt = 0;//记录顺序表行数
        couple num = 0;//记录元素个数
        couple inster_num = 0;
        
        switch(choose)
        {
            case'a'://创建链表
            case'A':
            {
                printf("输入元素个数：");
                scanf("%d" ,&num);
                getchar();
                Frist = Node_List_create(&num); 
                printf("\n元素压入");           //测试
                output_list_element(Frist);     //测试
                Row_Node_List_create(&Row_Head, &Mid_Rear, Frist, num);//链表入行,这是一个有头节点的行链表
                count++;
                Row_Node_List_read(&Row_Head, count);

                //测试块
                 int i = 0;
                Position_PRNLL test = &Row_Head;
                while(i < count)
                {

                    printf("\n%0X", test -> Next_Head);
                    printf("\n%0X\n", test -> Next_Head -> Data_Head);
                    test = test -> Next_Head;   
                    i++;
                }
                break;
            }

            case'b'://插入元素
            case'B':
            {
                couple inster_num = 0;
                couple compare = Node_list_Length(Frist);
                printf("\n请输入要插入元素个数：");
                input_filter(&inster_num);//不能为负数
                printf("\n请输入要插在第几个元素前面：");
                input_filter(&Kth);//不能为负数
                    
                if(inster_num == 1)//单个插入
                {
                    printf("\n请输入要插入的值:");
                    scanf("%d", &X);
                    getchar();
                    Node_inster(Frist, X, Kth-1);
                    Row_PNLL Node = Row_Node_List_read(&Row_Head, count);//读取该序数的节点
                    Node -> Num_Node++;
                }
                else if(inster_num > 1)//多个插入
                {
                    //默认从指定元素从前面插入
                        //头插
                    if(Kth == 1)
                    {
                        printf("输入元素个数：");
                        scanf("%d" ,&num);
                        getchar();
                        PNLL Second = Node_List_create(&num);
                        printf("\n元素压入");           //测试
                        output_list_element(Second);    //测试

                        Node_unite(Second, Frist);
                        Frist = Second;
                        Row_PNLL Node = Row_Node_List_read(&Row_Head, cnt);//读取该序数的节点
                        Node -> Num_Node += inster_num;
                        printf("\n当前序列");           //测试
                        output_list_element(Frist);     //测试
                        break;
                    }
                    int cnt;
                    for(cnt = 0; cnt <= inster_num; cnt++, Kth++)
                    {
                        if(Kth == compare)//尾插
                        {
                            PNLL Second = Node_create();
                            printf("\n元素压入");           //测试
                            output_list_element(Frist);     //测试
                            Node_unite(Frist, Second);
                            Row_PNLL Node = Row_Node_List_read(&Row_Head, cnt);//读取该序数的节点
                            Node -> Num_Node += inster_num;
                            printf("\n%0X", Node -> Num_Node);
                        }

                        else
                        {
                            printf("请输入插入元素：");//中间插
                            scanf("%d", &X);
                            getchar();
                            Node_inster(Frist, X, Kth - 1);
                            Row_PNLL Node = Row_Node_List_read(&Row_Head, cnt);//读取该序数的节点
                            Node -> Num_Node += inster_num;
                            printf("\n%0X", Node -> Num_Node);
                        }
                    }
                }
            }
            // case 'c':
            // case 'C'://更改元素
            // {
            //     //更改元素
            // }
            // case 'd':
            // case 'D'://查询元素
            case 'q':
            case 'Q':
            break;//退出循环
        }
    choose = Simple_get_frist_char();
    }while((choose != 'q') && (choose != 'Q'));
    return 0;
}
