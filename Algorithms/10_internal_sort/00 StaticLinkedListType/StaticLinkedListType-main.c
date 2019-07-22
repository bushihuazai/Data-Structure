/***************************************
 *                                       *
 * �ļ���: 10_internal_sort               *
 *                                        *
 * �ļ���: StaticLinkedListType-main.c *
 *                                        *
 * ��  ��: ��̬�������Functest        *
 *                                     *
 ***************************************/

#include <stdio.h>
#include "StaticLinkedListType.c"     //**10_internal_sort**//

void PrintKey(KeyType e);

int main(int argc, char *argv[])
{
    SLinkList_sort L;

    printf("1��2\nFunc CreateSortList�� test...\n");    //1��2.FuncCreateSortList��test
    {
        FILE *fp;

        printf("���������һ����������...\n");
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
