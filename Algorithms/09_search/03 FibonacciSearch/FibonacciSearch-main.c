/************************************
 *						            *
 * �ļ���: 09 ����                *
 * 						            *
 * �ļ���: FibonacciSearch-main.c   *
 * 							        *
 * ��  ��: 쳲������������Functest *
 *                                  *
 ************************************/

#include <stdio.h>
#include "FibonacciSearch.c" 			//**09 ����**//

#define Max 100							//���ұ���Ԫ�ظ���

int main(int argc, char *argv[])
{	
	Table T;
			
	printf("���������һ�����ұ�...\n");
	{
		FILE *fp;
		
		fp = fopen("TestData_Table.txt", "r");	
		Create(fp, &T, Max);	
		Traverse(T, PrintKey);	
		printf("\n");
	}	
	PressEnter; 
	
	printf("1\nFunc Search_Fib test...\n");		//1.FuncSearch_Fibtest		
	{
		printf("�ؼ��� 39 ��������ұ��е�λ��Ϊ��");
		printf("%d\n", Search_Fib(T, 39));
		printf("\n");
	}	
	PressEnter; 

	return 0;
}
