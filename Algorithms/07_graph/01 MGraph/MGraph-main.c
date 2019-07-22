/******************************************************
 *                                                      *
 * �ļ���: 07_graph\01 MGraph                          *
 *                                                       *
 * �ļ���: MGraph-main.c                              *
 *                                                       *
 * ��  ��: ͼ��������飨�ڽӾ��󣩱�ʾ�����Functest *
 *                                                    *
 ******************************************************/

#include <stdio.h>
#include "MGraph.c"                                             //**07_graph**//

void PrintElem(char c);

int main(int argc, char *argv[])
{
    MGraph G;

    printf("1��2��3��4��5\nFunc CreateGraph_M�� test...\n");//1��2��3��4��5.FuncCreateGraph_M��test
    {
        FILE *fp;
        int r;

        srand((unsigned)time(NULL));                            //��ϵͳʱ�������������
        r = rand() % 4;                                            //���������

        switch (r) {
            case DG:
                printf("Initial����ͼ G ...\n");
                fp = fopen("TestData_DG_M.txt", "r");
                break;
            case DN:
                printf("Initial������ G ...\n");
                fp = fopen("TestData_DN_M.txt", "r");
                break;
            case UDG:
                printf("Initial����ͼ G ...\n");
                fp = fopen("TestData_UDG_M.txt", "r");
                break;
            case UDN:
                printf("Initial������ G ...\n");
                fp = fopen("TestData_UDN_M.txt", "r");
                break;
        }
        CreateGraph_M(fp, &G);
        fclose(fp);
        printf("\n");
    }
    PressEnter;

    printf("19\nFunc OutputMGraph test...\n");                //19.FuncOutputMGraphtest
    {
        printf("���ͼ���������ڽӾ��� G = \n");
        OutputMGraph(G);
        printf("\n");
    }
    PressEnter;

    printf("7\nFunc LocateVex_M test...\n");                    //7.FuncLocateVex_Mtest
    {
        printf("���� '%c' ��λ��Ϊ %d\n", 'C', LocateVex_M(G, 'C'));
        printf("\n");
    }
    PressEnter;

    printf("8\nFunc GetVex_M test...\n");                        //8.FuncGetVex_Mtest
    {
        printf("�� %d �������ֵΪ '%c'\n", 3, GetVex_M(G, 3));
        printf("\n");
    }
    PressEnter;

    printf("10\nFunc FirstAdjVex_M test...\n");                //10.FuncFirstAdjVex_Mtest
    {
        printf(" '%c' �ĵ�һ���ڽӶ�������Ϊ %d\n", 'B', FirstAdjVex_M(G, 'B'));
        printf("\n");
    }
    PressEnter;

    printf("11\nFunc NextAdjVex_M test...\n");                //11.FuncNextAdjVex_Mtest
    {
        printf(" '%c' ����� '%c' ����һ���ڽӶ������Ϊ %d\n", 'A', 'B', NextAdjVex_M(G, 'A', 'B'));
        printf("\n");
    }
    PressEnter;

    printf("9\nFunc PutVex_M test...\n");                        //9.FuncPutVex_Mtest
    {
        printf("�Զ��� '%c' ��ֵ '%c' ��G = \n", 'A', 'X');
        PutVex_M(&G, 'A', 'X');
        OutputMGraph(G);
        printf("\n");
    }
    PressEnter;

    printf("12\nFunc InsertVex_M test...\n");                    //12.FuncInsertVex_Mtest
    {
        printf("���붥�� '%c' ��G = \n", 'H');
        InsertVex_M(&G, 'H');
        OutputMGraph(G);
        printf("\n");
    }
    PressEnter;

    printf("14\nFunc InsertArc_M test...\n");                    //14.FuncInsertArc_Mtest
    {
        printf("˳�β��뻡 <%c, %c, 1>��", 'H', 'X');
        printf("<%c, %c, 1>��", 'H', 'C');
        printf("<%c, %c, 1> ��G = \n", 'D', 'H');
        InsertArc_M(&G, 'H', 'X', 1);
        InsertArc_M(&G, 'H', 'C', 1);
        InsertArc_M(&G, 'D', 'H', 1);
        OutputMGraph(G);
        printf("\n");
    }
    PressEnter;

    printf("15\nFunc DeleteArc_M test...\n");                    //15.FuncDeleteArc_Mtest
    {
        printf("ɾ���� <%c, %c> ��G = \n", 'H', 'X');
        DeleteArc_M(&G, 'H', 'X');
        OutputMGraph(G);
        printf("\n");
    }
    PressEnter;

    printf("13\nFunc DeleteVex_M test...\n");                    //13.FuncDeleteVex_Mtest
    {
        printf("ɾ������ '%c' ��G = \n", 'B');
        DeleteVex_M(&G, 'B');
        OutputMGraph(G);
        printf("\n");
    }
    PressEnter;

    printf("16��17\nFunc DFSTraverse_M�� test...\n");            //16��17.FuncDFSTraverse_M��test
    {
        printf("������ȱ���ͼ����G = ");
        DFSTraverse_M(G, PrintElem);
        printf("\n\n");
    }
    PressEnter;

    printf("18\nFunc BFSTraverse_M test...\n");                //18.FuncBFSTraverse_Mtest
    {
        printf("������ȱ���ͼ����G = ");
        BFSTraverse_M(G, PrintElem);
        printf("\n\n");
    }
    PressEnter;

    printf("6\nFunc ClearGraph_M test...\n");                    //6.FuncClearGraph_Mtest
    {
        printf("��ձ�ͼ��G ...\n");
        ClearGraph_M(&G);
        OutputMGraph(G);
        printf("\n");
    }
    PressEnter;
}

void PrintElem(char c)
{
    printf("%c ", c);
}
