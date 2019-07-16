/********************************
 *						        *
 * �ļ���: 02 ���Ա�          *
 * 						        *
 * ��  ��: ��̬�������Functest *
 *                              *
 ********************************/

#include <stdio.h>
#include "StaticLinkedList.c" 								//**02 ���Ա�**//
	
void PrintElem(LElemType_S e);		//testFunc����ӡ����
	
int main(int argc, char **argv)
{
	SLinkList H;
	LElemType_S e;
	int i;
	
	printf("1\nFuncInitSpace_SLtest...\n");				//1.FuncInitSpace_SLtest
	{
		printf("Initial��̬����ı��ÿռ� SPACE ...\n");					 
		InitSpace_SL();
		printf("\n");	
	} 
	PressEnter;
	
	printf("2��4\nFuncMalloc_SL��InitList_SLtest...\n");//4.FuncMalloc_SL��InitList_SLtest
	{
		printf("Initial��̬���� H ����Malloc_SL����ռ�...\n");
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
			printf("�� H �� %d ��λ�ò���\"%d\" ...\n", i, 2*i);
			ListInsert_SL(H, i, 2*i);
		}
		printf("\n");
	} 
	PressEnter;
	
	printf("15\nFuncListTraverse_SLtest...\n");			//15.FuncListTraverse_SLtest
	{
		printf(" H �е�Ԫ��Ϊ��H = ");						 
		ListTraverse_SL(H, PrintElem);
		printf("\n\n");
	} 
	PressEnter;
	
	printf("8\nFuncListLength_SLtest...\n");			//8.FuncListLength_SLtest
	{
		printf(" H �ĳ���Ϊ %d \n", ListLength_SL(H));
		printf("\n");
	} 
	PressEnter;
		
	printf("3��14\nFuncFree_SL��ListDelete_SLtest...\n");//3��14.FuncFree_SL��ListDelete_SLtest
	{
		ListDelete_SL(H, 6, &e);
		printf("ɾ�� H �е� 6 ��Ԫ�� \"%d\" ����Free_SL�ͷſռ�...\n", e);	
		printf(" H ��Ԫ��Ϊ��H = ");						 
		ListTraverse_SL(H, PrintElem);
		printf("\n\n");
	} 
	PressEnter;
	
	printf("9\nFuncGetElem_SLtest...\n");				//9.FuncGetElem_SLtest
	{
		GetElem_SL(H, 4, &e);
		printf(" H �е� 4 ��λ�õ�Ԫ��Ϊ \"%d\" \n", e);
		printf("\n");
	} 
	PressEnter;
	
	printf("10\nFuncLocateElem_SLtest...\n");			//10.FuncLocateElem_SLtest
	{
		printf("Ԫ�� \"8\" �� H �е�λ��Ϊ %d \n", LocateElem_SL(H, 8)); 
		printf("\n");
	} 
	PressEnter;
	
	printf("11\nFuncPriorElem_SLtest...\n");			//11.FuncPriorElem_SLtest
	{
		PriorElem_SL(H, 6, &e);
		printf("Ԫ�� \"6\" ��ǰ��Ϊ \"%d\" \n", e);
		printf("\n");
	} 
	PressEnter;
	
	printf("12\nFuncNextElem_SLtest...\n");				//12.FuncNextElem_SLtest
	{
		NextElem_SL(H, 6, &e);
		printf("Ԫ�� \"6\" �ĺ��Ϊ \"%d\" \n", e);
		printf("\n");
	} 
	PressEnter;
	
	printf("5\nFuncClearList_SLtest...\n");				//5.FuncClearList_SLtest
	{
		printf("��� H ǰ��");
		ListEmpty_SL(H) ? printf(" H  is empty!!\n") : printf(" H  not empty!\n");
		ClearList_SL(H);
		printf("��� H ��");
		ListEmpty_SL(H) ? printf(" H  is empty!!\n") : printf(" H  not empty!\n");
		printf("\n");
	} 
	PressEnter;
	
	printf("6\nFuncDestroyList_SLtest...\n");			//6.FuncDestroyList_SLtest
	{
		printf("���� H ǰ��");
		H ? printf(" H ����!\n") : printf(" H ������!!\n");
		DestroyList_SL(&H);
		printf("���� H ��");
		H ? printf(" H ����!\n") : printf(" H ������!!\n");
		printf("\n");
	} 
	PressEnter;
	
	return 0;
}

void PrintElem(LElemType_S e)
{
	printf("%d ", e);
}
