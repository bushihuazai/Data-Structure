/***************************************
 *				                       *
 * �ļ���: 07 ͼ\07 MiniSpanningTree *
 * 				                       *
 * �ļ���: MST-main.c                  *
 *				                       *
 * ��  ��: ��С���������Functest      *
 *				                       *
 ***************************************/

#include <stdio.h>
#include "MST.c" 												//**07 ͼ**//													

int main(int argc, char *argv[])
{
	MGraph G;

	printf("Initial�����������...\n");
	{
		FILE *fp;
		
		fp = fopen("TestData_UDN_M.txt", "r");	
		CreateGraph_M(fp, &G); 
		fclose(fp);
		OutputMGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("1��2\nFunc MinSpanTree_PRIM_1�� test...\n");		//1��2.FuncMinSpanTree_PRIM_1��test
	{
		printf("����ķ�㷨...\n");	
		printf("�Ⱥ������С�������ĸ���㼰���Ӧ����С�ߵ�Ȩֵ�ֱ�Ϊ��\n");
		MinSpanTree_PRIM_1(G, 'A');
		printf("\n");
	} 
	PressEnter;

	printf("3��4\nFunc MinSpanTree_PRIM_2�� test...\n");		//3��4.FuncMinSpanTree_PRIM_2��test
	{
		printf("����ķ�㷨...\n");			
		printf("��С�������ĸ��߼����Ӧ��Ȩֵ�ֱ�Ϊ��\n");	
		MinSpanTree_PRIM_2(G, 'A');
		printf("\n");
	} 
	PressEnter;

	printf("5��6��7��8\nFunc MinSpanTree_KRUSKAL�� test...\n");//5��6��7��8.FuncMinSpanTree_KRUSKAL��test	
	{
		printf("��³˹�����㷨...\n");	
		printf("��С�������ĸ��߼����Ӧ��Ȩֵ�ֱ�Ϊ��\n");		
		MinSpanTree_KRUSKAL(G);
		printf("\n");
	}
	PressEnter;
}
