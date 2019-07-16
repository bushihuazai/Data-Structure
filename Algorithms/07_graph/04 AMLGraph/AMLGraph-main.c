/********************************************
 *						                    *
 * 文件夹: 07_graph\04 AMLGraph              *
 * 						                    *
 * 文件名: AMLGraph-main.c                  *
 * 							                *
 * 内  容: 无向图（邻接多重表）相关Functest *
 *                                          *
 ********************************************/

#include <stdio.h>
#include "AMLGraph.c" 							//**07_graph**//

void PrintElem(char c);

int main(int argc, char *argv[])
{
	AMLGraph G;

	printf("1\nFunc CreateDG_AML等 test...\n");			//1.FuncCreateDG_AML等test
	{
		FILE *fp;

		printf("Initial无向图...\n");
		fp = fopen("TestData_UDG_AML.txt", "r");			//文档中弧的录入为逆序
		CreateUDG_AML(fp, &G);
		fclose(fp);
		printf("\n");
	}
	PressEnter;

	printf("15\nFunc OutputAMLGraph test...\n");		//15.FuncOutputAMLGraphtest
	{
		printf("输出无向图的邻接多重表 G = \n");
		OutputAMLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("3\nFunc LocateVex_AML test...\n");			//3.FuncLocateVex_AMLtest
	{
		printf("顶点 '%c' 的位置为 %d \n", 'C', LocateVex_AML(G, 'C'));
		printf("\n");
	}
	PressEnter;

	printf("4\nFunc GetVex_AML test...\n");				//4.FuncGetVex_AMLtest
	{
		printf("第 %d 个顶点的值为 '%c' \n", 3, GetVex_AML(G, 3));
		printf("\n");
	}
	PressEnter;

	printf("6\nFunc FirstAdjVex_AML test...\n");		//6.FuncFirstAdjVex_AMLtest
	{
		printf(" '%c' 的第一个邻接顶点的序号为 %d \n", 'D', FirstAdjVex_AML(G, 'D'));
		printf("\n");
	}
	PressEnter;

	printf("7\nFunc NextAdjVex_AML test...\n");			//7.FuncNextAdjVex_AMLtest
	{
		printf(" '%c' 相对于 '%c' 的下一个邻接顶点序号为 %d \n", 'D', 'A', NextAdjVex_AML(G, 'D', 'A'));
		printf("\n");
	}
	PressEnter;

	printf("5\nFunc PutVex_AML test...\n");				//5.FuncPutVex_AMLtest
	{
		printf("对顶点 '%c' 赋值 '%c'后，G = \n", 'A', 'X');
		PutVex_AML(&G, 'A', 'X');
		OutputAMLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("8\nFunc InsertVex_AML test...\n");			//8.FuncInsertVex_AMLtest
	{
		printf("插入顶点 '%c' 后，G = \n", 'H');
		InsertVex_AML(&G, 'H');
		OutputAMLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("10\nFunc InsertArc_AML test...\n");			//10.FuncInsertArc_AMLtest
	{
		printf("顺次插入弧 <%c, %c>、", 'H', 'X');
		printf("<%c, %c>、", 'H', 'C');
		printf("<%c, %c> 后，G = \n", 'D', 'H');
		InsertArc_AML(&G, 'H', 'X');
		InsertArc_AML(&G, 'H', 'C');
		InsertArc_AML(&G, 'D', 'H');
		OutputAMLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("11\nFunc DeleteArc_AML test...\n");			//11.FuncDeleteArc_AMLtest
	{
		printf("删除弧 <%c, %c> 后，G = \n", 'H', 'X');
		DeleteArc_AML(&G, 'H', 'X');
		OutputAMLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("09\nFunc DeleteVex_AML test...\n");			//09.FuncDeleteVex_AMLtest
	{
		printf("删除顶点 '%c' 后，G = \n", 'H');
		DeleteVex_AML(&G, 'H');
		OutputAMLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("12、13\nFunc DFSTraverse_AML等 test...\n");	//12、13.FuncDFSTraverse_AML等test
	{
		printf("深度优先遍历无向图 G = ");
		DFSTraverse_AML(G, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("14\nFunc BFSTraverse_AML test...\n");		//14.FuncBFSTraverse_AMLtest
	{
		printf("广度优先遍历无向图 G = ");
		BFSTraverse_AML(G, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("2\nFunc ClearGraph_AML test...\n");			//2.FuncClearGraph_AMLtest
	{
		printf("清空无向图...\n");
		ClearGraph_AML(&G);
		OutputAMLGraph(G);
		printf("\n");
	}
	PressEnter;
}

void PrintElem(char c)
{
	printf("%c ", c);
}
