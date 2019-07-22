/***********************************
 *                                   *
 * 文件夹: 10_internal_sort           *
 *                                    *
 * 文件名: SequenceListType-main.c *
 *                                    *
 * 内  容: 顺序表相关Functest      *
 *                                 *
 ***********************************/

#include <stdio.h>
#include "SequenceListType.c"     //**10_internal_sort**//

void PrintKey(KeyType e);

int main(int argc, char *argv[])
{
    SqList_sort L;

    printf("1、2\nFunc CreateSortList等 test...\n");    //1、2.FuncCreateSortList等test
    {
        FILE *fp;

        printf("创建并输出一个任意序列...\n");
        fp = fopen("TestData.txt", "r");
        CreateSortList(fp, &L);
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
