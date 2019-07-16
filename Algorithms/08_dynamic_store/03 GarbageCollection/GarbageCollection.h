/*******************************
 *                             *
 * 文件夹: 08_dynamic_store   *
 *                             *
 * 文件名: GarbageCollection.h *
 *                             *
 * 内  容: 无用单元搜集        *
 *                             *
 ******************************/

#ifndef GARBAGECOLLECTION_H
#define GARBAGECOLLECTION_H

#include <stdio.h>
#include "../../01_abstract/Status.h"												//**01_abstract**//
#include "../../05_array_lists/05 GeneralizedList-H&T/GeneralizedList-H-T.c" //**05_array_lists**//

/* 无用单元收集Func列表 */
void MakeList(GList G);
/*━━━━━━━━━━━━━━━━━━━┓
┃(01)算法8.3：遍历广义表（不利用栈）。 ┃
┗━━━━━━━━━━━━━━━━━━━*/

#endif
