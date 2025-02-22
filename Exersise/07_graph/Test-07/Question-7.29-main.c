#include <stdio.h>
#include "../../../Algorithms/01_abstract/Status.h"                //**01_abstract**//
#include "../../../Algorithms/03_stack_queue/01 SequenceStack/SequenceStack.c"    //**03_stack_queue**//
#include "../../../Algorithms/07_graph/01 MGraph/MGraph.c"        //**07_graph**//

/* 全局变量 */
int sum;
SqStack S;                                        //暂存路径

/* Func原型 */
int Algo_7_29(MGraph G, int i, int j, int k);
void DFS_7_29(MGraph G, int i, int j, int k);    //通过有限的深度优先遍历统计合法路径

int main(int argc, char *argv[])
{
    MGraph G;
    FILE *fp;                                    //作为输入源
    char v1, v2;
    int i, j, k;

    printf("创建并输出有向图...\n");
    fp = fopen("Data/Algo_7_29.txt", "r");
    G.kind = DG;
    CreateDG_M(fp, &G);
    fclose(fp);
    OutputMGraph(G);
    printf("\n");

    v1 = 'u';
    v2 = 'v';
    i = LocateVex_M(G, v1);
    j = LocateVex_M(G, v2);
    k = 3;

    Algo_7_29(G, i, j, k);
    printf("%c 到 %c 之间", v1, v2);
    sum ? printf("exsists %d 条", sum) : printf(" not exsist");
    printf("长度为 %d 的路径!\n", k);
    printf("\n");

    return 0;
}

/*━━━━━━━━━━━━━━━━━━━━━━┓
┃题7.29：计算i到j之间路径长度为k的简单路径数 ┃
┗━━━━━━━━━━━━━━━━━━━━━━*/
int Algo_7_29(MGraph G, int i, int j, int k)
{
    int v;

    for (v = 1; v <= G.vexnum; v++) {
        visited[v] = FALSE;    //将访问标记Initial为未访问
    }

    sum = 0;                                    //统计符合条件的路径数

    DFS_7_29(G, i, j, k);                         //通过有限的深度优先遍历统计合法路径

    return sum;
}

void DFS_7_29(MGraph G, int i, int j, int k)
{
    int w, e;
    int count;
    int *p;

    visited[i] = TRUE;
    Push_Sq(&S, i);

    if (i == j) {
        for (p = S.base, count = -1; p < S.top; p++, count++)
            ;

        if (count == k) {
            sum++;

        }

        Pop_Sq(&S, &e);
        visited[i] = FALSE;        
                
turn;
    }
    
for(w=FirstAdjVex_M(G, G.vexs[i]); w; w=NextAdjVex_M(G, G.vexs[i], G.vexs[w]))
    {          if(!visited[w])
            D FS_7_29(G, w, { j, k);
    }
        
    }
if(!w)
    {      Pop_Sq(&S, &e);
        visited[i] = FALSE;
    }
}
