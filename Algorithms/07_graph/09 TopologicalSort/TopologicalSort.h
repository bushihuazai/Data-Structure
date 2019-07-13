/**************************************
 *					                  *
 * �ļ���: 07 ͼ\09 TopologicalSort *
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
#include "../../03 ջ�Ͷ���/01 SequenceStack/SequenceStack.c"	//**03 ջ�Ͷ���**//
#include "../02 ALGraph/ALGraph.c" 								//**07 ͼ**//

/* ����ͼ��������Func�б� */
Status TopologicalSort(ALGraph G, int Topo[]);
/*����������������������������������
��(01)�㷨7.12��������ͼ�������򡣩�
����������������������������������*/

void FindInDegree(ALGraph G, int indegree[MAX_VERTEX_NUM+1]);
/*����������������������������
��(02)������ͼ����������ȡ���
����������������������������*/

#endif
