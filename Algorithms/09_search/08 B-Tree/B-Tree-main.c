/***************************
 *						   *
 * 文件夹: 09 查找       *
 * 						   *
 * 文件名: B-Tree-main.c   *
 * 						   *
 * 内  容: B树相关Functest *
 *                         *
 ***************************/

#include <stdio.h>
#include "B-Tree.c" 							//**09 查找**//

/* 宏定义 */
#define Max 15									//查找表中元素个数

int main(int argc, char *argv[])
{	
	Table T;
	BTree BT;

	printf("创建并输出一个查找表...\n");
	{
		FILE *fp;
		
		fp = fopen("TestData_Table.txt", "r");	
		Create(fp, &T, Max);	
		Traverse(T, PrintKey);	
		printf("\n");
	}	
	PressEnter; 
	
	printf("1——8\nFunc CreateBTree等 test...\n");		//1——8.FuncCreateBTree等test		
	{
		printf("构造B树...\n");
		CreateBTree(&BT, T);
		printf("\n");
	}	
	PressEnter; 
	
	printf("16\nFunc PrintBT_InOreder test...\n");		//16.FuncPrintBT_InOredertest	 
	{
		printf("★中序输出B树关键字：");
		PrintBT_InOreder(BT); 
		printf("\n\n");
	}
	PressEnter;
	
	printf("17\nFunc PrintBT_InOreder等 test...\n");	//17.FuncPrintBT_Leveltest
	{
		printf("★层序输出B树关键字：\n");
		PrintBT_Level(BT);
		printf("\n");
	}	
	PressEnter; 
	
	printf("9——15\nFunc DeleteKey等 test...\n");		//9——15.FuncDeleteKey等test
	{
		int K = 45;
			
		printf("删除关键字 %d ...\n", K);
		DeleteKey(&BT, K);
		printf("★中序输出B树关键字：");
		PrintBT_InOreder(BT); 
		printf("\n");
		printf("★层序输出B树关键字：\n");
		PrintBT_Level(BT);
		printf("\n");
	}	
	PressEnter;
		
	return 0;
}
