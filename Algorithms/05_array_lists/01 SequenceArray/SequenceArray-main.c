/**********************************************
 *                                            *
 * 文件夹: 05_array_lists\01 SequenceArray *
 *                                            *
 * 内  容: 数组相关Functest                   *
 *                                            *
 **********************************************/

#include <stdio.h>
#include "SequenceArray.c" 						//**05_array_lists**//

/* 以二维数组为例test */
int main(int argc, char **argv)
{
	Array A;

	printf("1\nFunc InitArray test（以二维数组为例）...\n");//1.FuncInitArraytest
	{
		printf("Initial一个 2 行 3 列的二维数组 A ...\n");
		InitArray(&A, 2, 2, 3);
		printf("\n");
	}
	PressEnter;

	printf("5\nFunc AssignArray test...\n");				//5.FuncAssignArraytest
	{
		int i, j;
		AElemType_Sq e = 0;

		for (i = 0; i < A.bounds[0]; i++) {
			for (j = 0; j < A.bounds[1]; j++) {
				printf("赋值：A[%d][%d] = %d\n", i, j, ++e);
				AssignArray(&A, e, i, j);
			}
		}
		printf("\n");
	}
	PressEnter;

	printf("6\nFunc ArrayPrint test...\n");					//6.FuncArrayPrinttest
	{
		printf(" A = ");
		ArrayPrint(A);
		printf("\n\n");
	}
	PressEnter;

	printf("3、4\nFunc LocateArray、ValueArray test...\n");	//3、4.FuncLocateArray、ValueArraytest
	{
		AElemType_Sq x;

		printf("获取 A 中下标为 (1,1) 的元素的值，Locate 用于求出 A[1][1] 的相对位置...\n");
		ValueArray(A, &x, 1, 1);
		printf(" A[1][1] = %d\n", x);
		printf("\n");
	}
	PressEnter;

	printf("2\nFunc DestroyArray test...\n");				//2.FuncDestroyArraytest
	{
		printf("销毁 A 前：");
		A.dim != 0 ? printf(" A exsists!\n") : printf(" A  not exsist!!\n");
		DestroyArray(&A);
		printf("销毁 A 后：");
		A.dim != 0 ? printf(" A exsists!\n") : printf(" A  not exsist!!\n");
		printf("\n");
	}
	PressEnter;

	return 0;
}
