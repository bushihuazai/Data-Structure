/********************************************
 *                                          *
 * �ļ���: 10_internal_sort                    *
 *                                          *
 * �ļ���: StaticLinkedListType.h           *
 *                                          *
 * ��  ��: ��̬����洢�ṹ���������㷨���� *
 *                                          *
 ********************************************/

#ifndef STATICLINKEDLISTTYPE_H
#define STATICLINKEDLISTTYPE_H

#include <stdio.h>
#include <limits.h>
#include "../../01_abstract/Status.h"			//**01_abstract**//
#include "../../01_abstract/Scanf.c"			//**01_abstract**//

/* �궨�� */
#define MAXSIZE 100							//��̬��������  
#define MAXINT INT_MAX
#define LT(a,b) ((a)<(b))

/* ���Ͷ��� */
typedef int KeyType;						//����ؼ�������Ϊ��������
typedef struct {							//��̬����
	KeyType key;							//�ؼ�����
	//ʹ�ýṹ�����ʹ������չ
} RcdType;									//��¼����
typedef struct {
	RcdType rc;								//��¼��
	int next;								//ָ����
} SLNode;									//��������
typedef struct {
	SLNode r[MAXSIZE];						//0�ŵ�ԪΪ��ͷ���
	int length;								//����ǰ����
} SLinkList_sort;							//��̬��������

/* ��̬����洢�ṹFunc�б� */
Status CreateSortList(FILE *fp, SLinkList_sort *L);
/*������������������������������
��(01)����һ������˳������С���
������������������������������*/

void Traverse(SLinkList_sort L, void(Visit)(KeyType));
/*������������������
��(02)�������L�� ��
������������������*/

#endif
