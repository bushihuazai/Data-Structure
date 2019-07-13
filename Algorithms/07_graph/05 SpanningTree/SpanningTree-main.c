/************************************
 *                                  *
 * 文件夹: 07 图\05 SpanningTree  *
 *                                  *
 * 文件名: SpanningTree-main.c      *
 * 							        *
 * 内  容: 无向图生成树相关Functest *
 *                                  *
 ************************************/

#include <stdio.h>
#include "SpanningTree.c"											

int main(int argc, char *argv[])
{
	MGraph G;
			
	printf("创建并输出无向图（数组表示法）...\n");
	{
		FILE *fp;
		
		fp = fopen("TestData_UDG_M.txt", "r");	
		CreateGraph_M(fp, &G); 
		fclose(fp);
		OutputMGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("1、2\nFunc DFSForest等 test...\n");		//1、2.FuncDFSForest等test
	{
		CSTree T;
		
		printf("创建并输出无向图的生成树（森林）...\n");		
		DFSForest(G, &T);
		Print_CS(T);
		printf("\n");
	}
	PressEnter;

	return 0;
}
