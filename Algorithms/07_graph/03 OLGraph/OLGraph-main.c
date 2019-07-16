/******************************************
 *                                        *
 * 文件夹: 07_graph\03 OLGraph             *
 *                                        *
 * 文件名: OLGraph-main.c                 *
 * 							              *
 * 内  容: 有向图（十字链表）相关Functest *
 *                                        *
 ******************************************/

#include <stdio.h>
#include "OLGraph.c" 											//**07_graph**//

void PrintElem(char c);

int main(int argc, char *argv[])
{
	OLGraph G;

	printf("1\nFunc CreateDG_OL等 test...\n");				//1.FuncCreateDG_OL等test
	{
		FILE *fp;

		printf("Initial有向图 G ...\n");
		fp = fopen("TestData_DG_OL.txt", "r");					//文档中弧的录入为逆序
		CreateDG_OL(fp, &G);
		fclose(fp);
		printf("\n");
	}
	PressEnter;

	printf("15\nFunc OutputOLGraph test...\n");				//15.FuncOutputOLGraphtest
	{
		printf("输出有向图的十字链表 G = \n");
		OutputOLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("3\nFunc LocateVex_OL test...\n");				//3.FuncLocateVex_OLtest
	{
		printf("顶点 '%c' 的位置为 %d \n", 'C', LocateVex_OL(G, 'C'));
		printf("\n");
	}
	PressEnter;

	printf("4\nFunc GetVex_OL test...\n");					//4.FuncGetVex_OLtest
	{
		printf("第 %d 个顶点的值为 '%c' \n", 3, GetVex_OL(G, 3));
		printf("\n");
	}
	PressEnter;

	printf("6\nFunc FirstAdjVex_OL test...\n");				//6.FuncFirstAdjVex_OLtest
	{
		printf("' %c' 的第一个邻接顶点的序号为 %d \n", 'D', FirstAdjVex_OL(G, 'D'));
		printf("\n");
	}
	PressEnter;

	printf("7\nFunc NextAdjVex_OL test...\n");				//7.FuncNextAdjVex_OLtest
	{
		printf(" '%c' 相对于 '%c' 的下一个邻接顶点序号为 %d\n", 'D', 'A', NextAdjVex_OL(G, 'D', 'A'));
		printf("\n");
	}
	PressEnter;

	printf("5\nFunc PutVex_OL test...\n");					//5.FuncPutVex_OLtest
	{
		printf("对顶点 '%c' 赋值 '%c'后，G = \n", 'A', 'X');
		PutVex_OL(&G, 'A', 'X');
		OutputOLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("8\nFunc InsertVex_OL test...\n");					//8.FuncInsertVex_OLtest
	{
		printf("插入顶点 '%c'后，G = \n", 'H');
		InsertVex_OL(&G, 'H');
		OutputOLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("10\nFunc InsertArc_OL test...\n");				//10.FuncInsertArc_OLtest
	{
		printf("顺次插入弧 <%c, %c>、", 'H', 'X');
		printf("<%c, %c>、", 'H', 'C');
		printf("<%c, %c>后，G = \n", 'D', 'H');
		InsertArc_OL(&G, 'H', 'X');
		InsertArc_OL(&G, 'H', 'C');
		InsertArc_OL(&G, 'D', 'H');
		OutputOLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("11\nFunc DeleteArc_OL test...\n");				//11.FuncDeleteArc_OLtest
	{
		printf("删除弧 <%c, %c>后，G = \n", 'H', 'X');
		DeleteArc_OL(&G, 'H', 'X');
		OutputOLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("09\nFunc DeleteVex_OL test...\n");				//09.FuncDeleteVex_OLtest
	{
		printf("删除顶点 '%c'后，G = \n", 'H');
		DeleteVex_OL(&G, 'H');
		OutputOLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("12、13\nFunc DFSTraverse_OL等 test...\n");		//12、13.FuncDFSTraverse_OL等test
	{
		printf("深度优先遍历有向图 G = ");
		DFSTraverse_OL(G, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("14\nFunc BFSTraverse_OL test...\n");				//14.FuncBFSTraverse_OLtest
	{
		printf("广度优先遍历有向图 G = ");
		BFSTraverse_OL(G, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("2\nFunc ClearGraph_OL test...\n");				//2.FuncClearGraph_OLtest
	{
		printf("清空有向图...\n");
		ClearGraph_OL(&G);
		OutputOLGraph(G);
		printf("\n");
	}
	PressEnter;
}

void PrintElem(char c)
{
	printf("%c ", c);
}
