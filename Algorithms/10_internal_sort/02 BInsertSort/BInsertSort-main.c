/************************************
 *						            *
 * �ļ���: 10_internal_sort            *
 * 						            *
 * �ļ���: BInsertSort-main.c       *
 * 							        *
 * ��  ��: �۰�����������Functest *
 *                                  *
 ************************************/

#include <stdio.h>
#include "BInsertSort.c" 	//**10_internal_sort**//

void PrintKey(KeyType e);

int main(int argc, char *argv[])
{
	SqList_sort L;

	printf("���������һ����������...\n");
	{
		FILE *fp;

		fp = fopen("TestData.txt", "r");
		CreateSortList(fp, &L);
		Traverse(L, PrintKey);
		printf("\n");
	}
	PressEnter;

	printf("1\nFunc BInsertSort test...\n");	//1.FuncBInsertSorttest
	{
		printf("���ؼ��ְ�����˳������...\n");
		BInsertSort(&L);
		Traverse(L, PrintKey);
		printf("\n");
	}
	PressEnter;

	return 0;
}

void PrintKey(KeyType e)
{
	printf("%d ", e);
}
