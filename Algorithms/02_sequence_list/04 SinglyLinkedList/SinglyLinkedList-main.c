/*******************************************
 *                                         *
 * 文件夹: 02_sequence_list\04 SinglyLinkedList *
 *                                         *
 * 内  容:  SingleLinkedList 相关Functest              *
 *                                         *
 *******************************************/

#include <stdio.h>
#include "SinglyLinkedList.c" 						//**02_sequence_list**//

/* Func原型 */
Status CmpGreater(LElemType_L e, LElemType_L data);	//判断data是否大于e //若data大于e，返回TRUE
void PrintElem(LElemType_L e);						//testFunc，打印整型

int main(int argc, char **argv)
{
	LinkList L;
	int i;
	LElemType_L e;

	printf("1\nFunc InitList_L test...\n");			//1.FuncInitList_Ltest
	{
		printf("Initial SingleLinkedList  L ...\n");
		InitList_L(&L);
		printf("\n");
	}
	PressEnter;

	printf("4\nFunc ListEmpty_L test...\n");		//4.FuncListEmpty_Ltest
	{
		ListEmpty_L(L) ? printf(" L  is empty!!\n") : printf(" L  not empty!\n");
		printf("\n");
	}
	PressEnter;

	printf("10\nFunc ListInsert_L test...\n");		//10.FuncListInsert_Ltest
	{
		for (i = 1; i <= 6; i++) {
			printf("In L 's %d th position, inserting \"%d\" ...\n", i, 2 * i);
			ListInsert_L(L, i, 2 * i);
		}
		printf("\n");
	}
	PressEnter;

	printf("12\nFunc ListTraverse_L test...\n");	//12.FuncListTraverse_Ltest
	{
		printf(" L elements：L = ");
		ListTraverse_L(L, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("5\nFunc ListLength_L test...\n");		//5.FuncListLength_Ltest
	{
		printf(" L 's length %d \n", ListLength_L(L));
		printf("\n");
	}
	PressEnter;

	printf("11\nFunc ListDelete_L test...\n");		//11.FuncListDelete_Ltest
	{
		ListDelete_L(L, 6, &e);
		printf("Deleting L 's 6 th element \"%d\" ...\n", e);
		printf(" L elements：L = ");
		ListTraverse_L(L, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("6\nFunc GetElem_L test...\n");			//6.FuncGetElem_Ltest
	{
		GetElem_L(L, 4, &e);
		printf(" L 's 4 th element \"%d\" \n", e);
		printf("\n");
	}
	PressEnter;

	printf("7\nFunc LocateElem_L test...\n");		//7.FuncLocateElem_Ltest
	{
		i = LocateElem_L(L, 13, CmpGreater);
		printf(" L 's first element that Larger than \"7\" is at %d \n", i);
		printf("\n");
	}
	PressEnter;

	printf("8\nFunc PriorElem_L test...\n");		//8.FuncPriorElem_Ltest
	{
		PriorElem_L(L, 6, &e);
		printf("Element \"6\" 's PriorElement: \"%d\" \n", e);
		printf("\n");
	}
	PressEnter;

	printf("9\nFunc NextElem_L test...\n");			//9.FuncNextElem_Ltest
	{
		NextElem_L(L, 6, &e);
		printf("Element \"6\" 's NextElement: \"%d\" \n", e);
		printf("\n");
	}
	PressEnter;

	printf("2\nFunc ClearList_L test...\n");		//2.FuncClearList_Ltest
	{
		printf("Clear start:");
		ListEmpty_L(L) ? printf(" L  is empty!!\n") : printf(" L  not empty!\n");
		ClearList_L(L);
		printf("Clear End");
		ListEmpty_L(L) ? printf(" L  is empty!!\n") : printf(" L  not empty!\n");
		printf("\n");
	}
	PressEnter;

	printf("3\nFunc DestroyList_L test...\n");		//3.FuncDestroyList_Ltest
	{
		printf("Destroy start:");
		L ? printf(" L exsists!\n") : printf(" L  not exsist!!\n");
		DestroyList_L(&L);
		printf("Destroy end");
		L ? printf(" L exsists!\n") : printf(" L  not exsist!!\n");
		printf("\n");
	}
	PressEnter;

	printf("13\nFunc CreateList_HL test...\n");		//13.FuncCreateList_HLtest
	{
		FILE *fp;
		LinkList L;
		printf("HeadInserting SingleLinkedList  L = ");
		fp = fopen("TestData_HL.txt", "r");				//文件指针，指向数据源
		CreateList_HL(fp, &L, 5);
		fclose(fp);
		ListTraverse_L(L, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("14\nFunc CreateList_TL test...\n");		//14.FuncCreateList_TLtest
	{
		FILE *fp;
		LinkList L;
		printf("TailInserting SingleLinkedList  L = ");
		fp = fopen("TestData_TL.txt", "r");				//文件指针，指向数据源
		CreateList_TL(fp, &L, 5);
		fclose(fp);
		ListTraverse_L(L, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	return 0;
}

Status CmpGreater(LElemType_L e, LElemType_L data)
{
	return data > e ? TRUE : FALSE;
}

void PrintElem(LElemType_L e)
{
	printf("%d ", e);
}
