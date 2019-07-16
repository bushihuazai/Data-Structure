/********************************
 *						        *
 * 文件夹: 10_internal_sort        *
 * 						        *
 * 文件名: RadixSort-main.c     *
 * 							    *
 * 内  容: 基数排序相关Functest *
 *                              *
 ********************************/

#include <stdio.h>
#include "RadixSort.c" 									//**10_internal_sort**//

int main(int argc, char *argv[])
{
	SLList L;

	printf("创建并输出一个任意序列...\n");
	printf("1、2\nFunc CreateSLList等 test...\n");	//1、2.FuncCreateSLList等test
	{
		FILE *fp;
		fp = fopen("TestData.txt", "r");
		CreateSLList(fp, &L);
		Traverse(L);
		printf("\n");
	}
	PressEnter;

	printf("3、4、5\nFunc RadixSort等 test...\n");	//3、4、5.FuncRadixSort等test
	{
		printf("将各关键字按递增顺序排列...\n");
		RadixSort(&L);
		Traverse(L);
		printf("\n");
	}
	PressEnter;

	return 0;
}
