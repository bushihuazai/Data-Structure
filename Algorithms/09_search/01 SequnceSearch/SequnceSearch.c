/***************************
 *                         *
 * 文件夹: 09_search       *
 *                         *
 * 文件名: SequnceSearch.c *
 *                         *
 * 算  法: 9.1             *
 *                         *
 ***************************/

#ifndef SEQUNCESEARCH_C
#define SEQUNCESEARCH_C

#include "SequnceSearch.h" 					//**09_search**//

/*════╗
║ 算法9.1║
╚════*/
int Search_Seq(Table T, KeyType key)
{
	int i;

	T.elem[0].key = key;

	for (i = T.length; !EQ(T.elem[i].key, key); --i)
		;

	return i;
}

#endif
