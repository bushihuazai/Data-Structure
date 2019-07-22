/****************************************
 *                                        *
 * 文件夹: 07_graph\08 ArticulationPoint *
 *                                         *
 * 文件名: ArticulationPoint-main.c     *
 *                                         *
 * 内  容: 无向图关节点相关Functest     *
 *                                      *
 ****************************************/

#include <stdio.h>
#include "ArticulationPoint.c"                                     //**07_graph**//                                                    

int main(int argc, char *argv[])
{
    ALGraph G;

    printf("创建并输出无向图...\n");
    {
        FILE *fp;

        fp = fopen("TestData_UDG_AL.txt", "r");
        CreateGraph_AL(fp, &G);
        fclose(fp);
        OutputALGraph(G);
        printf("\n");
    }
    PressEnter;

    printf("1、2、3、4\nFunc FindArticul等 test...\n");        //1、2、3、4.FuncFindArticul、OutputAPoint等test
    {
        printf("寻找并输出关节点...\n");
        FindArticul(G);
        OutputAPoint(G);
        printf("\n");
    }
    PressEnter;

    return 0;
}
