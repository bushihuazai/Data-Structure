/**********************************
 *						          *
 * �ļ���: 10_internal_sort          *
 * 						          *
 * �ļ���: TInsertSort-main.c     *
 * 							      *
 * ��  ��: ������������Functest *
 *                                *
 **********************************/

#include <stdio.h>
#include "TInsertSort.c" 	//**10_internal_sort**//

void PrintKey(KeyType e);

int main(int argc, char *argv[])
{
	SLinkList_sort L;

	printf("���������һ����������...\n");
	{
		FILE *fp;

		fp = fopen("TestData.txt", "r");
		CreateSortList(fp, &L);
		Traverse(L, PrintKey);
		printf("\n");
	}
	PressEnter;

	printf("1��2\nFunc TInsertSort�� test...\n");	//1��2.FuncTInsertSort��test
	{
		printf("���ؼ��ְ�����˳������...\n");
		TInsertSort(&L);
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
