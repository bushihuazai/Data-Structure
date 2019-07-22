/*****************************
*                            *
* 文件夹: 09_search          *
*                            *
* 文件名: Base-main.c        *
*                            *
* 内  容: 查找表相关Functest *
*                            *
******************************/

#include <stdio.h>
#include "Base.c"                                     //**09_search**//

/* 宏定义 */
#define Max 10                                        //查找表中元素个数 

void Print(ElemType_Search e);
//输出有序表中的关键字和其他域

int main(int argc, char *argv[])
{
    FILE *fp;
    Table T;

    printf("1\nFunc Create test...\n");            //1.FuncCreatetest
    printf("创建一个查找表...\n");
    fp = fopen("TestData_Table.txt", "r");
    Create(fp, &T, Max);
    printf("\n");
    PressEnter;

    printf("3\nFunc Traverse test...\n");        //3.FuncTraversetest
    printf("输出查找表信息...\n");
    Traverse(T, Print);
    printf("\n");
    PressEnter;

    printf("4\nFunc PrintKey test...\n");        //4.FuncPrintKeytest
    printf("输出查找表关键字...\n");
    Traverse(T, PrintKey);
    printf("\n");
    PressEnter;

    printf("2\nFunc DeTory test...\n");            //2.FuncDeTorytest
    printf("销毁有序表...\n");
    Destory(&T);
    printf("有序表");
    T.elem == NULL &&T.length == 0 ? printf("已被") : printf("未被");
    printf("销毁!\n");
    printf("\n");
    PressEnter;

    return 0;
}

void Print(ElemType_Search e)
{
    printf("(%3d, %.1f) ", e.key, e.weight);
}
