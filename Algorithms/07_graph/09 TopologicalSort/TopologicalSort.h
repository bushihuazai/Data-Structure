/**************************************
 *                                      *
 * 文件夹: 07_graph\09 TopologicalSort *
 *                                       *
 * 文件名: TopologicalSort.h          *
 *                                    *
 * 内  容: 有向图拓扑排序相关操作列表 *
 *                                    *
 **************************************/

#ifndef TOPOLOGICALSORT_H
#define TOPOLOGICALSORT_H

#include <stdio.h>
#include "../../01_abstract/Status.h"                                //**01_abstract**//
#include "../../03_stack_queue/01 SequenceStack/SequenceStack.c"    //**03_stack_queue**//
#include "../02 ALGraph/ALGraph.c"                                 //**07_graph**//

/* 有向图拓扑排序Func列表 */
Status TopologicalSort(ALGraph G, int Topo[]);
/*━━━━━━━━━━━━━━━━┓
┃(01)算法7.12：求有向图拓扑排序。┃
┗━━━━━━━━━━━━━━━━*/

void FindInDegree(ALGraph G, int indegree[MAX_VERTEX_NUM + 1]);
/*━━━━━━━━━━━━━┓
┃(02)对有向图各顶点求入度。┃
┗━━━━━━━━━━━━━*/

#endif
