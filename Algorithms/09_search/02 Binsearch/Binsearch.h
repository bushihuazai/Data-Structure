/********************************
 *                              *
 * �ļ���: 09_search            *
 *                              *
 * �ļ���: Binsearch.h          *
 *                              *
 * ��  ��: �۰������ز����б� *
 *                              *
 ********************************/

#ifndef BINSEARCH_H
#define BINSEARCH_H

#include "../00 Base/Base.c"         //**09_search**//

/* ��Func */
#define EQ(a,b) ((a)==(b))
#define LT(a,b) ((a) < (b))

/* �۰����Func�б� */
int Search_Bin(Table T, KeyType key);
/*����������������������������������������
��(01)�㷨9.2���۰���ҹؼ���key��λ�á���
����������������������������������������*/

#endif
