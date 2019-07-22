/********************************
 *                              *
 * 文件夹: 09_search            *
 *                              *
 * 文件名: Binsearch.h          *
 *                              *
 * 内  容: 折半查找相关操作列表 *
 *                              *
 ********************************/

#ifndef BINSEARCH_H
#define BINSEARCH_H

#include "../00 Base/Base.c"         //**09_search**//

/* 宏Func */
#define EQ(a,b) ((a)==(b))
#define LT(a,b) ((a) < (b))

/* 折半查找Func列表 */
int Search_Bin(Table T, KeyType key);
/*━━━━━━━━━━━━━━━━━━━┓
┃(01)算法9.2：折半查找关键字key的位置。┃
┗━━━━━━━━━━━━━━━━━━━*/

#endif
