/****************************************
 *                                        *
 * �ļ���: 07_graph\08 ArticulationPoint *
 *                                         *
 * �ļ���: ArticulationPoint-main.c     *
 *                                         *
 * ��  ��: ����ͼ�ؽڵ����Functest     *
 *                                      *
 ****************************************/

#include <stdio.h>
#include "ArticulationPoint.c"                                     //**07_graph**//                                                    

int main(int argc, char *argv[])
{
    ALGraph G;

    printf("�������������ͼ...\n");
    {
        FILE *fp;

        fp = fopen("TestData_UDG_AL.txt", "r");
        CreateGraph_AL(fp, &G);
        fclose(fp);
        OutputALGraph(G);
        printf("\n");
    }
    PressEnter;

    printf("1��2��3��4\nFunc FindArticul�� test...\n");        //1��2��3��4.FuncFindArticul��OutputAPoint��test
    {
        printf("Ѱ�Ҳ�����ؽڵ�...\n");
        FindArticul(G);
        OutputAPoint(G);
        printf("\n");
    }
    PressEnter;

    return 0;
}
