/**************************************
 *					                  *
 * �ļ���: 07_graph\09 TopologicalSort *
 * 					                  *
 * �ļ���: TopologicalSort.h          *
 *                                    *
 * ��  ��: ����ͼ����������ز����б� *
 *                                    *
 **************************************/

#ifndef TOPOLOGICALSORT_H
#define TOPOLOGICALSORT_H

#include <stdio.h>
#include "../../01_abstract/Status.h"								//**01_abstract**//
#include "../../03_stack_queue/01 SequenceStack/SequenceStack.c"	//**03_stack_queue**//
#include "../02 ALGraph/ALGraph.c" 								//**07_graph**//

/* ����ͼ��������Func�б� */
Status TopologicalSort(ALGraph G, int Topo[]);
/*����������������������������������
��(01)�㷨7.12��������ͼ�������򡣩�
����������������������������������*/

void FindInDegree(ALGraph G, int indegree[MAX_VERTEX_NUM + 1]);
/*����������������������������
��(02)������ͼ����������ȡ���
����������������������������*/

#endif
