/*************************************
 *							         *
 * 文件夹: 02 线性表\07 Difference *
 * 							         *
 * 文件名: Difference.h              *
 * 							    	 *
 * 内  容: 算法2.17相关操作列表 	 *
 *                              	 *
 *************************************/

#ifndef DIFFERENCE_H
#define DIFFERENCE_H

#include <stdio.h>
#include "../../01_abstract/Scanf.c"							//**01_abstract**//
#include "../06 StaticLinkedList/StaticLinkedList.c"		//**02 线性表**//

/* 算法2.17Func列表 */
void difference(SLinkList *S, LElemType_S A[], int len_A, LElemType_S B[], int len_B);
/*━━━━━━━━━━━━━━━━━━━━━━━┓
┃(01)算法2.17：在一维数组中建立集合(A-B)∪(B-A)┃
┗━━━━━━━━━━━━━━━━━━━━━━━*/

#endif
