#include <stdio.h>
#include "../../../Algorithms/01_abstract/Status.h"				//**01_abstract**//
#include "../../../Algorithms/03_stack_queue/01 SequenceStack/SequenceStack.c"	//**03_stack_queue**//
#include "../../../Algorithms/07_graph/01 MGraph/MGraph.c"		//**07_graph**//

/* Funcԭ�� */
Status Algo_7_26(MGraph G);
void FindInDegree_7_26(MGraph G, int indegree[]);//�Ը����������

int main(int argc, char *argv[])
{
	MGraph G;
	FILE *fp;									//��Ϊ����Դ

	printf("�������������ͼ...\n");
	G.kind = DG;								//������ͼΪ��
	fp = fopen("Data/Algo_7_26.txt", "r");
	CreateDG_M(fp, &G);
	fclose(fp);
	OutputMGraph(G);
	printf("\n");

	Algo_7_26(G);
	printf("\n");

	return 0;
}

/*����������������������������������������
����7.26��������ͼ�ڽӾ����Ϊ��������ʽ��
����������������������������������������*/
Status Algo_7_26(MGraph G)			//�����ǽ�ԭͼ�������б�Ϊ����������
{
	SqStack S;
	int i, j;
	int count, indegree[MAX_VERTEX_NUM + 1];
	int tmp[MAX_VERTEX_NUM + 1];							//�洢��������

	FindInDegree_7_26(G, indegree);						//�Ը����������
	InitStack_Sq(&S);									//Initialջ

	for (i = 1; i <= G.vexnum; i++) {						//�������Ϊ0�Ķ���ջ
		if (!indegree[i]) {
			Push_Sq(&S, i);    //���Ϊ0�߽�ջ
		}
	}

	count = 0;											//��ԭ���м���

	while (!StackEmpty_Sq(S)) {
		Pop_Sq(&S, &i);
		count++;
		tmp[count] = i;									//�ݴ���������

		for (j = 1; j <= G.vexnum; j++) {
			if (G.arcs[i][j].adj) {
				if (!(--indegree[j])) {				//��i�Ŷ����ÿ���ڽӵ����ȼ�һ
					Push_Sq(&S, j);
				}
			}
		}
	}

	if (count < G.vexnum) {
		printf("������ͼ�л�·!!\n");
		return ERROR;
	} else {
		printf("������ͼ����������Ϊ��\n�ɱ������ ��");
		for (i = 1; i <= G.vexnum; i++) {
			printf(" %c", G.vexs[tmp[i]]);
		}
		printf("\n\n");

		printf("������ͼ������������Ϊ��\n�±������ ��");
		for (i = G.vexnum; i >= 1; i--) {
			printf(" %c", G.vexs[tmp[i]]);
		}
		printf("\n");

		return OK;
	}

}

void FindInDegree_7_26(MGraph G, int indegree[])
{
	int i, j;

	for (i = 1; i <= G.vexnum; i++) {
		indegree[i] = 0;    //Initial�������
	}

	for (i = 1; i <= G.vexnum; i++) {
		for (j = 1; j <= G.vexnum; j++) {
			if (G.arcs[i][j].adj) {
				indegree[j]++;
			}
		}
	}

}
