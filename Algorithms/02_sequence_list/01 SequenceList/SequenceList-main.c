/***************************************
 *                                     *
 * 文件夹: 02_sequence_list\01 SequenceList *
 *                                     *
 * 内  容:  SingleLinkedList 顺序结构相关Functest  *
 *                                     *
 ***************************************/

#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include "SequenceList.c" 								//**02_sequence_list**//

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
	printf("\nFunc InitList_Sq test...\n");		//1.FuncInitList_Sqtest
	{
		printf("Initial SeqList L ...\n");
		InitList_Sq(&L);
		printf("\n");
	}
	PressEnter;

	printf("\nFunc ListEmpty_Sq test...\n");		//4.FuncListEmpty_Sqtest
	{
		ListEmpty_Sq(L) ? printf(" L empty !\n") : printf(" L not empty !\n");
		printf("\n");
	}
	PressEnter;

	printf("\nFunc ListInsert_Sq test...\n");		//10.FuncListInsert_Sqtest
	{
		for (i = 1; i <= 6; i++) {
			printf("As demonstrating, Inserting %d th element \"%d\"... into L \n ", i, 2 * i);
			ListInsert_Sq(&L, i, 2 * i);
		}
		printf("\n");
	}
	PressEnter;

	printf("\nFunc ListTraverse_Sq test...\n");	//12.FuncListTraverse_Sqtest
	{
		printf(" L 's elements: L = ");
		ListTraverse_Sq(L, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("\nFunc ListLength_Sq test...\n");		//5.FuncListLength_Sqtest
	{
		i = ListLength_Sq(L);
		printf(" L 's length: %d \n", i);
		printf("\n");
	}
	PressEnter;

	printf("\nFunc ListDelete_Sq test...\n");		//11.FuncListDelete_Sqtest
	{
		ListDelete_Sq(&L, 6, &e);
		printf("Deleting L 's 6 th element \"%d\" ...\n", e);
		printf(" L 's elements: L = ");
		ListTraverse_Sq(L, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("\nFunc GetElem_Sq test...\n");			//6.FuncGetElem_Sqtest
	{
		GetElem_Sq(L, 4, &e);
		printf(" L 's 4 th element: \"%d\" \n", e);
		printf("\n");
	}
	PressEnter;


	printf("\nFunc LocateElem_Sq test...\n");	  	//7.FuncLocateElem_Sqtest
	{
		i = LocateElem_Sq(L, 7, CmpGreater);
		printf(" L 's first element that Larger than \"7\" is at %d \n", i);
		printf("\n");
	}
	PressEnter;

	printf("\nFunc PriorElem_Sq test...\n");		//8.FuncPriorElem_Sqtest
	{
		PriorElem_Sq(L, 6, &e);
		printf("Element \"6\" 's PriorElement: \"%d\" \n", e);
		printf("\n");
	}
	PressEnter;

	printf("\nFunc NextElem_Sq test...\n");		//9.FuncNextElem_Sqtest
	{
		NextElem_Sq(L, 6, &e);
		printf("Element \"6\" 's NextElement: \"%d\" \n", e);
		printf("\n");
	}
	PressEnter;

	printf("\nFunc ClearList_Sq test...\n");		//2.FuncClearList_Sqtest
	{
		printf("Clear start:");
		ListEmpty_Sq(L) ? printf(" L empty\n") : printf(" L not empty\n");
		ClearList_Sq(&L);
		printf("Clear End");
		ListEmpty_Sq(L) ? printf(" L empty\n") : printf(" L not empty\n");
		printf("\n");
	}
	PressEnter;

	printf("\nFunc DestroyList_Sq test...\n");		//3.FuncDestroyList_Sqtest
	{
		printf("Destroy start:");
		L.elem ? printf(" L exsist\n") : printf(" L not exsist\n");
		DestroyList_Sq(&L);
		printf("Destroy end");
		L.elem ? printf(" L exsist\n") : printf(" L not exsist!\n");
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
