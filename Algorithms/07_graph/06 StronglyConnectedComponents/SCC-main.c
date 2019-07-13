/**************************************************
 *                                                *
 * �ļ���: 07 ͼ\06 StronglyConnectedComponents *
 *                                                *
 * �ļ���: SCC-main.c                             *
 * 							                      *
 * ��  ��: ǿ��ͨ�������Functest                 *
 *                                                *
 **************************************************/

#include <stdio.h>
#include "SCC.c" 												//**07 ͼ**//													

int main(int argc, char *argv[])
{
    OLGraph G;

    printf("Initial���������ͼ...\n");
	{
		FILE *fp;
		
	    fp = fopen("TestData_DG_OL.txt", "r");					//�ĵ��л���¼��Ϊ����
	    CreateDG_OL(fp, &G);
	    fclose(fp);
	    OutputOLGraph(G);
	    printf("\n");
	}
    PressEnter;

	printf("1��2��3��4��5\nFunc Kosaraju�� test...\n");		//1��2��3��4��5.FuncKosaraju��test
	{
	    printf("���������ͼ��ǿ��ͨ����...\n");
	    Kosaraju(G);
	    printf("\n");
	}
    PressEnter;
}
