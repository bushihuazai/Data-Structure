/**************************************
 *					                  *
 * �ļ���: 07_graph\10 CriticalPath    *
 * 					                  *
 * �ļ���: CriticalPath.h             *
 *                                    *
 * ��  ��: AOE-���ؼ�·����ز����б� *
 *                                    *
 **************************************/

#ifndef CRITICALPATH_H
#define CRITICALPATH_H

#include <stdio.h>
#include "../../01_abstract/Status.h"								//**01_abstract**//
#include "../../03_stack_queue/01 SequenceStack/SequenceStack.c"	//**03_stack_queue**//
#include "../02 ALGraph/ALGraph.c" 								//**07_graph**//

/* ȫ�ֱ��� */
SqStack T;														//�������ж���ջ
int ve[MAX_VERTEX_NUM + 1];										//���¼������㣩�����緢��ʱ��
int vl[MAX_VERTEX_NUM + 1];										//���¼������㣩����ٷ���ʱ��

/* AOE-���ؼ�·��Func�б� */
Status TopologicalOrder(ALGraph G, SqStack *T);
/*����������������������������������������������������������
��(01)�㷨7.13�����������������򣬲�����¼����緢��ʱ�䡣��
����������������������������������������������������������*/

Status CriticalPath(ALGraph G);
/*����������������������������������
��(02)�㷨7.14�����������ؼ������
����������������������������������*/

void FindInDegree(ALGraph G, int indegree[MAX_VERTEX_NUM + 1]);
/*����������������������������
��(03)������ͼ����������ȡ���
����������������������������*/

#endif
