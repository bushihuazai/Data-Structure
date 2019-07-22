/**********************************
 *                                  *
 * �ļ���: 09_search              *
 *                                   *
 * �ļ���: BinarySortTree-main.c  *
 *                                   *
 * ��  ��: �������������Functest *
 *                                *
 **********************************/

#include <stdio.h>
#include "BinarySortTree.c"                                 //**09_search**//

#define Max 7                                                //���ұ���Ԫ�ظ���

int main(int argc, char *argv[])
{
    Table T;
    BSTree BST;

    printf("���������һ�����ұ�...\n");
    {
        FILE *fp;

        fp = fopen("TestData_Table.txt", "r");
        Create(fp, &T, Max);
        Traverse(T, PrintKey);
        printf("\n");
    }
    PressEnter;

    printf("1��3��4��5\nFunc CreateBSTree�� test...\n");    //1��3��4��5.FuncCreateBSTree��test
    {
        printf("����������������������ؼ��֣�");
        CreateBSTree(&BST, T);
        InOrderTraverse_BST(BST, PrintKey);
        printf("\n\n");
    }
    PressEnter;

    printf("2\nFunc SearchBST_1 test...\n");                //2.FuncSearchBST_1test
    {
        printf("�ؼ��� 24 ");
        SearchBST_1(BST, 24) == NULL ? printf("����") : printf("��");
        printf("������������!");
        printf("\n\n");
    }
    PressEnter;

    printf("6��7\nFunc DeleteBST�� test...\n");            //6��7.FuncDeleteBST��test
    {
        printf("ɾ���ؼ��� 24 ��Ĺؼ�������Ϊ��");
        DeleteBST(&BST, 24);
        InOrderTraverse_BST(BST, PrintKey);
        printf("\n\n");
    }
    PressEnter;

    return 0;
}
