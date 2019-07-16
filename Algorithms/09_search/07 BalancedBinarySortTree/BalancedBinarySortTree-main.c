/*****************************************
 *						                 *
 * 文件夹: 09_search                     *
 * 						                 *
 * 文件名: BalancedBinarySortTree-main.c *
 * 							             *
 * 内  容: 平衡二叉排序树相关Functest    *
 *                                       *
 *****************************************/

#include <stdio.h>
#include "BalancedBinarySortTree.c" 		//**09_search**//

/* 宏定义 */
#define Max 7								//查找表中元素个数

int main(int argc, char *argv[])
{
	Table T;
	BBSTree BBST;

	printf("创建并输出一个查找表...\n");
	{
		FILE *fp;

		fp = fopen("TestData_Table.txt", "r");
		Create(fp, &T, Max);
		Traverse(T, PrintKey);
		printf("\n");
	}
	PressEnter;

	printf("1、3、5、6、7、8、9\nFunc CreateAVL等 test...\n");		//1、3、5、6、7、8、9.FuncCreateAVL等test
	{
		printf("构造二叉排序树，并输出其关键字：");
		CreateAVL(&BBST, T);
		InOrderTraverse_AVL(BBST, PrintKey);
		printf("\n\n");
	}
	PressEnter;

	printf("10、11\nFunc PrintAVLTree等 test...\n");				//10、11.FuncPrintAVLTree等test
	{
		printf("打印平衡二叉树：\n");
		PrintAVLTree(BBST);
		printf("\n");
	}
	PressEnter;

	printf("2\nFunc SearchAVL test...\n");							//2.FuncSearchAVLtest
	{
		printf("关键字 %2d ", T.elem[1].key);
		SearchAVL(BBST, T.elem[1].key) == NULL ? printf("不在") : printf("在");
		printf("平衡二叉树中!\n");
		printf("\n");
	}
	PressEnter;

	printf("4\nFunc DeleteAVL test...\n");							//4.FuncDeleteAVLtest
	{
		BBSTree f, p;
		Boolean taller;

		f = NULL;
		p = BBST;
		taller = FALSE;
		DeleteAVL(&BBST, T.elem[1], f, p, &taller, 0);
		printf("删除关键字 %2d 后的平衡二叉树为：\n", T.elem[1].key);
		PrintAVLTree(BBST);
		printf("\n");
	}
	PressEnter;

	return 0;
}
