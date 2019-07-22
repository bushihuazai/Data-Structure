/********************************************
 *                                             *
 * 文件夹: 05_array_lists\04 CrossList   *
 *                                             *
 * 内  容: 十字链表（稀疏矩阵）相关Functest *
 *                                          *
 ********************************************/

#include <stdio.h>
#include "CrossList.c"             //**05_array_lists**//

int main(int argc, char **argv)
{
    CrossList M, N;

    printf("1\nFunc CreateSMatrix_OL test...\n");        //1.FuncCreateSMatrix_OLtest
    {
        FILE *fp;                                            //作为输入源

        printf("创建两个稀疏矩阵 M、N ...\n");
        fp = fopen("TestData_CrossList.txt", "r");
        CreateSMatrix_OL(fp, 2, &M, &N);
        fclose(fp);
        printf("\n");
    }
    PressEnter;

    printf("3\nFunc PrintSMatrix_OL test...\n");        //3.FuncPrintSMatrix_OLtest
    {
        printf(" M = \n");
        PrintSMatrix_OL(M);
        printf(" N = \n");
        PrintSMatrix_OL(N);
        printf("\n");
    }
    PressEnter;

    printf("4\nFunc CopySMatrix_OL test...\n");            //4.FuncCopySMatrix_OLtest
    {
        CrossList Tmp;

        CopySMatrix_OL(M, &Tmp);
        printf("Tmp = \n");
        PrintSMatrix_OL(Tmp);
        printf("\n");
    }
    PressEnter;

    printf("5\nFunc AddSMatri_OL test...\n");            //5.FuncAddSMatri_OLtest
    {
        CrossList Q1;

        AddSMatri_OL(M, N, &Q1);
        printf(" Q1 = M + N = \n");
        PrintSMatrix_OL(Q1);
        printf("\n");
    }
    PressEnter;

    printf("6\nFunc SubtSMatrix_OL test...\n");            //6.FuncSubtSMatrix_OLtest
    {
        CrossList Q2;

        SubSMatrix_OL(M, N, &Q2);
        printf(" Q2 = M - N = \n");
        PrintSMatrix_OL(Q2);
        printf("\n");
    }
    PressEnter;

    printf("7\nFunc MultSMatrix_OL test...\n");            //7.FuncMultSMatrix_OLtest
    {
        CrossList Q3;

        MultSMatrix_OL(M, N, &Q3);
        printf(" Q3 = M * N = \n");
        PrintSMatrix_OL(Q3);
        printf("\n");
    }
    PressEnter;

    printf("8\nFunc TransposeSMatrix_OL test...\n");    //8.FuncTransposeSMatrix_OLtest
    {
        CrossList T;

        TransposeSMatrix_OL(M, &T);
        printf(" T = M(T) = \n");
        PrintSMatrix_OL(T);
        printf("\n");
    }
    PressEnter;

    printf("2\nFunc DestroySMatrix_OL test...\n");        //2.FuncDestroySMatrix_OLtest
    {
        printf("销毁 M 前：");
        !M.mu&& !M.nu&& !M.tu ? printf(" M  not exsist!!\n") : printf(" M exsists!\n");
        DestroySMatrix_OL(&M);
        printf("销毁 M 后：");
        !M.mu&& !M.nu&& !M.tu ? printf(" M  not exsist!!\n") : printf(" M exsists!\n");
        printf("\n");
    }
    PressEnter;

    return 0;
}
