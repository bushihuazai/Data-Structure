/***************************************
 *							           *
 * �ļ���: 06 ���Ͷ�����\10 PowerSet *
 * 						               *
 * �ļ���: PowerSet.h                  *
 * 						               *
 * ��  ��: �ݼ���ز����б�            *
 * 						               *
 ***************************************/

#ifndef POWERSET_H
#define POWERSET_H

#include <stdio.h>
#include "../../01_abstract/Status.h"					//**01_abstract**//
#include "../../01_abstract/Scanf.c"					//**01_abstract**//
#include "../../02 ���Ա�/04 SinglyLinkedList/SinglyLinkedList.c"	//**02 ���Ա�**// 

/* �ݼ����Ͷ��� */
typedef LElemType_L PElemType;

/* �ݼ�Func�б� */
Status CreatePowerSet_PS(FILE *fp, LinkList *A);
/*��������������������������������
��(01)��������A������Ԫ��Ϊint����
��������������������������������*/

void GetPowerSet_PS(int i, LinkList A, LinkList B);
/*������������������������������������������������������������������������
��(02)�㷨6.14 && 6.15����ȡ����A���ݼ�������B�ݴ�ÿһ��������ݼ��Ӽ�����
������������������������������������������������������������������������*/

void Output_PS(LinkList A);
/*����������������������������
��(03)�������HT(Initial��)����
����������������������������*/

#endif
