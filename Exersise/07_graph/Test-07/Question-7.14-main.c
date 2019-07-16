#include <stdio.h>
#include "../../../Algorithms/01_abstract/Status.h"				//**01_abstract**//
#include "../../../Algorithms/07_graph/02 ALGraph/ALGraph.c"		//**07_graph**//

/* Funcԭ�� */
Status Algo_7_14(FILE *fp, ALGraph *G);

int main(int argc, char *argv[])
{
	ALGraph G;
	FILE *fp;									//��Ϊ����Դ

	printf("�������������ͼ...\n");
	fp = fopen("Data/Algo_7_14.txt", "r");
	Algo_7_14(fp, &G);
	fclose(fp);
	OutputALGraph(G);
	printf("\n");

	return 0;
}

/*��������������������������
����7.14����������ͼ�ڽӱ�
��������������������������*/
Status Algo_7_14(FILE *fp, ALGraph *G)
{
	return CreateGraph_AL(fp, G);
}
