 #include "Linear_List.h"
 void worktxt(PLL L)
 {
     int i = 0;
    int X = 0;
    PLL First = List_create();
    //测试
    printf("%p\n", First);
    printf("%d\n", sizeof(First->Data));

    input(First);
    output(First);
    i = 6;
    printf("\n请输入想插入的数值");
    scanf("%d", &X);
    Inster(First , X , i);
    output(First);
    printf("\n将会删除刚才插入的数值\n");
    Delete(First, i);
    output(First);

    printf("%d\n", i);
    printf("\n删除后，数列第6个是：\n");
    printf("\n%d", FindKth(First, i));
    printf("删除后，数列中第6个数的下标为\n");
    printf("\n%d", Find(First, 6));
 }
 