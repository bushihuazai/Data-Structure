/***************************************************
 *                                                 *
 * 文件夹: 05_array_lists\02 TripleSparseMatrix *
 * 						                           *
 * 内  容: 三元组顺序表（稀疏矩阵）相关Functest    *
 *                                                 *
 ***************************************************/

#include <stdio.h>
#include "TripleSparseMatrix.c" 			//**05_array_lists**//

int main(int argc, char **argv)
{
	TSMatrix M, N;

	printf("1\nFunc CreateSMatrix_T test...\n");	//1.FuncCreateSMatrix_Ttest
	{
		FILE *fp;										//作为输入源

		printf("创建两个稀疏矩阵 M、N ...\n");
		fp = fopen("TestData_TSMatrix.txt", "r");
		CreateSMatrix_T(fp, 2, &M, &N);
		fclose(fp);
		printf("\n");
	}
	PressEnter;

	printf("3\nFunc PrintSMatrix_T test...\n");		//3.FuncPrintSMatrix_Ttest
	{
		printf(" M = \n");
		PrintSMatrix_T(M);
		printf(" N = \n");
		PrintSMatrix_T(N);
		printf("\n");
	}
	PressEnter;

	printf("4\nFunc CopySMatrix_T test...\n");		//4.FuncCopySMatrix_Ttest
	{
		TSMatrix Tmp;

		printf("复制 M 到 Tmp...\n");
		CopySMatrix_T(M, &Tmp);
		printf(" Tmp = \n");
		PrintSMatrix_T(Tmp);
		printf("\n");
	}
	PressEnter;

	printf("5\nFunc AddSMatri_T test...\n");		//5.FuncAddSMatri_Ttest
	{
		TSMatrix Q1;

		AddSMatri_T(M, N, &Q1);
		printf(" Q1 = M + N = \n");
		PrintSMatrix_T(Q1);
		printf("\n");
	}
	PressEnter;

	printf("6\nFunc SubSMatrix_T test...\n");		//6.FuncSubSMatrix_Ttest
	{
		TSMatrix Q2;

		SubSMatrix_T(M, N, &Q2);
		printf(" Q2 = M - N = \n");
		PrintSMatrix_T(Q2);
		printf("\n");
	}
	PressEnter;

	printf("7\nFunc MultSMatrix_T test...\n");		//7.FuncMultSMatrix_Ttest
	{
		TSMatrix Q3;

		MultSMatrix_T(M, N, &Q3);
		printf(" Q3 = M * N = \n");
		PrintSMatrix_T(Q3);
		printf("\n");
	}
	PressEnter;

	printf("8\nFunc TransposeSMatrix_T test...\n");	//8.FuncTransposeSMatrix_Ttest
	{
		TSMatrix T1;

		TransposeSMatrix_T(M, &T1);
		printf(" T1 = M(T) = \n");
		PrintSMatrix_T(T1);
		printf("\n");
	}
	PressEnter;

	printf("9\nFunc FastTransposeSMatrix_T test...\n");	//9.FuncFastTransposeSMatrix_Ttest
	{
		TSMatrix T2;

		FastTransposeSMatrix_T(M, &T2);
		printf(" T2 = M(T) = \n");
		PrintSMatrix_T(T2);
		printf("\n");
	}
	PressEnter;

	printf("2\nFunc DestroySMatrix_T test...\n");	//2.FuncDestroySMatrix_Ttest
	{
		printf("销毁 M 前：");
		!M.mu&& !M.nu&& !M.tu ? printf(" M  not exsist!!\n") : printf(" M exsists!\n");
		DestroySMatrix_T(&M);
		printf("销毁 M 后：");
		!M.mu&& !M.nu&& !M.tu ? printf(" M  not exsist!!\n") : printf(" M exsists!\n");
		printf("\n");
	}
	PressEnter;

	return 0;
}
