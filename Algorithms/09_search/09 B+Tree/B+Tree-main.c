/****************************
 *                            *
 * �ļ���: 09_search        *
 *                             *
 * �ļ���: B+Tree-main.c    *
 *                             *
 * ��  ��: B+�����Functest *
 *                          *
 ****************************/

#include <stdio.h>
#include "B+Tree.c"                         //**09_search**//

/* �궨�� */
#define Max 15                                //���ұ���Ԫ�ظ���

int main(int argc, char *argv[])
{
    Table T;
    B_Tree B_T;

    printf("���������һ�����ұ�...\n");
    {
        FILE *fp;

        fp = fopen("TestData_Table.txt", "r");
        Create(fp, &T, Max);
        Traverse(T, PrintKey);
        printf("\n");
    }
    PressEnter;

    printf("1����8\nFunc CreateB_Tree�� test...\n");        //1����8.FuncCreateB_Tree��test
    {
        printf("����B+��...\n");
        CreateB_Tree(&B_T, T);
        printf("\n");
    }
    PressEnter;

    printf("9\nFunc PrintB_Tree test...\n");                //9.FuncPrintB_Treetest
    {
        printf("���B+���Ĺؼ���...\n");
        PrintB_Tree(B_T);
        printf("\n");
    }
    PressEnter;

    printf("\n����test...\n");                                //����test
    {
        Result r;
        KeyType key = 30;

        printf("���ҹؼ���%d...\n", key);
        r = SearchB_Tree(B_T, key);
        if (r.tag == 1) {
            printf("���ҳɹ���%d ���������ĵ� %d ��λ�á�\n", key, Search(r.pt, key));
        } else {
            printf("����ʧ��!\n");
        }
        printf("\n");
    }
    PressEnter;
}
