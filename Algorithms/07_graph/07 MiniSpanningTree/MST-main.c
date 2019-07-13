/***************************************
 *				                       *
 * 文件夹: 07 图\07 MiniSpanningTree *
 * 				                       *
 * 文件名: MST-main.c                  *
 *				                       *
 * 内  容: 最小生成树相关Functest      *
 *				                       *
 ***************************************/

#include <stdio.h>
#include "MST.c" 												//**07 图**//													

int main(int argc, char *argv[])
{
	MGraph G;

	printf("Initial并输出无向网...\n");
	{
		FILE *fp;
		
		fp = fopen("TestData_UDN_M.txt", "r");	
		CreateGraph_M(fp, &G); 
		fclose(fp);
		OutputMGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("1、2\nFunc MinSpanTree_PRIM_1等 test...\n");		//1、2.FuncMinSpanTree_PRIM_1等test
	{
		printf("普里姆算法...\n");	
		printf("先后加入最小生成树的各结点及其对应的最小边的权值分别为：\n");
		MinSpanTree_PRIM_1(G, 'A');
		printf("\n");
	} 
	PressEnter;

	printf("3、4\nFunc MinSpanTree_PRIM_2等 test...\n");		//3、4.FuncMinSpanTree_PRIM_2等test
	{
		printf("普里姆算法...\n");			
		printf("最小生成树的各边及其对应的权值分别为：\n");	
		MinSpanTree_PRIM_2(G, 'A');
		printf("\n");
	} 
	PressEnter;

	printf("5、6、7、8\nFunc MinSpanTree_KRUSKAL等 test...\n");//5、6、7、8.FuncMinSpanTree_KRUSKAL等test	
	{
		printf("克鲁斯卡尔算法...\n");	
		printf("最小生成树的各边及其对应的权值分别为：\n");		
		MinSpanTree_KRUSKAL(G);
		printf("\n");
	}
	PressEnter;
}
