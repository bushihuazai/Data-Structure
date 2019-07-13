/************************************
 *					                *
 * 文件夹: 07 图\02 ALGraph       *
 * 					                *
 * 文件名: ALGraph-main.c           *
 * 							        *
 * 内  容: 图（邻接表）相关Functest *
 *                                  *
 ************************************/

#include <stdio.h> 
#include "ALGraph.c" 										//**07 图**//

void PrintElem(char c);

int main(int argc, char *argv[])
{
	ALGraph G;

	printf("1、2、3\nFunc CreateGraph_AL等 test...\n");	//1、2、3.FuncCreateGraph_AL等test
	{
		FILE *fp;
		int r;
		
		srand((unsigned)time(NULL));						//用系统时间做随机数种子 
		r = rand()%2;										//生成随机数
	
		switch(r)
		{
			case DG:
				printf("Initial有向图...\n");
				fp = fopen("TestData_DG_AL.txt", "r");
				break;
			case UDG:
				printf("Initial无向图...\n");
				fp = fopen("TestData_UDG_AL.txt", "r");
				break;			
		}
		CreateGraph_AL(fp, &G); 
		fclose(fp);
		printf("\n");
	}
	PressEnter;
	
	printf("17\nFunc OutputALGraph test...\n");			//17.FuncOutputALGraphtest
	{
		printf("输出图的邻接表 G = \n");		
		OutputALGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("5\nFunc LocateVex_AL test...\n");			//5.FuncLocateVex_ALtest
	{
		printf("顶点 '%c' 的位置为 %d \n", 'C', LocateVex_AL(G, 'C'));
		printf("\n");
	}
	PressEnter;	

	printf("6\nFunc GetVex_AL test...\n");				//6.FuncGetVex_ALtest
	{
		printf("第 %d 个顶点的值为 '%c'\n", 3, GetVex_AL(G, 3));
		printf("\n");
	}
	PressEnter;	

	printf("8\nFunc FirstAdjVex_AL test...\n");			//8.FuncFirstAdjVex_ALtest
	{
		printf(" '%c' 的第一个邻接顶点的序号为 %d \n", 'B', FirstAdjVex_AL(G, 'B'));
		printf("\n");
	} 
	PressEnter;	

	printf("9\nFunc NextAdjVex_AL test...\n");			//9.FuncNextAdjVex_ALtest
	{
		printf(" '%c' 相对于 '%c' 的下一个邻接顶点序号为 %d \n", 'A', 'B', NextAdjVex_AL(G, 'A', 'B'));
		printf("\n");
	} 
	PressEnter;	

	printf("7\nFunc PutVex_AL test...\n");				//7.FuncPutVex_ALtest
	{
		printf("对顶点 '%c' 赋值 '%c' 后，G = \n", 'A', 'X');
		PutVex_AL(&G, 'A', 'X');
		OutputALGraph(G);	
		printf("\n");
	} 
	PressEnter;
	
	printf("10\nFunc InsertVex_AL test...\n");			//10.FuncInsertVex_ALtest
	{
		printf("插入顶点 '%c' 后，G = \n", 'H');
		InsertVex_AL(&G, 'H');
		OutputALGraph(G);	
		printf("\n");
	} 
	PressEnter;	

	printf("12\nFunc InsertArc_AL test...\n");			//12.FuncInsertArc_ALtest
	{
		printf("顺次插入弧 <%c, %c>、", 'H', 'X');
		printf("<%c, %c>、", 'H', 'C');
		printf("<%c, %c> 后，G = \n", 'D', 'H');
		InsertArc_AL(&G, 'H', 'X');
		InsertArc_AL(&G, 'H', 'C');
		InsertArc_AL(&G, 'D', 'H');
		OutputALGraph(G);	
		printf("\n");
	} 
	PressEnter;

	printf("13\nFunc DeleteArc_AL test...\n");			//13.FuncDeleteArc_ALtest
	{
		printf("删除弧 <%c, %c> 后，G = \n", 'H', 'X');
		DeleteArc_AL(&G, 'H', 'X');
		OutputALGraph(G);	
		printf("\n");
	}
	PressEnter;
		
	printf("11\nFunc DeleteVex_AL test...\n");			//11.FuncDeleteVex_ALtest
	{
		printf("删除顶点 '%c' 后，G = \n", 'H');
		DeleteVex_AL(&G, 'H');
		OutputALGraph(G);	
		printf("\n");
	}
	PressEnter;

	printf("14、15\nFunc DFSTraverse_AL等 test...\n");	//14、15.FuncDFSTraverse_AL等test
	{
		printf("深度优先遍历图 G = ");
		DFSTraverse_AL(G, PrintElem);	
		printf("\n\n");
	}
	PressEnter;

	printf("16\nFunc BFSTraverse_AL test...\n");		//16.FuncBFSTraverse_ALtest
	{
		printf("广度优先遍历图 G = ");
		BFSTraverse_AL(G, PrintElem);	
		printf("\n\n");
	}
	PressEnter;
	
	printf("4\nFunc ClearGraph_AL test...\n");			//4.FuncClearGraph_ALtest
	{
		printf("清空图...\n");
		ClearGraph_AL(&G);
		OutputALGraph(G);	
		printf("\n");
	}
	PressEnter;					
}

void PrintElem(char c)
{
	printf("%c ", c);
}
