/***************************************
 *                                     *
 * 文件夹: 02 线性表\01 SequenceList *
 *                                     *
 * 内  容: 单链表顺序结构相关Functest  *
 *                                     *
 ***************************************/

#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include "SequenceList.c" 								//**02 线性表**//

/* test调用的Func原型 */
Status CmpGreater(LElemType_Sq e, LElemType_Sq data);
//若data>e，返回TRUE，否则返回FALSE

void PrintElem(LElemType_Sq e);
//testFunc，打印整型

int main(int argc, char **argv)
{
	SqList L;
	int i;
	LElemType_Sq e;
	//setlocale(LC_ALL,"zh_CN.GBK");
	printf("1\nFunc InitList_Sq test...\n");		//1.FuncInitList_Sqtest
	{
		printf("Initial顺序表 L ...\n");
		InitList_Sq(&L);
		printf("\n");
	}
	PressEnter;

	printf("4\nFunc ListEmpty_Sq test...\n");		//4.FuncListEmpty_Sqtest
	{
		ListEmpty_Sq(L) ? printf(" L 为空！！\n") : printf(" L 不为空！\n");
		printf("\n");
	}
	PressEnter;

	printf("10\nFunc ListInsert_Sq test...\n");		//10.FuncListInsert_Sqtest
	{
		for (i = 1; i <= 6; i++) {
			printf("作为示范，在 L 第 %d 个位置插入 \"%d\"...\n", i, 2 * i);
			ListInsert_Sq(&L, i, 2 * i);
		}
		printf("\n");
	}
	PressEnter;

	printf("12\nFunc ListTraverse_Sq test...\n");	//12.FuncListTraverse_Sqtest
	{
		printf(" L 中的元素为：L = ");
		ListTraverse_Sq(L, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("5\nFunc ListLength_Sq test...\n");		//5.FuncListLength_Sqtest
	{
		i = ListLength_Sq(L);
		printf(" L 的长度为 %d \n", i);
		printf("\n");
	}
	PressEnter;

	printf("11\nFunc ListDelete_Sq test...\n");		//11.FuncListDelete_Sqtest
	{
		ListDelete_Sq(&L, 6, &e);
		printf("删除 L 中第 6 个元素 \"%d\" ...\n", e);
		printf(" L 中的元素为：L = ");
		ListTraverse_Sq(L, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("6\nFunc GetElem_Sq test...\n");			//6.FuncGetElem_Sqtest
	{
		GetElem_Sq(L, 4, &e);
		printf(" L 中第 4 个位置的元素为 \"%d\" \n", e);
		printf("\n");
	}
	PressEnter;


	printf("7\nFunc LocateElem_Sq test...\n");	  	//7.FuncLocateElem_Sqtest
	{
		i = LocateElem_Sq(L, 7, CmpGreater);
		printf(" L 中第一个元素值大于 \"7\" 的元素的位置为 %d \n", i);
		printf("\n");
	}
	PressEnter;

	printf("8\nFunc PriorElem_Sq test...\n");		//8.FuncPriorElem_Sqtest
	{
		PriorElem_Sq(L, 6, &e);
		printf("元素 \"6\" 的前驱为 \"%d\" \n", e);
		printf("\n");
	}
	PressEnter;

	printf("9\nFunc NextElem_Sq test...\n");		//9.FuncNextElem_Sqtest
	{
		NextElem_Sq(L, 6, &e);
		printf("元素 \"6\" 的后继为 \"%d\" \n", e);
		printf("\n");
	}
	PressEnter;

	printf("2\nFunc ClearList_Sq test...\n");		//2.FuncClearList_Sqtest
	{
		printf("清空 L 前：");
		ListEmpty_Sq(L) ? printf(" L 为空！！\n") : printf(" L 不为空！\n");
		ClearList_Sq(&L);
		printf("清空 L 后：");
		ListEmpty_Sq(L) ? printf(" L 为空！！\n") : printf(" L 不为空！\n");
		printf("\n");
	}
	PressEnter;

	printf("3\nFunc DestroyList_Sq test...\n");		//3.FuncDestroyList_Sqtest
	{
		printf("销毁 L 前：");
		L.elem ? printf(" L 存在！\n") : printf(" L 不存在！！\n");
		DestroyList_Sq(&L);
		printf("销毁 L 后：");
		L.elem ? printf(" L 存在！\n") : printf(" L 不存在！！\n");
		printf("\n");
	}
	PressEnter;

	return 0;
}

Status CmpGreater(LElemType_Sq e, LElemType_Sq data)
{
	return data > e ? TRUE : FALSE;
}

void PrintElem(LElemType_Sq e)
{
	printf("%d ", e);
}
