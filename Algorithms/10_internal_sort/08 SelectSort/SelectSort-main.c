/************************************
 *						            *
 * �ļ���: 10 �ڲ�����            *
 * 						            *
 * �ļ���: SelectSort-main.c        *
 * 							        *
 * ��  ��: ��ѡ���������Functest *
 *                                  *
 ************************************/

#include <stdio.h>
#include "SelectSort.c" 									//**10 �ڲ�����**//

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
	
	printf("1��2\nFunc SelectSort�� test...\n");					//1��2.FuncSelectSort��test
	{
		printf("���ؼ��ְ�����˳������...\n");
		SelectSort(&L); 
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
