/********************************************
 *						                    *
 * �ļ���: 07_graph\04 AMLGraph              *
 * 						                    *
 * �ļ���: AMLGraph-main.c                  *
 * 							                *
 * ��  ��: ����ͼ���ڽӶ��ر����Functest *
 *                                          *
 ********************************************/

#include <stdio.h>
#include "AMLGraph.c" 							//**07_graph**//

void PrintElem(char c);

int main(int argc, char *argv[])
{
	AMLGraph G;

	printf("1\nFunc CreateDG_AML�� test...\n");			//1.FuncCreateDG_AML��test
	{
		FILE *fp;

		printf("Initial����ͼ...\n");
		fp = fopen("TestData_UDG_AML.txt", "r");			//�ĵ��л���¼��Ϊ����
		CreateUDG_AML(fp, &G);
		fclose(fp);
		printf("\n");
	}
	PressEnter;

	printf("15\nFunc OutputAMLGraph test...\n");		//15.FuncOutputAMLGraphtest
	{
		printf("�������ͼ���ڽӶ��ر� G = \n");
		OutputAMLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("3\nFunc LocateVex_AML test...\n");			//3.FuncLocateVex_AMLtest
	{
		printf("���� '%c' ��λ��Ϊ %d \n", 'C', LocateVex_AML(G, 'C'));
		printf("\n");
	}
	PressEnter;

	printf("4\nFunc GetVex_AML test...\n");				//4.FuncGetVex_AMLtest
	{
		printf("�� %d �������ֵΪ '%c' \n", 3, GetVex_AML(G, 3));
		printf("\n");
	}
	PressEnter;

	printf("6\nFunc FirstAdjVex_AML test...\n");		//6.FuncFirstAdjVex_AMLtest
	{
		printf(" '%c' �ĵ�һ���ڽӶ�������Ϊ %d \n", 'D', FirstAdjVex_AML(G, 'D'));
		printf("\n");
	}
	PressEnter;

	printf("7\nFunc NextAdjVex_AML test...\n");			//7.FuncNextAdjVex_AMLtest
	{
		printf(" '%c' ����� '%c' ����һ���ڽӶ������Ϊ %d \n", 'D', 'A', NextAdjVex_AML(G, 'D', 'A'));
		printf("\n");
	}
	PressEnter;

	printf("5\nFunc PutVex_AML test...\n");				//5.FuncPutVex_AMLtest
	{
		printf("�Զ��� '%c' ��ֵ '%c'��G = \n", 'A', 'X');
		PutVex_AML(&G, 'A', 'X');
		OutputAMLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("8\nFunc InsertVex_AML test...\n");			//8.FuncInsertVex_AMLtest
	{
		printf("���붥�� '%c' ��G = \n", 'H');
		InsertVex_AML(&G, 'H');
		OutputAMLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("10\nFunc InsertArc_AML test...\n");			//10.FuncInsertArc_AMLtest
	{
		printf("˳�β��뻡 <%c, %c>��", 'H', 'X');
		printf("<%c, %c>��", 'H', 'C');
		printf("<%c, %c> ��G = \n", 'D', 'H');
		InsertArc_AML(&G, 'H', 'X');
		InsertArc_AML(&G, 'H', 'C');
		InsertArc_AML(&G, 'D', 'H');
		OutputAMLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("11\nFunc DeleteArc_AML test...\n");			//11.FuncDeleteArc_AMLtest
	{
		printf("ɾ���� <%c, %c> ��G = \n", 'H', 'X');
		DeleteArc_AML(&G, 'H', 'X');
		OutputAMLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("09\nFunc DeleteVex_AML test...\n");			//09.FuncDeleteVex_AMLtest
	{
		printf("ɾ������ '%c' ��G = \n", 'H');
		DeleteVex_AML(&G, 'H');
		OutputAMLGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("12��13\nFunc DFSTraverse_AML�� test...\n");	//12��13.FuncDFSTraverse_AML��test
	{
		printf("������ȱ�������ͼ G = ");
		DFSTraverse_AML(G, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("14\nFunc BFSTraverse_AML test...\n");		//14.FuncBFSTraverse_AMLtest
	{
		printf("������ȱ�������ͼ G = ");
		BFSTraverse_AML(G, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("2\nFunc ClearGraph_AML test...\n");			//2.FuncClearGraph_AMLtest
	{
		printf("�������ͼ...\n");
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
