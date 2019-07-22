/************************************
 *                                    *
 * �ļ���: 10_internal_sort            *
 *                                     *
 * �ļ���: InsertSort-main.c        *
 *                                     *
 * ��  ��: ֱ�Ӳ����������Functest *
 *                                  *
 ************************************/

#include <stdio.h>
#include "InsertSort.c"                         //**10_internal_sort**//

void PrintKey(KeyType e);

int main(int argc, char *argv[])
{
    SqList_sort L;

    printf("���������һ����������...\n");
    {
        FILE *fp;

        fp = fopen("TestData.txt", "r");
        CreateSortList(fp, &L);
        Traverse(L, PrintKey);
        printf("\n");
    }
    PressEnter;

    printf("1\nFunc InsertSort test...\n");    //1.FuncInsertSorttest
    {
        printf("���ؼ��ְ�����˳������...\n");
        InsertSort(&L);
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
