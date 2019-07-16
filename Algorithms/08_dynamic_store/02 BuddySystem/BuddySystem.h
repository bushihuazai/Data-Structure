/*****************************
 *                           *
 * �ļ���: 08_dynamic_store *
 *                           *
 * �ļ���: BuddySystem.h     *
 *                           *
 * ��  ��: ���ϵͳ          *
 *                           *
 *****************************/

#ifndef BUDDYSYSTEM_H
#define BUDDYSYSTEM_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../../01_abstract/Status.h"							//**01_abstract**//

/* �궨�� */
#define M 3						//�����ÿռ�������64k�ֵ�2���ݴΣ��ӱ�ĸ���ΪM+1 

/* ���Ͷ��� */
typedef struct WORD_b {
	struct WORD_b *llink;		//ָ��ǰ�����
	int tag;					//���־��0���У�1ռ��
	int kval;					//���С��ֵΪ2���ݴ�k
	struct WORD_b *rlink;		//ͷ����ָ���̽��
} WORD_b;						//WORD_b���ڴ������ͣ����ĵ�һ����Ҳ��Ϊhead
typedef struct HeadNode {
	int nodesize;				//������Ŀ��п�Ĵ�С
	WORD_b *first;				//������ı�ͷָ��
} FreeList[M + 1];					//��ͷ��������

/* ȫ�ֱ��� */
WORD_b *start, *end;			//�ڴ������յ�

/* ���ϵͳFunc�б� */
void InitSpace_b(FreeList avail);
/*����������������������������
��(01)Initialһ������ڴ�顣��
����������������������������*/

WORD_b *AllocBuddy(FreeList avail, int n);
/*��������������������������
��(02)�㷨8.2�������㷨�� ��
��������������������������*/

WORD_b *Buddy(WORD_b *p);
/*��������������������������������������
��(03)����p���ڴ��Ļ���ڴ���ַ�� ��
��������������������������������������*/

void Reclaim_b(FreeList avail, WORD_b **p);
/*����������������
��(04)�����㷨����
����������������*/

void PrintLayout_b(FreeList avail);
/*����������������������������������
��(05)�����ǰ�����ڴ����ֹ��ַ����
����������������������������������*/

#endif
