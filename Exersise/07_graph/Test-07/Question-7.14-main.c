#include <stdio.h>
#include "../../../Algorithms/01_abstract/Status.h"				//**01_abstract**//
#include "../../../Algorithms/07_graph/02 ALGraph/ALGraph.c"		//**07_graph**//

/* Func原型 */
Status Algo_7_14(FILE *fp, ALGraph *G);

int main(int argc, char *argv[])
{
	ALGraph G;
	FILE *fp;									//作为输入源

	printf("创建并输出有向图...\n");
	fp = fopen("Data/Algo_7_14.txt", "r");
	Algo_7_14(fp, &G);
	fclose(fp);
	OutputALGraph(G);
	printf("\n");

	return 0;
}

/*━━━━━━━━━━━━┓
┃题7.14：创建有向图邻接表┃
┗━━━━━━━━━━━━*/
Status Algo_7_14(FILE *fp, ALGraph *G)
{
	return CreateGraph_AL(fp, G);
}
