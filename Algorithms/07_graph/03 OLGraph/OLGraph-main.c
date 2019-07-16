/******************************************
 *                                        *
 * �ļ���: 07_graph\03 OLGraph             *
 *                                        *
 * �ļ���: OLGraph-main.c                 *
 * 							              *
 * ��  ��: ����ͼ��ʮ���������Functest *
 *                                        *
 ******************************************/

#include <stdio.h>
#include "OLGraph.c" 											//**07_graph**//

void PrintElem(char c);

int main(int argc, char *argv[])
{
	OLGraph G;

	printf("1\nFunc CreateDG_OL�� test...\n");				//1.FuncCreateDG_OL��test
	{
		FILE *fp;

		printf("Initial����ͼ G ...\n");
		fp = fopen("TestData_DG_OL.txt", "r");					//�ĵ��л���¼��Ϊ����
		CreateDG_OL(fp, &G);
		fclose(fp);
		printf("\n");
	}
	PressEnter;

	printf("15\nFunc OutputOLGraph test...\n");				//15.FuncOutputOLGraphtest
	{
		printf("�������ͼ��ʮ������ G = \n");
		OutputOLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("3\nFunc LocateVex_OL test...\n");				//3.FuncLocateVex_OLtest
	{
		printf("���� '%c' ��λ��Ϊ %d \n", 'C', LocateVex_OL(G, 'C'));
		printf("\n");
	}
	PressEnter;

	printf("4\nFunc GetVex_OL test...\n");					//4.FuncGetVex_OLtest
	{
		printf("�� %d �������ֵΪ '%c' \n", 3, GetVex_OL(G, 3));
		printf("\n");
	}
	PressEnter;

	printf("6\nFunc FirstAdjVex_OL test...\n");				//6.FuncFirstAdjVex_OLtest
	{
		printf("' %c' �ĵ�һ���ڽӶ�������Ϊ %d \n", 'D', FirstAdjVex_OL(G, 'D'));
		printf("\n");
	}
	PressEnter;

	printf("7\nFunc NextAdjVex_OL test...\n");				//7.FuncNextAdjVex_OLtest
	{
		printf(" '%c' ����� '%c' ����һ���ڽӶ������Ϊ %d\n", 'D', 'A', NextAdjVex_OL(G, 'D', 'A'));
		printf("\n");
	}
	PressEnter;

	printf("5\nFunc PutVex_OL test...\n");					//5.FuncPutVex_OLtest
	{
		printf("�Զ��� '%c' ��ֵ '%c'��G = \n", 'A', 'X');
		PutVex_OL(&G, 'A', 'X');
		OutputOLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("8\nFunc InsertVex_OL test...\n");					//8.FuncInsertVex_OLtest
	{
		printf("���붥�� '%c'��G = \n", 'H');
		InsertVex_OL(&G, 'H');
		OutputOLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("10\nFunc InsertArc_OL test...\n");				//10.FuncInsertArc_OLtest
	{
		printf("˳�β��뻡 <%c, %c>��", 'H', 'X');
		printf("<%c, %c>��", 'H', 'C');
		printf("<%c, %c>��G = \n", 'D', 'H');
		InsertArc_OL(&G, 'H', 'X');
		InsertArc_OL(&G, 'H', 'C');
		InsertArc_OL(&G, 'D', 'H');
		OutputOLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("11\nFunc DeleteArc_OL test...\n");				//11.FuncDeleteArc_OLtest
	{
		printf("ɾ���� <%c, %c>��G = \n", 'H', 'X');
		DeleteArc_OL(&G, 'H', 'X');
		OutputOLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("09\nFunc DeleteVex_OL test...\n");				//09.FuncDeleteVex_OLtest
	{
		printf("ɾ������ '%c'��G = \n", 'H');
		DeleteVex_OL(&G, 'H');
		OutputOLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("12��13\nFunc DFSTraverse_OL�� test...\n");		//12��13.FuncDFSTraverse_OL��test
	{
		printf("������ȱ�������ͼ G = ");
		DFSTraverse_OL(G, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("14\nFunc BFSTraverse_OL test...\n");				//14.FuncBFSTraverse_OLtest
	{
		printf("������ȱ�������ͼ G = ");
		BFSTraverse_OL(G, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("2\nFunc ClearGraph_OL test...\n");				//2.FuncClearGraph_OLtest
	{
		printf("�������ͼ...\n");
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
