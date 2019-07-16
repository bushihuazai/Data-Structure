/********************************
 *						        *
 * �ļ���: 10_internal_sort        *
 * 						        *
 * �ļ���: QuickSort-main.c     *
 * 							    *
 * ��  ��: �����������Functest *
 *                              *
 ********************************/

#include <stdio.h>
#include "QuickSort.c" 										//**10_internal_sort**//

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

	printf("1��2��3��4\nFunc QuickSort�� test...\n");		//1��2��3��4.FuncQuickSort��test
	{
		printf("���ؼ��ְ�����˳������...\n");
		QuickSort(&L);
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
