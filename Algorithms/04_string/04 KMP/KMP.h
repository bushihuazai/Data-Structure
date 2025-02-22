/*******************************
 *                               *
 * 文件夹: 04_string\04 KMP      *
 *                                *
 * 文件名: KMP.h               *
 *                                *
 * 内  容: KMP算法相关操作列表 *
 *                             *
 *******************************/

#ifndef KMP_H
#define KMP_H

#include <stdio.h>
#include "../01 SequenceString/SequenceString.c"             //**04_string**//

/* KMP算法Func列表 */
int Index_KMP(SString S, SString T, int pos, int next[]);
/*━━━━━━━━━━━━━┓
┃(1)算法4.6：KMP匹配算法。 ┃
┗━━━━━━━━━━━━━*/

void get_next(SString T, int next[]);
/*━━━━━━━━━━━━━━━━┓
┃(2)算法4.7：求nextFunc值的算法。┃
┗━━━━━━━━━━━━━━━━*/

void get_nextval(SString T, int nextval[]);
/*━━━━━━━━━━━━━━━━━━━━┓
┃(3)算法4.8：改进后的求nextFunc值的算法。┃
┗━━━━━━━━━━━━━━━━━━━━*/

#endif
