/****************************************
 *							            *
 * �ļ���: 02_sequence_list\10 MergeEList    *
 * 							            *
 * �ļ���: MergeEList.h                 *
 * 							            *
 * ��  ��: �鲢��չ�� SingleLinkedList ��ز����б� *
 *                                      *
 ****************************************/

#ifndef MERGEELIST_H
#define MERGEELIST_H

#include <stdio.h>
#include "../09 ExtenLinkedList/ExtenLinkedList.c"			//**02_sequence_list**//

/* �鲢��չ�� SingleLinkedList Func�б� */
Status MergeEList_L(ELinkList La, ELinkList Lb, ELinkList *Lc, int(Compare)(LElemType_E c1, LElemType_E c2));
/*������������������������������������������������������������������������
��(01)�㷨2.21��La��Lb���ǵݼ����У�����鲢Ϊһ���ǵݼ����е� SingleLinkedList Lc����
������������������������������������������������������������������������*/

int Cmp(LElemType_E c1, LElemType_E c2);
/*����������������������������������
��(02)�Ƚ�c1��c2��С������c1-c2�� ��
����������������������������������*/

Status CreateList_ascend(FILE *fp, ELinkList *L, int count);
/*����������������������������������������������������
��(03)���ǽ������д���Ԫ�ظ���Ϊcount����չ SingleLinkedList L����
����������������������������������������������������*/

#endif
