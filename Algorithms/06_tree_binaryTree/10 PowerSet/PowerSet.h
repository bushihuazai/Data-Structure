/***************************************
 *                                       *
 * 文件夹: 06_tree_binaryTree\10 PowerSet *
 *                                        *
 * 文件名: PowerSet.h                  *
 *                                        *
 * 内  容: 幂集相关操作列表            *
 *                                        *
 ***************************************/

#ifndef POWERSET_H
#define POWERSET_H

#include <stdio.h>
#include "../../01_abstract/Status.h"                    //**01_abstract**//
#include "../../01_abstract/Scanf.c"                    //**01_abstract**//
#include "../../02_sequence_list/04 SinglyLinkedList/SinglyLinkedList.c"    //**02_sequence_list**// 

/* 幂集类型定义 */
typedef LElemType_L PElemType;

/* 幂集Func列表 */
Status CreatePowerSet_PS(FILE *fp, LinkList *A);
/*━━━━━━━━━━━━━━━┓
┃(01)创建集合A，集合元素为int。┃
┗━━━━━━━━━━━━━━━*/

void GetPowerSet_PS(int i, LinkList A, LinkList B);
/*━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┃(02)算法6.14 && 6.15：求取集合A的幂集，集合B暂存每一次求出的幂集子集。┃
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━*/

void Output_PS(LinkList A);
/*━━━━━━━━━━━━━┓
┃(03)构造空树HT(Initial树)。┃
┗━━━━━━━━━━━━━*/

#endif
