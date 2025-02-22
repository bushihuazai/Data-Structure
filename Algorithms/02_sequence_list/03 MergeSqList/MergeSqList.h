/**************************************
 *                                    *
 * 文件夹: 02_sequence_list\03 MergeSqList *
 *                                    *
 * 文件名: MergeSqList.h              *
 *                                    *
 * 内  容: 顺序表归并相关操作列表     *
 *                                    *
 **************************************/

#ifndef MERGESQLIST_H
#define MERGESQLIST_H

#include <stdlib.h>
#include "../01 SequenceList/SequenceList.c"        //**02_sequence_list**//

/* 顺序表归并Func列表 */
void MergeSqList_1(SqList La, SqList Lb, SqList *Lc);
/*━━━━━━━━━━━━━━━━━━━━━┓
┃(01)算法2.2：求C=A+B，A,B,C均为非递减序列 ┃
┗━━━━━━━━━━━━━━━━━━━━━*/

void MergeSqList_2(SqList La, SqList Lb, SqList *Lc);
/*━━━━━━━━━━━━━━━━━━━━━┓
┃(02)算法2.7：求C=A+B，A,B,C均为非递减序列 ┃
┗━━━━━━━━━━━━━━━━━━━━━*/

#endif
