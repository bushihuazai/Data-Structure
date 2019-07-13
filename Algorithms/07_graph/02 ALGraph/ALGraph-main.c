/************************************
 *					                *
 * �ļ���: 07 ͼ\02 ALGraph       *
 * 					                *
 * �ļ���: ALGraph-main.c           *
 * 							        *
 * ��  ��: ͼ���ڽӱ����Functest *
 *                                  *
 ************************************/

#include <stdio.h> 
#include "ALGraph.c" 										//**07 ͼ**//

void PrintElem(char c);

int main(int argc, char *argv[])
{
	ALGraph G;

	printf("1��2��3\nFunc CreateGraph_AL�� test...\n");	//1��2��3.FuncCreateGraph_AL��test
	{
		FILE *fp;
		int r;
		
		srand((unsigned)time(NULL));						//��ϵͳʱ������������� 
		r = rand()%2;										//���������
	
		switch(r)
		{
			case DG:
				printf("Initial����ͼ...\n");
				fp = fopen("TestData_DG_AL.txt", "r");
				break;
			case UDG:
				printf("Initial����ͼ...\n");
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
		printf("���ͼ���ڽӱ� G = \n");		
		OutputALGraph(G);
		printf("\n");
	}
	PressEnter;

	printf("5\nFunc LocateVex_AL test...\n");			//5.FuncLocateVex_ALtest
	{
		printf("���� '%c' ��λ��Ϊ %d \n", 'C', LocateVex_AL(G, 'C'));
		printf("\n");
	}
	PressEnter;	

	printf("6\nFunc GetVex_AL test...\n");				//6.FuncGetVex_ALtest
	{
		printf("�� %d �������ֵΪ '%c'\n", 3, GetVex_AL(G, 3));
		printf("\n");
	}
	PressEnter;	

	printf("8\nFunc FirstAdjVex_AL test...\n");			//8.FuncFirstAdjVex_ALtest
	{
		printf(" '%c' �ĵ�һ���ڽӶ�������Ϊ %d \n", 'B', FirstAdjVex_AL(G, 'B'));
		printf("\n");
	} 
	PressEnter;	

	printf("9\nFunc NextAdjVex_AL test...\n");			//9.FuncNextAdjVex_ALtest
	{
		printf(" '%c' ����� '%c' ����һ���ڽӶ������Ϊ %d \n", 'A', 'B', NextAdjVex_AL(G, 'A', 'B'));
		printf("\n");
	} 
	PressEnter;	

	printf("7\nFunc PutVex_AL test...\n");				//7.FuncPutVex_ALtest
	{
		printf("�Զ��� '%c' ��ֵ '%c' ��G = \n", 'A', 'X');
		PutVex_AL(&G, 'A', 'X');
		OutputALGraph(G);	
		printf("\n");
	} 
	PressEnter;
	
	printf("10\nFunc InsertVex_AL test...\n");			//10.FuncInsertVex_ALtest
	{
		printf("���붥�� '%c' ��G = \n", 'H');
		InsertVex_AL(&G, 'H');
		OutputALGraph(G);	
		printf("\n");
	} 
	PressEnter;	

	printf("12\nFunc InsertArc_AL test...\n");			//12.FuncInsertArc_ALtest
	{
		printf("˳�β��뻡 <%c, %c>��", 'H', 'X');
		printf("<%c, %c>��", 'H', 'C');
		printf("<%c, %c> ��G = \n", 'D', 'H');
		InsertArc_AL(&G, 'H', 'X');
		InsertArc_AL(&G, 'H', 'C');
		InsertArc_AL(&G, 'D', 'H');
		OutputALGraph(G);	
		printf("\n");
	} 
	PressEnter;

	printf("13\nFunc DeleteArc_AL test...\n");			//13.FuncDeleteArc_ALtest
	{
		printf("ɾ���� <%c, %c> ��G = \n", 'H', 'X');
		DeleteArc_AL(&G, 'H', 'X');
		OutputALGraph(G);	
		printf("\n");
	}
	PressEnter;
		
	printf("11\nFunc DeleteVex_AL test...\n");			//11.FuncDeleteVex_ALtest
	{
		printf("ɾ������ '%c' ��G = \n", 'H');
		DeleteVex_AL(&G, 'H');
		OutputALGraph(G);	
		printf("\n");
	}
	PressEnter;

	printf("14��15\nFunc DFSTraverse_AL�� test...\n");	//14��15.FuncDFSTraverse_AL��test
	{
		printf("������ȱ���ͼ G = ");
		DFSTraverse_AL(G, PrintElem);	
		printf("\n\n");
	}
	PressEnter;

	printf("16\nFunc BFSTraverse_AL test...\n");		//16.FuncBFSTraverse_ALtest
	{
		printf("������ȱ���ͼ G = ");
		BFSTraverse_AL(G, PrintElem);	
		printf("\n\n");
	}
	PressEnter;
	
	printf("4\nFunc ClearGraph_AL test...\n");			//4.FuncClearGraph_ALtest
	{
		printf("���ͼ...\n");
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
