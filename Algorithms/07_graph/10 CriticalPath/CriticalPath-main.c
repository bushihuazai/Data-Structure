/**************************************
 *                                      *
 * 文件夹: 07_graph\10 CriticalPath    *
 *                                       *
 * 文件名: CriticalPath-main.c        *
 *                                       *
 * 内  容: AOE-网关键路径相关Functest *
 *                                    *
 **************************************/

#include <stdio.h>
#include "CriticalPath.c"                                         //**07_graph**//

int main(int argc, char *argv[])
{
    ALGraph G;

    printf("创建并输出有向图(带权)...\n");
    {
        FILE *fp;

        fp = fopen("TestData_DG_AL.txt", "r");
        CreateGraph_AL(fp, &G);
        fclose(fp);
        OutputALGraph(G);
        printf("\n");
    }
    PressEnter;

    printf("1、2、3\nFunc CriticalPath等 test...\n");            //1、2、3.FuncCriticalPath等test
    {
        printf("输出并标记AOV-网中的关键路径...\n");
        CriticalPath(G);
        printf("\n");
    }
    PressEnter;

    return 0;
}
