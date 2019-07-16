/******************************
 *						      *
 * �ļ���: 10_internal_sort      *
 * 						      *
 * �ļ���: HeapSort-main.c    *
 * 							  *
 * ��  ��: ���������Functest *
 *                            *
 ******************************/

#include <stdio.h>
#include "HeapSort.c" 									//**10_internal_sort**//

void PrintKey(KeyType e);

int main(int argc, char *argv[])
{
	HeapType H;

	printf("���������һ����������...\n");
	{
		FILE *fp;

		fp = fopen("TestData.txt", "r");
		CreateSortList(fp, &H);
		Traverse(H, PrintKey);
		printf("\n");
	}
	PressEnter;

	printf("1��2\nFunc HeapSort�� test...\n");			//1��2.FuncHeapSort��test
	{
		printf("���ؼ��ְ�����˳������...\n");
		HeapSort(&H);
		Traverse(H, PrintKey);
		printf("\n");
	}
	PressEnter;

	return 0;
}

void PrintKey(KeyType e)
{
	printf("%d ", e);
}
