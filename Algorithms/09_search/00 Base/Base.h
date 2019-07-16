/*************************************
*                                    *
* �ļ���: 09_search                  *
*                                    *
* �ļ���: Base.h                     *
*                                    *
* ��  ��: ���ұ�ṹ�������³������ *
*                                    *
**************************************/

#ifndef BASE_H
#define BASE_H

#include <stdio.h>
#include <stdlib.h>
#include "../../01_abstract/Status.h"				//**01_abstract**//
#include "../../01_abstract/Scanf.c"				//**01_abstract**//

/* ���ұ����Ͷ��� */
typedef int KeyType;			//�ؼ�������
typedef struct {
	int key;					//�ؼ�����
	float weight;				//�����򣨴˴�����ΪȨ�أ�
} ElemType_Search;				//�����Ԫ������

//0�ŵ�Ԫ����
typedef struct {
	ElemType_Search *elem;		//����Ԫ�ش洢�ռ��ַ��0�ŵ�Ԫ is empty
	int length;					//����
} Table;							//���ұ�

/* Func�б� */
Status Create(FILE *fp, Table *T, int n);
/*����������������
��(01)�������ұ�
����������������*/

void Destory(Table *T);
/*����������������
��(02)���ٲ��ұ�
����������������*/

void Traverse(Table T, void(Visit)(ElemType_Search));
/*����������������
��(03)�������ұ�
����������������*/

void PrintKey(ElemType_Search e);
/*������������������������������������������
��(04)������ұ��еĹؼ��֣�ֻ���key�� ��
������������������������������������������*/

#endif
