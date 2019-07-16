/****************************************
 *							            *
 * 文件夹: 02_sequence_list\10 MergeEList    *
 * 							            *
 * 文件名: MergeEList.h                 *
 * 							            *
 * 内  容: 归并扩展的 SingleLinkedList 相关操作列表 *
 *                                      *
 ****************************************/

#ifndef MERGEELIST_H
#define MERGEELIST_H

#include <stdio.h>
#include "../09 ExtenLinkedList/ExtenLinkedList.c"			//**02_sequence_list**//

/* 归并扩展的 SingleLinkedList Func列表 */
Status MergeEList_L(ELinkList La, ELinkList Lb, ELinkList *Lc, int(Compare)(LElemType_E c1, LElemType_E c2));
/*━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┃(01)算法2.21：La与Lb均非递减排列，将其归并为一个非递减排列的 SingleLinkedList Lc。┃
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━*/

int Cmp(LElemType_E c1, LElemType_E c2);
/*━━━━━━━━━━━━━━━━┓
┃(02)比较c1、c2大小，返回c1-c2。 ┃
┗━━━━━━━━━━━━━━━━*/

Status CreateList_ascend(FILE *fp, ELinkList *L, int count);
/*━━━━━━━━━━━━━━━━━━━━━━━━━┓
┃(03)按非降序序列创建元素个数为count的扩展 SingleLinkedList L。┃
┗━━━━━━━━━━━━━━━━━━━━━━━━━*/

#endif
