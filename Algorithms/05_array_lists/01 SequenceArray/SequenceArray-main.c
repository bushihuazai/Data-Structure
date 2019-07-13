/**********************************************
 *                                            *
 * �ļ���: 05 ����͹����\01 SequenceArray *
 *                                            *
 * ��  ��: �������Functest                   *
 *                                            *
 **********************************************/

#include <stdio.h> 
#include "SequenceArray.c" 						//**05 ����͹����**//

/* �Զ�ά����Ϊ��test */
int main(int argc, char **argv)
{
	Array A;
	
	printf("1\nFunc InitArray test���Զ�ά����Ϊ����...\n");//1.FuncInitArraytest
	{
		printf("Initialһ�� 2 �� 3 �еĶ�ά���� A ...\n");					 
		InitArray(&A, 2, 2, 3);
		printf("\n");
	} 
	PressEnter;
	
	printf("5\nFunc AssignArray test...\n");				//5.FuncAssignArraytest
	{
		int i, j;
		AElemType_Sq e = 0;
		
		for(i=0; i<A.bounds[0]; i++)
		{
			for(j=0; j<A.bounds[1]; j++)
			{
				printf("��ֵ��A[%d][%d] = %d\n", i, j, ++e);
				AssignArray(&A, e, i, j);
			}
		}				
		printf("\n");
	} 
	PressEnter;
	
	printf("6\nFunc ArrayPrint test...\n");					//6.FuncArrayPrinttest
	{
		printf(" A = ");
		ArrayPrint(A); 
		printf("\n\n");
	}
	PressEnter;
	
	printf("3��4\nFunc LocateArray��ValueArray test...\n");	//3��4.FuncLocateArray��ValueArraytest
	{
		AElemType_Sq x;
		
		printf("��ȡ A ���±�Ϊ (1,1) ��Ԫ�ص�ֵ��Locate ������� A[1][1] �����λ��...\n");
		ValueArray(A, &x, 1, 1);
		printf(" A[1][1] = %d\n", x);
		printf("\n");
	} 
	PressEnter;
		
	printf("2\nFunc DestroyArray test...\n");				//2.FuncDestroyArraytest
	{
		printf("���� A ǰ��");
		A.dim!=0 ? printf(" A ���ڣ�\n") : printf(" A �����ڣ���\n"); 					 
		DestroyArray(&A); 
		printf("���� A ��");
		A.dim!=0 ? printf(" A ���ڣ�\n") : printf(" A �����ڣ���\n");
		printf("\n");
	} 
	PressEnter;
		
	return 0;
}
