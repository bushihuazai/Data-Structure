/********************************************
 *                                            *
 * �ļ���: 06_tree_binaryTree\01 SeqBinaryTree *
 *                                             *
 * �ļ���: SeqBinaryTree-main.c             *
 *                                             *
 * ��  ��: ��������˳��洢�����Functest   *
 *                                          *
 ********************************************/

#include <stdio.h>
#include "SeqBinaryTree.c"                                     //**06_tree_binaryTree**//

void PrintElem(char c);

int main(int argc, char *argv[])
{
    SqBiTree T;

    printf("1\nFunc InitBiTree_Sq test...\n");            //1.FuncInitBiTree_Sqtest
    {
        printf("Initial�ն����� T ...\n");
        InitBiTree_Sq(T);
        printf("\n");
    }
    PressEnter;

    printf("4\nFunc BiTreeEmpty_Sq test...\n");            //4.FuncBiTreeEmpty_Sqtest
    {
        BiTreeEmpty_Sq(T) ? printf(" T  is empty!\n") : printf(" T  not empty!\n");
        printf("\n");
    }
    PressEnter;

    printf("5\nFunc CreateBiTree_Le_Sq test...\n");        //5.FuncCreateBiTree_Le_Sqtest
    {
        FILE *fp;

        printf("���������д��������� T ...\n");
        fp = fopen("TestData_Le.txt", "r");
        CreateBiTree_Le_Sq(fp, T);
        fclose(fp);
        printf("\n");
    }
    PressEnter;
    /*
        printf("6\nFunc CreateBiTree_Pre_Sq test...\n");    //6.FuncCreateBiTree_Pre_Sqtest
        {
            FILE *fp;

            printf("���������д��������� T ...\n");
            fp = fopen("TestData_Pre.txt", "r");
            CreateBiTree_Pre_Sq(fp, T, 0);                        //i��0��ʼ
            fclose(fp);
            printf("\n");
        }
        PressEnter;
    */
    printf("29\nFunc Print_Sq test...\n");                //29.FuncPrint_Sqtest
    {
        printf("���������Ľṹ��ӡ�� T ...\n");
        Print_Sq(T);
        printf("\n");
    }
    PressEnter;

    printf("7��8\nFunc BiTreeLength_Sq��BiTreeDepth_Sq test...\n");    //7��8.FuncBiTreeLength_Sq��BiTreeDepth_Sqtest
    {
        printf(" T �ĳ���Ϊ��%d�����Ϊ��%d��\n", BiTreeLength_Sq(T), BiTreeDepth_Sq(T));
        printf("\n");
    }
    PressEnter;

    printf("17\nFunc LevelOrderTraverse_Sq test...\n");        //17.FuncLevelOrderTraverse_Sqtest
    {
        printf("������������� T = ");
        LevelOrderTraverse_Sq(T, PrintElem);
        printf("\n\n");
    }
    PressEnter;

    printf("18\nFunc PreOrderTraverse_Sq ��test...\n");        //18.FuncPreOrderTraverse_Sqtest
    {
        printf("ǰ����������� T = ");
        PreOrderTraverse_Sq(T, PrintElem, 0);
        printf("\n\n");
    }
    PressEnter;

    printf("19\nFunc InOrderTraverse_Sq ��test...\n");        //19FuncInOrderTraverse_Sqtest
    {
        printf("������������� T = ");
        InOrderTraverse_Sq(T, PrintElem, 0);
        printf("\n\n");
    }
    PressEnter;

    printf("20\nFunc PostOrderTraverse_Sq ��test...\n");    //20.FuncPostOrderTraverse_Sqtest
    {
        printf("������������� T = ");
        PostOrderTraverse_Sq(T, PrintElem, 0);
        printf("\n\n");
    }
    PressEnter;

    printf("9\nFunc Root_Sq test...\n");                    //9.FuncRoot_Sqtest
    {
        TElemType_Sq r;

        printf(" T �ĸ����Ϊ %c\n", r);
        Root_Sq(T, &r);
        printf("\n");
    }
    PressEnter;

    printf("10\nFunc Value_Sq test...\n");                    //10.FuncValue_Sqtest
    {
        Position p = {4, 3};

        printf(" T �е� %d �е� %d �е�ֵΪ %c\n", p.level, p.order, Value_Sq(T, p));
        printf("\n");
    }
    PressEnter;

    printf("11\nFunc Assign_Sq test...\n");                    //11.FuncAssign_Sqtest
    {
        Position p = {4, 3};                                    //4��3��

        printf("���� %d ��� %d �еĽ�㸳ֵΪ 'X' ��T = \n", p.level, p.order);
        Assign_Sq(T, p, 'X');
        Print_Sq(T);
        printf("\n");
    }
    PressEnter;

    printf("12\nFunc Parent_Sq test...\n");                    //12.FuncParent_Sqtest
    {
        printf(" 'X' ����˫��Ϊ�� %c \n", Parent_Sq(T, 'X'));
        printf("\n");
    }
    PressEnter;

    printf("13��14\nFunc LeftChild_Sq��RightChild_Sq test...\n");    //13��14.FuncLeftChild_Sq��RightChild_Sqtest
    {
        printf(" 'E' �����ӽ��ֵΪ��%c ���Һ��ӽ��ֵΪ��%c\n", LeftChild_Sq(T, 'E'), RightChild_Sq(T, 'E'));
        printf("\n");
    }
    PressEnter;

    printf("15\nFunc LeftSibling_Sq test...\n");            //15.FuncLeftSibling_Sqtest
    {
        printf(" 'I' �����ֵ�Ϊ��%c\n", LeftSibling_Sq(T, 'I'));
        printf("\n");
    }
    PressEnter;

    printf("16\nFunc RightSibling_Sq test...\n");            //16.FuncRightSibling_Sqtest
    {
        printf(" 'X' �����ֵ�Ϊ��%c\n", RightSibling_Sq(T, 'X'));
        printf("\n");
    }
    PressEnter;


    printf("2\nFunc ClearBiTree_Sq test...\n");                //2.FuncClearBiTree_Sqtest
    {
        ClearBiTree_Sq(T);
        if (BiTreeEmpty_Sq(T)) {
            printf(" T �ѱ����!\n");
        }
        printf("\n");
    }
    PressEnter;

    return 0;
}

void PrintElem(char c)
{
    printf("%c ", c);
}
