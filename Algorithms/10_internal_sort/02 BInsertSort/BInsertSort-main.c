/************************************
 *                                    *
 * 文件夹: 10_internal_sort            *
 *                                     *
 * 文件名: BInsertSort-main.c       *
 *                                     *
 * 内  容: 折半插入排序相关Functest *
 *                                  *
 ************************************/

#include <stdio.h>
#include "BInsertSort.c"     //**10_internal_sort**//

void PrintKey(KeyType e);

int main(int argc, char *argv[])
{
    SqList_sort L;

    printf("创建并输出一个任意序列...\n");
    {
        FILE *fp;

        fp = fopen("TestData.txt", "r");
        CreateSortList(fp, &L);
        Traverse(L, PrintKey);
        printf("\n");
    }
    PressEnter;

    printf("1\nFunc BInsertSort test...\n");    //1.FuncBInsertSorttest
    {
        printf("将关键字按递增顺序排列...\n");
        BInsertSort(&L);
        Traverse(L, PrintKey);
        printf("\n");
    }
    PressEnter;

    return 0;
}

void PrintKey(KeyType e)
{
    printf("%d ", e);
}
