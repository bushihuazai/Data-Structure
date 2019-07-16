/********************************
 *						        *
 * �ļ���: 10_internal_sort        *
 * 						        *
 * �ļ���: RadixSort-main.c     *
 * 							    *
 * ��  ��: �����������Functest *
 *                              *
 ********************************/

#include <stdio.h>
#include "RadixSort.c" 									//**10_internal_sort**//

int main(int argc, char *argv[])
{
	SLList L;

	printf("���������һ����������...\n");
	printf("1��2\nFunc CreateSLList�� test...\n");	//1��2.FuncCreateSLList��test
	{
		FILE *fp;
		fp = fopen("TestData.txt", "r");
		CreateSLList(fp, &L);
		Traverse(L);
		printf("\n");
	}
	PressEnter;

	printf("3��4��5\nFunc RadixSort�� test...\n");	//3��4��5.FuncRadixSort��test
	{
		printf("�����ؼ��ְ�����˳������...\n");
		RadixSort(&L);
		Traverse(L);
		printf("\n");
	}
	PressEnter;

	return 0;
}
