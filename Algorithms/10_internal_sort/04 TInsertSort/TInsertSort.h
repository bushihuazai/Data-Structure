/**********************************
 *                                *
 * �ļ���: 10_internal_sort          *
 *                                *
 * �ļ���: TInsertSort.h          *
 *                                *
 * ��  ��: �����������ز����б� *
 *                                *
 **********************************/

#ifndef TINSERTSORT_H
#define TINSERTSORT_H

#include "../00 StaticLinkedListType/StaticLinkedListType.c"    //**10_internal_sort**//

/* ���������Func�б� */
void TInsertSort(SLinkList_sort *L);
/*��������������������������������
��(01)�Ծ�̬����L����������� ��
��������������������������������*/

void Arrange(SLinkList_sort *L);
/*������������������������������������������������������
��(02)�㷨10.3�����ݸ���¼ָ�룬��L�еļ�¼�������� ��
������������������������������������������������������*/

#endif
