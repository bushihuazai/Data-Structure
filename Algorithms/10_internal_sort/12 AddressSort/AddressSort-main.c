/**************************************
 *                                      *
 * �ļ���: 10_internal_sort              *
 *                                       *
 * �ļ���: AddressSort-main.c         *
 *                                       *
 * ��  ��: ˳����ַ�������Functest *
 *                                    *
 **************************************/

#include <stdio.h>
#include "AddressSort.c"        //**10_internal_sort**//

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

    printf("1��2\nFunc AddressSort�� test...\n");    //1��2.FuncAddressSort��test
    {
        printf("���ؼ��ְ�����˳������...\n");
        AddressSort(&L);
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
