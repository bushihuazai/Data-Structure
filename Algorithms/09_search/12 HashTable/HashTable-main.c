/**********************************
 *						          *
 * 文件夹: 09 查找              *
 * 						          *
 * 文件名: HashTable-main.c       *
 * 						          *
 * 内  容: 哈希表查找相关Functest *
 *                                *
 **********************************/

#include <stdio.h>
#include "HashTable.c" 						//**09 查找**//

#define Max 20								//查找表中元素个数 

int main(int argc, char *argv[])
{	
	Table T;
	HashTable H;
	
	printf("创建并输出一个查找表...\n");
	{
		FILE *fp;
		
		fp = fopen("TestData_Table.txt", "r");	
		Create(fp, &T, Max);	
		Traverse(T, PrintKey);	
		printf("\n");
	}	
	PressEnter; 
	
	printf("1、2、3、4、5、6、7、8\nFunc CreateHash等 test...\n");	//1、2、3、4、5、6、7、8.FuncCreateHash等test		
	{
		printf("创建一个哈希表，并输出其中的关键字：\n");	
		CreateHash(&H, T);	
		PrintHash(H);	
		printf("\n");
	}	
	PressEnter; 

	printf("\n查找test...\n");										//查找test
	{ 
		Status r;
		KeyType key = 132;
		int p = 0;
		
		printf("查找关键字 %d ...\n", key);
		r = SearchHash(H, key, &p);
		if(r==DUPLICATE)
			printf("查找成功，%d 在哈希表下标为 %d 的位置。\n", key, p);
		else
			printf("查找失败！\n");
		printf("\n");
	}	
	PressEnter; 
		
	return 0;
}
