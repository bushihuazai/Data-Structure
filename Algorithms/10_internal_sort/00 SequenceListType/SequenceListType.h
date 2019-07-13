/******************************************
 *                                        *
 * �ļ���: 10 �ڲ�����                  *
 *                                        *
 * �ļ���: SequenceListType.h             *
 *                                        *
 * ��  ��: ˳���洢�ṹ���������㷨���� *
 *                                        *
 ******************************************/

#ifndef SEQUENCELISTTYPE_H
#define SEQUENCELISTTYPE_H

#include <stdio.h>
#include "../../01_abstract/Status.h"		//**01_abstract**//
#include "../../01_abstract/Scanf.c"		//**01_abstract**//

/* �궨�� */
#ifndef MAXSIZE
#define MAXSIZE 20						//һ������ʾ����С˳������󳤶�
#endif 
#define LT(a,b) ((a)<(b))					
#define LQ(a,b) ((a)<=(b))

/* ���Ͷ��� */
typedef int KeyType;					//����ؼ�������Ϊ��������
typedef struct							//˳���ṹ 
{
	KeyType key;						//�ؼ����� 
	//ʹ�ýṹ�����ʹ������չ 
}RcdType;								//��¼����
typedef struct
{
	RcdType r[MAXSIZE+1];				//r[0]���û������ڱ���Ԫ
	int length;							//˳����� 
}SqList_sort;							//˳������� 

/* ˳���洢�ṹFunc�б� */
Status CreateSortList(FILE *fp, SqList_sort *L);
/*������������������������������
��(01)����һ������˳������С���
������������������������������*/

void Traverse(SqList_sort L, void(Visit)(KeyType));
/*������������������
��(02)�������L�� ��
������������������*/

#endif 
