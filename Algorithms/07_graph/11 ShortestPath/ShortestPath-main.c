/***********************************
 *						           *
 * 文件夹: 07_graph\11 ShortestPath *
 * 						           *
 * 文件名: ShortestPath-main.c     *
 * 							       *
 * 内  容: 最短路径相关Functest    *
 *                                 *
 ***********************************/

#include <stdio.h>
#include "ShortestPath.c" 						//**07_graph**//

int main(int argc, char *argv[])
{
	MGraph G1, G2;
	int v0 = 2;													//设置起点

	printf("创建并输出有向网G1...\n");
	{
		FILE *fp;

		fp = fopen("TestData_DN_M_DIJ.txt", "r");
		CreateGraph_M(fp, &G1);
		fclose(fp);
		OutputMGraph(G1);
		printf("\n");
	}
	PressEnter;

	printf("1、2\nFunc ShortestPath_DIJ等 test...\n");		//1、2.FuncShortestPath_DIJ等test
	{
		PathMatrix P1[MAX_VERTEX_NUM + 1][MAX_VERTEX_NUM + 1];
		ShortPathTable D1[MAX_VERTEX_NUM + 1];

		printf("计算并输出 %c 到其余各点的最短路径：\n", G1.vexs[v0]);
		ShortestPath_DIJ(G1, v0, P1, D1);
		OutputPath_DIJ(G1, v0, P1, D1);
		printf("\n");
	}
	PressEnter;

	printf("3\nFunc Dijkstra test...\n");					//3.FuncDijkstratest
	{
		PathMatrix path1[MAX_VERTEX_NUM + 1];
		ShortPathTable dist1[MAX_VERTEX_NUM + 1];

		printf("计算并输出 %c 到其余各点的最短路径：\n", G1.vexs[v0]);
		Dijkstra(G1, v0, path1, dist1);
		printf("\n");
	}
	PressEnter;

	printf("创建并输出有向网G2...\n");
	{
		FILE *fp;

		fp = fopen("TestData_DN_M_Floyd.txt", "r");
		CreateGraph_M(fp, &G2);
		fclose(fp);
		OutputMGraph(G2);
		printf("\n");
	}
	PressEnter;

	printf("4、5\nFunc ShortestPath_FLOYD等 test...\n");	//4、5.FuncShortestPath_FLOYD等test
	{
		PathMatrix P2[MAX_VERTEX_NUM + 1][MAX_VERTEX_NUM + 1][MAX_VERTEX_NUM + 1];
		ShortPathTable D2[MAX_VERTEX_NUM + 1][MAX_VERTEX_NUM + 1];

		printf("计算并输出各对顶点之间的最短路径：\n");
		ShortestPath_FLOYD(G2, P2, D2);
		OutputPath_FLOYD(G2, P2, D2);
		printf("\n");
	}
	PressEnter;

	printf("6\nFunc Floyd test...\n");						//6.FuncFloydtest
	{
		PathMatrix path2[MAX_VERTEX_NUM + 1][MAX_VERTEX_NUM + 1];
		ShortPathTable dist2[MAX_VERTEX_NUM + 1][MAX_VERTEX_NUM + 1];

		printf("计算并输出各对顶点之间的最短路径：\n");
		Floyd(G2, path2, dist2);
		printf("\n");
	}
	PressEnter;

	return 0;
}
