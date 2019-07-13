/**************************************************
 *                                                *
 * 文件夹: 07 图\06 StronglyConnectedComponents *
 *                                                *
 * 文件名: SCC-main.c                             *
 * 							                      *
 * 内  容: 强连通分量相关Functest                 *
 *                                                *
 **************************************************/

#include <stdio.h>
#include "SCC.c" 												//**07 图**//													

int main(int argc, char *argv[])
{
    OLGraph G;

    printf("Initial并输出有向图...\n");
	{
		FILE *fp;
		
	    fp = fopen("TestData_DG_OL.txt", "r");					//文档中弧的录入为逆序
	    CreateDG_OL(fp, &G);
	    fclose(fp);
	    OutputOLGraph(G);
	    printf("\n");
	}
    PressEnter;

	printf("1、2、3、4、5\nFunc Kosaraju等 test...\n");		//1、2、3、4、5.FuncKosaraju等test
	{
	    printf("计算此有向图的强连通分量...\n");
	    Kosaraju(G);
	    printf("\n");
	}
    PressEnter;
}
