/***************************************
 *							           *
 * 文件夹: 06_tree_binaryTree\10 PowerSet *
 * 						               *
 * 文件名: PowerSet-main.c             *
 * 					    	           *
 * 内  容: 幂集相关Functest            *
 *                                     *
 ***************************************/

#include <stdio.h>
#include "PowerSet.c" 									//**06_tree_binaryTree**//															

int main(int argc, char *argv[])
{
	LinkList A;

	printf("1\nFunc CreatePowerSet_PS test...\n");	//1.FuncCreatePowerSet_PStest
	{
		FILE *fp;

		printf("创建集合 A ...\n");
		fp = fopen("TestData_A.txt", "r");
		CreatePowerSet_PS(fp, &A);
		fclose(fp);
		printf("\n");
	}
	PressEnter;

	printf("3\nFunc Output_PS test...\n");			//3.FuncOutput_PStest
	{
		printf("输出集合 A = ");
		Output_PS(A);
		printf("\n");
	}
	PressEnter;

	printf("2\nFunc GetPowerSet_PS test...\n");		//2.FuncGetPowerSet_PStest
	{
		LinkList B;

		printf("计算集合的幂集...\n");
		printf("创建集合 B 临时存储幂集元素...\n");
		InitList_L(&B);
		printf("依次输出求取的幂集中的各子集...\n");
		GetPowerSet_PS(1, A, B);
		printf("\n");
	}
	PressEnter;
}
