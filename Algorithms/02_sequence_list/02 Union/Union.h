/********************************
 *                              *
 * �ļ���: 02_sequence_list\02 Union *
 *                              *
 * �ļ���: Union.h              *
 *                              *
 * ��  ��: �󲢼���ز����б�   *
 *                              *
 ********************************/

#ifndef UNION_H
#define UNION_H

#include "../01 SequenceList/SequenceList.c"    //**02_sequence_list**//

/* ����Func�б� */
void Union(SqList *La, SqList Lb);
/*������������������������
��(01)�㷨2.1��A=A��B�� ��
������������������������*/

Status equal(LElemType_Sq e1, LElemType_Sq e2);
/*��������������������������
��(02)�ж���Ԫ���Ƿ���ȡ���
��������������������������*/

#endif
