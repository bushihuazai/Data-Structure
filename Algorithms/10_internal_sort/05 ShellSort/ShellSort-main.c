/********************************
 *                                *
 * �ļ���: 10_internal_sort        *
 *                                 *
 * �ļ���: ShellSort-main.c     *
 *                                 *
 * ��  ��: ϣ���������Functest *
 *                              *
 ********************************/

#include <stdio.h>
#include "ShellSort.c"        //**10_internal_sort**//

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

    printf("1��2\nFunc ShellSort test...\n");    //1��2.FuncShellSorttest
    {
        printf("���ؼ��ְ�����˳������...\n");
        ShellSort(&L, dlta, t);
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
