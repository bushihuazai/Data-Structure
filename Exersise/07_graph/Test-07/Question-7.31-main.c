#include <stdio.h>
#include "../../../Algorithms/07_graph/06 StronglyConnectedComponents/SCC.c" //**07_graph**//

/* Func原型 */
void Algo_7_31(OLGraph G);

int main(int argc, char *argv[])
{
    OLGraph G;
    FILE *fp;                                            //作为输入源

    printf("Initial并输出有向图...\n");
    fp = fopen("Data/Algo_7_31.txt", "r");                //文档中弧的录入为逆序
    CreateDG_OL(fp, &G);
    fclose(fp);
    OutputOLGraph(G);
    printf("\n");

    printf("计算此有向图的强连通分量...\n");
    Algo_7_31(G);
    printf("\n");
}

/*━━━━━━━━━━━━━┓
┃题7.31：求有向图强连通分量┃
┗━━━━━━━━━━━━━*/
void Algo_7_31(OLGraph G)                                //以十字链表存储结构为例
{
    Kosaraju(G);
}
