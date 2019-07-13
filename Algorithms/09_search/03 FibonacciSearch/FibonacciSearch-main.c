/************************************
 *						            *
 * 文件夹: 09 查找                *
 * 						            *
 * 文件名: FibonacciSearch-main.c   *
 * 							        *
 * 内  容: 斐波那契查找相关Functest *
 *                                  *
 ************************************/

#include <stdio.h>
#include "FibonacciSearch.c" 			//**09 查找**//

#define Max 100							//查找表中元素个数

int main(int argc, char *argv[])
{	
	Table T;
			
	printf("创建并输出一个查找表...\n");
	{
		FILE *fp;
		
		fp = fopen("TestData_Table.txt", "r");	
		Create(fp, &T, Max);	
		Traverse(T, PrintKey);	
		printf("\n");
	}	
	PressEnter; 
	
	printf("1\nFunc Search_Fib test...\n");		//1.FuncSearch_Fibtest		
	{
		printf("关键字 39 在有序查找表中的位序为：");
		printf("%d\n", Search_Fib(T, 39));
		printf("\n");
	}	
	PressEnter; 

	return 0;
}
