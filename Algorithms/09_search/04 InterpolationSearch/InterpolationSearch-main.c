/**************************************
 *						              *
 * �ļ���: 09 ����                  *
 * 						              *
 * �ļ���: InterpolationSearch-main.c *
 * 							          *
 * ��  ��: ��ֵ�������Functest       *
 *                                    *
 **************************************/

#include <stdio.h>
#include "InterpolationSearch.c" 							//**09 ����**//

/* �궨�� */
#define Max 100					//���ұ���Ԫ�ظ��� 

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
	
	printf("1\nFunc Search_Int test...\n");				//1.FuncSearch_Inttest		
	{
		printf("�ؼ��� 39 ��������ұ��е�λ��Ϊ��");
		printf("%d\n", Search_Int(T, 39));
		printf("\n");
	}	
	PressEnter; 

	return 0;
}
