/******************************
 *                            *
 * �ļ���: 09_search          *
 *                            *
 * �ļ���: DLTree.h           *
 *                            *
 * ��  ��: ˫������ز����б� *
 *                            *
 ******************************/

#ifndef DLTREE_H
#define DLTREE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../01_abstract/Status.h"			//**01_abstract**//
#include "../../01_abstract/Scanf.c"			//**01_abstract**//

/* �궨�� */
#define MAXKEYLEN 16						//�ؼ��ֵ���󳤶� 

/* ���Ͷ��� */
typedef enum { LEAF, BRANCH } NodeKind;		//������ࣺ0-Ҷ�ӣ�1-��֧
typedef struct {
	char ch[MAXKEYLEN + 1];					//�ؼ���
	int num;								//�ؼ��ֳ���
} KeysType;									//�ؼ�������
typedef char Record;						//��¼����
typedef struct DLTNode {					//˫�����洢��ʾ
	NodeKind kind;							//�������
	char symbol;							//�洢�ؼ��ֵ�һ���ַ�
	struct DLTNode *next;					//ָ���ֵܽ���ָ��
	union {
		Record *infoptr;					//Ҷ�ӽ��ļ�¼ָ��
		struct DLTNode *first;				//��֧���ĺ�����ָ��
	} Ptr;
} DLTNode;									//B�����
typedef DLTNode *DLTree;					//ָ��B������ָ��

/* ˫����Func�б� */
Status CreateDLTree(FILE *fp, DLTree *DLT);
/*������������������
��(01)����˫��������
������������������*/

Record *SearchDLTree(DLTree DLT, KeysType K);
/*����������������������������������������
��(02)�㷨9.15�����ң�����ָ��K��ָ�롣 ��
����������������������������������������*/

Status InsertDLTree(DLTree *DLT, KeysType K);
/*��������������������������������������
��(03)���룺���ؼ���K���뵽˫�����С� ��
��������������������������������������*/

void PrintKeys(DLTree DLT);
/*��������������������������
��(04)���˫�����йؼ��֡���
��������������������������*/

#endif
