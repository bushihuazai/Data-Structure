/************************************
 *                                    *
 * 文件夹: 02_sequence_list\05 MergeList *
 *                                     *
 * 文件名: MergeList.h              *
 *                                     *
 * 内  容:  SingleLinkedList 归并相关操作列表   *
 *                                  *
 ************************************/

#ifndef MERGELIST_H
#define MERGELIST_H

#include <stdlib.h>                                        //提供malloc、realloc、free、exit原型
#include "../04 SinglyLinkedList/SinglyLinkedList.c"    //**02_sequence_list**//

/*  SingleLinkedList 归并Func列表 */
void MergeList_L(LinkList La, LinkList *Lb, LinkList *Lc);
/*━━━━━━━━━━━━━━━━━━━━━━━━┓
┃(01)算法2.12：C=A+B，且保持元素相对位置不变。   ┃
┃    Lc利用La的头结点，Lb中结点均插入新链表Lc中。┃
┗━━━━━━━━━━━━━━━━━━━━━━━━*/

#endif
