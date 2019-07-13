/******************************************
 *								          *
 * �ļ���: 06 ���Ͷ�����\09 HuffmanTree *
 * 								          *
 * �ļ���: HuffmanTree-main.c             *
 * 							              *
 * ��  ��: �����������Functest           *
 *                                        *
 ******************************************/

#include <stdio.h>
#include "HuffmanTree.c" 										//**06 ���Ͷ�����**//

int main(int argc, char *argv[])
{
	HuffmanTree HT;
	HuffmanCode HC;
	
	printf("1\nFunc InitTree_HT test...\n");				//1.FuncInitTree_HTtest
	{
		printf("Initial�������� HT ...\n");	
		InitTree_HT(&HT);
		printf("\n");
	}
	PressEnter;

	printf("2��3\nFunc CreateHuffmanTree_HT�� test...\n");	//2��3.FuncCreateHuffmanTree_HT��Select_HTtest
	{
		FILE *fp;
		
		printf("������������ HT ...\n");
		printf("��Ϊʾ�������� 8 ������Ȩֵ��5, 29, 7, 8, 14, 23, 3, 11��...\n");		
		fp = fopen("TestData_HT.txt", "r");
		CreateHuffmanTree_HT(fp, &HT);
		fclose(fp);
		printf("\n");
	}
	PressEnter;

	printf("5\nFunc ShowHuffmanTree_HT test...\n");			//5.FuncShowHuffmanTree_HTtest
	{
		printf("չʾ�������� HT = \n");
		ShowHuffmanTree_HT(HT);
		printf("\n");
	}
	PressEnter;
/*
	//��һ���㷨 
	printf("4-1\nFunc HuffmanCodeing_HT_1 test...\n");		//4-1.FuncHuffmanCodeing_HT_1test
	{
		printf("������������� HC ...\n");		
		HuffmanCodeing_HT_1(HT, &HC);
		printf("\n");
	}
	PressEnter;
*/

	printf("4-2\nFunc HuffmanCodeing_HT_1 test...\n");		//4-2.FuncHuffmanCodeing_HT_1test
	printf("������������� HC ...\n");		
	HuffmanCodeing_HT_2(HT, &HC);
	printf("\n");
	PressEnter;

		
	printf("6\nFunc ShowHuffmanCode_HT test...\n");			//6.FuncShowHuffmanCode_HTtest
	printf("չʾ���������� HC = \n");	
	ShowHuffmanCode_HT(HT, HC);
	printf("\n");
	PressEnter;
}
