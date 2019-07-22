#include <stdio.h>
#include "../../../Algorithms/01_abstract/Status.h"                //**01_abstract**//
#include "../../../Algorithms/03_stack_queue/01 SequenceStack/SequenceStack.c"    //**03_stack_queue**//
#include "../../../Algorithms/07_graph/01 MGraph/MGraph.c"        //**07_graph**//

/* ȫ�ֱ��� */
int sum;
SqStack S;                                        //�ݴ�·��

/* Funcԭ�� */
int Algo_7_29(MGraph G, int i, int j, int k);
void DFS_7_29(MGraph G, int i, int j, int k);    //ͨ�����޵�������ȱ���ͳ�ƺϷ�·��

int main(int argc, char *argv[])
{
    MGraph G;
    FILE *fp;                                    //��Ϊ����Դ
    char v1, v2;
    int i, j, k;

    printf("�������������ͼ...\n");
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
    printf("%c �� %c ֮��", v1, v2);
    sum ? printf("exsists %d ��", sum) : printf(" not exsist");
    printf("����Ϊ %d ��·��!\n", k);
    printf("\n");

    return 0;
}

/*����������������������������������������������
����7.29������i��j֮��·������Ϊk�ļ�·���� ��
����������������������������������������������*/
int Algo_7_29(MGraph G, int i, int j, int k)
{
    int v;

    for (v = 1; v <= G.vexnum; v++) {
        visited[v] = FALSE;    //�����ʱ��InitialΪδ����
    }

    sum = 0;                                    //ͳ�Ʒ���������·����

    DFS_7_29(G, i, j, k);                         //ͨ�����޵�������ȱ���ͳ�ƺϷ�·��

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
