/*******************************************
 *                                         *
 * 文件夹: 02 线性表\04 SinglyLinkedList *
 *                                         *
 * 内  容:  SingleLinkedList 相关Functest              *
 *                                         *
 *******************************************/

#include <stdio.h>
#include "SinglyLinkedList.c" 						//**02 线性表**//

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
			printf("在 L 第 %d 个位置插入 \"%d\" ...\n", i, 2 * i);
			ListInsert_L(L, i, 2 * i);
		}
		printf("\n");
	}
	PressEnter;

	printf("12\nFunc ListTraverse_L test...\n");	//12.FuncListTraverse_Ltest
	{
		printf(" L 中的元素为：L = ");
		ListTraverse_L(L, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("5\nFunc ListLength_L test...\n");		//5.FuncListLength_Ltest
	{
		printf(" L 的长度为 %d \n", ListLength_L(L));
		printf("\n");
	}
	PressEnter;

	printf("11\nFunc ListDelete_L test...\n");		//11.FuncListDelete_Ltest
	{
		ListDelete_L(L, 6, &e);
		printf("删除 L 中第 6 个元素 \"%d\" ...\n", e);
		printf(" L 中的元素为：L = ");
		ListTraverse_L(L, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("6\nFunc GetElem_L test...\n");			//6.FuncGetElem_Ltest
	{
		GetElem_L(L, 4, &e);
		printf(" L 中第 4 个位置的元素为 \"%d\" \n", e);
		printf("\n");
	}
	PressEnter;

	printf("7\nFunc LocateElem_L test...\n");		//7.FuncLocateElem_Ltest
	{
		i = LocateElem_L(L, 13, CmpGreater);
		printf(" L 中第一个元素值大于 \"7\" 的元素的位置为 %d \n", i);
		printf("\n");
	}
	PressEnter;

	printf("8\nFunc PriorElem_L test...\n");		//8.FuncPriorElem_Ltest
	{
		PriorElem_L(L, 6, &e);
		printf("元素 \"6\" 的前驱为 \"%d\" \n", e);
		printf("\n");
	}
	PressEnter;

	printf("9\nFunc NextElem_L test...\n");			//9.FuncNextElem_Ltest
	{
		NextElem_L(L, 6, &e);
		printf("元素 \"6\" 的后继为 \"%d\" \n", e);
		printf("\n");
	}
	PressEnter;

	printf("2\nFunc ClearList_L test...\n");		//2.FuncClearList_Ltest
	{
		printf("清空 L 前：");
		ListEmpty_L(L) ? printf(" L  is empty!!\n") : printf(" L  not empty!\n");
		ClearList_L(L);
		printf("清空 L 后：");
		ListEmpty_L(L) ? printf(" L  is empty!!\n") : printf(" L  not empty!\n");
		printf("\n");
	}
	PressEnter;

	printf("3\nFunc DestroyList_L test...\n");		//3.FuncDestroyList_Ltest
	{
		printf("销毁 L 前：");
		L ? printf(" L 存在!\n") : printf(" L 不存在!!\n");
		DestroyList_L(&L);
		printf("销毁 L 后：");
		L ? printf(" L 存在!\n") : printf(" L 不存在!!\n");
		printf("\n");
	}
	PressEnter;

	printf("13\nFunc CreateList_HL test...\n");		//13.FuncCreateList_HLtest
	{
		FILE *fp;
		LinkList L;
		printf("头插法建立 SingleLinkedList  L = ");
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
		printf("尾插法建立 SingleLinkedList  L = ");
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
