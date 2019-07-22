/****************************************************
 *                                                    *
 * �ļ���: 05_array_lists\05 GeneralizedList-H&T *
 *                                                     *
 * �ļ���: GeneralizedList-H-T.h                    *
 *                                                     *
 * ��  ��: �����ͷβ����洢��ʾ����ز����б�   *
 *                                                     *
 ****************************************************/

#ifndef GENERALIZEDLIST_H_T_H
#define GENERALIZEDLIST_H_T_H

#include <stdio.h>
#include <stdlib.h>                                            //�ṩmalloc��realloc��free��exitԭ��
#include "../../01_abstract/Status.h"                            //**01_abstract**//
#include "../../04_string/01 SequenceString/SequenceString.c"    //**04_string**//

/* �����ͷβ����洢��ʾ�����Ͷ��� */
typedef enum { Head, Tail } Mark;
typedef enum { Atom, List } ElemTag;            //Atom==0��ԭ�ӽ�㣬List==1������
typedef char AtomType;                        //ԭ������
typedef struct GLNode {
    union {
        int mark;
    };                        //�������ϣ����ڵ�8�¹��������㷨��ʹ��

    ElemTag tag;                            //�������֣���������ԭ�ӽ��ͱ���
    union {                                //ԭ�ӽ��ͱ�������ϲ���
        AtomType atom;                        //atom��ԭ�ӽ���ֵ��AtomType���û�����
        struct {
            struct GLNode *hp;                //ָ���ͷ
            struct GLNode *tp;                //ָ���β
        } ptr;                                //�����ָ����
    } Union;
} GLNode;
typedef GLNode *GList;                        //���������

/* �����ͷβ����洢��Func�б� */
/* ��ÿһ��ȥ�����ſ���� */
void InitGList_GL_H_T(GList *L);
/*����������������������������������������
��(01)Initial�������������յĹ��������
����������������������������������������*/

void sever_GL_H_T_1(SString hstr, SString str);
/*������������������������������������������������������������������������������������
��(02-1)�㷨5.8�����ǿմ�str�ָ��������:hsubΪ��һ��','֮ǰ���Ӵ�,strΪ֮����Ӵ�����
������������������������������������������������������������������������������������*/

void CreateGList_GL_H_T_1(GList *L, SString S);
/*��������������������������������
��(03-1)�㷨5.7����S�����������
��������������������������������*/

void sever_GL_H_T_2(SString hstr, SString str);
/*������������������������������������������������������
��(02-2)���ǿմ�str�ָ��������:hsub����ͷ,str����β����
������������������������������������������������������*/

void CreateGList_GL_H_T_2(GList *L, SString S);
/*������������������������
��(03-2)��S��������� ��
������������������������*/

void ClearGList_GL_H_T(GList *L);
/*������������������������������
��(04)��չ�����޷����٣�����
������������������������������*/

void CopyGList_GL_H_T(GList *T, GList L);
/*����������������������������
��(05)�㷨5.6�����ƹ���� ��
����������������������������*/

int GListLength_GL_H_T(GList L);
/*��������������������
��(06)�������ȡ���
��������������������*/

int GListDepth_GL_H_T(GList L);
/*������������������������������
��(07)�㷨5.5����������ȡ� ��
������������������������������*/

Status GListEmpty_GL_H_T(GList L);
/*��������������������������
��(08)�жϹ�����Ƿ� is empty����
��������������������������*/

GList GetHead_GL_H_T(GList L);
/*����������������
��(09)��ȡ��ͷ����
����������������*/

GList GetTail_GL_H_T(GList L);
/*����������������
��(10)��ȡ��β����
����������������*/

void InsertFirst_GL_H_T(GList *L, GList e);
/*��������������������������������
��(11)����eΪ������һ��Ԫ�ء� ��
��������������������������������*/

void DeleteFirst_GL_H_T(GList *L, GList *e);
/*��������������������������������
��(12)ɾ��������ͷ����e���ء� ��
��������������������������������*/

void Traverse_GL_H_T(GList L, void(Visit)(AtomType));
/*������������������
��(13)�����������
������������������*/

void Output_GL_H_T(GList L, Mark mark);
/*��������������������������������������
��(14)��������������L��markΪ��ǡ� ��
��������������������������������������*/

#endif
