/******************************************
 *								          *
 * 文件夹: 06 树和二叉树\09 HuffmanTree *
 * 								          *
 * 文件名: HuffmanTree-main.c             *
 * 							              *
 * 内  容: 哈夫曼树相关Functest           *
 *                                        *
 ******************************************/

#include <stdio.h>
#include "HuffmanTree.c" 										//**06 树和二叉树**//

int main(int argc, char *argv[])
{
	HuffmanTree HT;
	HuffmanCode HC;
	
	printf("1\nFunc InitTree_HT test...\n");				//1.FuncInitTree_HTtest
	{
		printf("Initial哈夫曼树 HT ...\n");	
		InitTree_HT(&HT);
		printf("\n");
	}
	PressEnter;

	printf("2、3\nFunc CreateHuffmanTree_HT等 test...\n");	//2、3.FuncCreateHuffmanTree_HT、Select_HTtest
	{
		FILE *fp;
		
		printf("创建哈夫曼树 HT ...\n");
		printf("作为示范，输入 8 个结点的权值（5, 29, 7, 8, 14, 23, 3, 11）...\n");		
		fp = fopen("TestData_HT.txt", "r");
		CreateHuffmanTree_HT(fp, &HT);
		fclose(fp);
		printf("\n");
	}
	PressEnter;

	printf("5\nFunc ShowHuffmanTree_HT test...\n");			//5.FuncShowHuffmanTree_HTtest
	{
		printf("展示哈夫曼树 HT = \n");
		ShowHuffmanTree_HT(HT);
		printf("\n");
	}
	PressEnter;
/*
	//另一种算法 
	printf("4-1\nFunc HuffmanCodeing_HT_1 test...\n");		//4-1.FuncHuffmanCodeing_HT_1test
	{
		printf("计算哈夫曼编码 HC ...\n");		
		HuffmanCodeing_HT_1(HT, &HC);
		printf("\n");
	}
	PressEnter;
*/

	printf("4-2\nFunc HuffmanCodeing_HT_1 test...\n");		//4-2.FuncHuffmanCodeing_HT_1test
	printf("计算哈夫曼编码 HC ...\n");		
	HuffmanCodeing_HT_2(HT, &HC);
	printf("\n");
	PressEnter;

		
	printf("6\nFunc ShowHuffmanCode_HT test...\n");			//6.FuncShowHuffmanCode_HTtest
	printf("展示哈夫曼编码 HC = \n");	
	ShowHuffmanCode_HT(HT, HC);
	printf("\n");
	PressEnter;
}
