/******************************************************
 *                                                      *
 * 文件夹: 05_array_lists\03 RowLinkSparseMatrix   *
 *                                                      *
 * 内  容: 行逻辑链接的顺序表（稀疏矩阵）相关Functest *
 *                                                    *
 ******************************************************/

#include <stdio.h>
#include "RowLinkSparseMatrix.c"                                 //**05_array_lists**//

int main(int argc, char **argv)
{
    RLSMatrix M, N;

    printf("1\nFunc CreateSMatrix_RL test...\n");            //1.FuncCreateSMatrix_RLtest
    {
        FILE *fp;                                                //作为输入源

        printf("创建两个稀疏矩阵 M、N ...\n");
        fp = fopen("TestData_RLSMatrix.txt", "r");
        CreateSMatrix_RL(fp, 2, &M, &N);
        fclose(fp);
        printf("\n");
    }
    PressEnter;

    printf("3\nFunc PrintSMatrix_RL test...\n");            //3.FuncPrintSMatrix_RLtest
    {
        printf(" M = \n");
        PrintSMatrix_RL(M);
        printf("\n");
        printf(" N = \n");
        PrintSMatrix_RL(N);
        printf("\n");
    }
    PressEnter;

    printf("4\nFunc CopySMatrix_RL test...\n");                //4.FuncCopySMatrix_RLtest
    {
        RLSMatrix Tmp;

        printf("复制 M 到 Tmp...\n");
        CopySMatrix_RL(M, &Tmp);
        printf(" Tmp = \n");
        PrintSMatrix_RL(Tmp);
        printf("\n");
    }
    PressEnter;

    printf("5\nFunc AddSMatri_RL test...\n");                //5.FuncAddSMatri_RLtest
    {
        RLSMatrix Q1;

        AddSMatri_RL(M, N, &Q1);
        printf(" Q1 = M + N = \n");
        PrintSMatrix_RL(Q1);
        printf("\n");
    }
    PressEnter;

    printf("6\nFunc SubtSMatrix_RL test...\n");                //6.FuncSubtSMatrix_RLtest
    {
        RLSMatrix Q2;

        SubSMatrix_RL(M, N, &Q2);
        printf(" Q2 = M - N = \n");
        PrintSMatrix_RL(Q2);
        printf("\n");
    }
    PressEnter;

    printf("7\nFunc MultSMatrix_RL test...\n");                //7.FuncMultSMatrix_RLtest
    {
        RLSMatrix Q3;

        MultSMatrix_RL(M, N, &Q3);
        printf(" Q3 = M * N = \n");
        PrintSMatrix_RL(Q3);
        printf("\n");
    }
    PressEnter;

    printf("8\nFunc TransposeSMatrix_RL test...\n");        //8.FuncTransposeSMatrix_RLtest
    {
        RLSMatrix T1;

        TransposeSMatrix_RL(M, &T1);
        printf(" T1 = M(T) = \n");
        PrintSMatrix_RL(T1);
        printf("\n");
    }
    PressEnter;

    printf("9\nFunc FastTransposeSMatrix_RL test...\n");    //9.FuncFastTransposeSMatrix_RLtest
    {
        RLSMatrix T2;

        FastTransposeSMatrix_RL(M, &T2);
        printf(" T2 = M(T) = \n");
        PrintSMatrix_RL(T2);
        printf("\n");
    }
    PressEnter;

    printf("2\nFunc DestroySMatrix_RL test...\n");            //2.FuncDestroySMatrix_RLtest
    {
        printf("销毁 M 前：");
        !M.mu&& !M.nu&& !M.tu ? printf(" M  not exsist!!\n") : printf(" M exsists!\n");
        DestroySMatrix_RL(&M);
        printf("销毁 M 后：");
        !M.mu&& !M.nu&& !M.tu ? printf(" M  not exsist!!\n") : printf(" M exsists!\n");
        printf("\n");
    }
    PressEnter;

    return 0;
}
