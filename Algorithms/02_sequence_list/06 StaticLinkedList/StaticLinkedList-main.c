/********************************
 *						        *
 * 文件夹: 02 线性表          *
 * 						        *
 * 内  容: 静态链表相关Functest *
 *                              *
 ********************************/

#include <stdio.h>
#include "StaticLinkedList.c" 								//**02 线性表**//
	
void PrintElem(LElemType_S e);		//testFunc，打印整型
	
int main(int argc, char **argv)
{
	SLinkList H;
	LElemType_S e;
	int i;
	
	printf("1\nFuncInitSpace_SLtest...\n");				//1.FuncInitSpace_SLtest
	{
		printf("Initial静态链表的备用空间 SPACE ...\n");					 
		InitSpace_SL();
		printf("\n");	
	} 
	PressEnter;
	
	printf("2、4\nFuncMalloc_SL、InitList_SLtest...\n");//4.FuncMalloc_SL、InitList_SLtest
	{
		printf("Initial静态链表 H ，用Malloc_SL申请空间...\n");
		InitList_SL(&H);
		printf("\n");
	} 
	PressEnter;
		
	printf("7\nFuncListEmpty_SLtest...\n");				//7.FuncListEmpty_SLtest
	ListEmpty_SL(H) ? printf(" H  is empty!!\n") : printf(" H  not empty!\n");
	printf("\n");
	PressEnter;
	
	printf("13\nFuncListInsert_SLtest...\n");			//13.FuncListInsert_SLtest
	{
		for(i=1; i<=6; i++)									
		{
			printf("在 H 第 %d 个位置插入\"%d\" ...\n", i, 2*i);
			ListInsert_SL(H, i, 2*i);
		}
		printf("\n");
	} 
	PressEnter;
	
	printf("15\nFuncListTraverse_SLtest...\n");			//15.FuncListTraverse_SLtest
	{
		printf(" H 中的元素为：H = ");						 
		ListTraverse_SL(H, PrintElem);
		printf("\n\n");
	} 
	PressEnter;
	
	printf("8\nFuncListLength_SLtest...\n");			//8.FuncListLength_SLtest
	{
		printf(" H 的长度为 %d \n", ListLength_SL(H));
		printf("\n");
	} 
	PressEnter;
		
	printf("3、14\nFuncFree_SL、ListDelete_SLtest...\n");//3、14.FuncFree_SL、ListDelete_SLtest
	{
		ListDelete_SL(H, 6, &e);
		printf("删除 H 中第 6 个元素 \"%d\" ，用Free_SL释放空间...\n", e);	
		printf(" H 的元素为：H = ");						 
		ListTraverse_SL(H, PrintElem);
		printf("\n\n");
	} 
	PressEnter;
	
	printf("9\nFuncGetElem_SLtest...\n");				//9.FuncGetElem_SLtest
	{
		GetElem_SL(H, 4, &e);
		printf(" H 中第 4 个位置的元素为 \"%d\" \n", e);
		printf("\n");
	} 
	PressEnter;
	
	printf("10\nFuncLocateElem_SLtest...\n");			//10.FuncLocateElem_SLtest
	{
		printf("元素 \"8\" 在 H 中的位序为 %d \n", LocateElem_SL(H, 8)); 
		printf("\n");
	} 
	PressEnter;
	
	printf("11\nFuncPriorElem_SLtest...\n");			//11.FuncPriorElem_SLtest
	{
		PriorElem_SL(H, 6, &e);
		printf("元素 \"6\" 的前驱为 \"%d\" \n", e);
		printf("\n");
	} 
	PressEnter;
	
	printf("12\nFuncNextElem_SLtest...\n");				//12.FuncNextElem_SLtest
	{
		NextElem_SL(H, 6, &e);
		printf("元素 \"6\" 的后继为 \"%d\" \n", e);
		printf("\n");
	} 
	PressEnter;
	
	printf("5\nFuncClearList_SLtest...\n");				//5.FuncClearList_SLtest
	{
		printf("清空 H 前：");
		ListEmpty_SL(H) ? printf(" H  is empty!!\n") : printf(" H  not empty!\n");
		ClearList_SL(H);
		printf("清空 H 后：");
		ListEmpty_SL(H) ? printf(" H  is empty!!\n") : printf(" H  not empty!\n");
		printf("\n");
	} 
	PressEnter;
	
	printf("6\nFuncDestroyList_SLtest...\n");			//6.FuncDestroyList_SLtest
	{
		printf("销毁 H 前：");
		H ? printf(" H 存在!\n") : printf(" H 不存在!!\n");
		DestroyList_SL(&H);
		printf("销毁 H 后：");
		H ? printf(" H 存在!\n") : printf(" H 不存在!!\n");
		printf("\n");
	} 
	PressEnter;
	
	return 0;
}

void PrintElem(LElemType_S e)
{
	printf("%d ", e);
}
