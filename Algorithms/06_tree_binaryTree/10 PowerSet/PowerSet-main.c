/***************************************
 *							           *
 * �ļ���: 06_tree_binaryTree\10 PowerSet *
 * 						               *
 * �ļ���: PowerSet-main.c             *
 * 					    	           *
 * ��  ��: �ݼ����Functest            *
 *                                     *
 ***************************************/

#include <stdio.h>
#include "PowerSet.c" 									//**06_tree_binaryTree**//															

int main(int argc, char *argv[])
{
	LinkList A;

	printf("1\nFunc CreatePowerSet_PS test...\n");	//1.FuncCreatePowerSet_PStest
	{
		FILE *fp;

		printf("�������� A ...\n");
		fp = fopen("TestData_A.txt", "r");
		CreatePowerSet_PS(fp, &A);
		fclose(fp);
		printf("\n");
	}
	PressEnter;

	printf("3\nFunc Output_PS test...\n");			//3.FuncOutput_PStest
	{
		printf("������� A = ");
		Output_PS(A);
		printf("\n");
	}
	PressEnter;

	printf("2\nFunc GetPowerSet_PS test...\n");		//2.FuncGetPowerSet_PStest
	{
		LinkList B;

		printf("���㼯�ϵ��ݼ�...\n");
		printf("�������� B ��ʱ�洢�ݼ�Ԫ��...\n");
		InitList_L(&B);
		printf("���������ȡ���ݼ��еĸ��Ӽ�...\n");
		GetPowerSet_PS(1, A, B);
		printf("\n");
	}
	PressEnter;
}
