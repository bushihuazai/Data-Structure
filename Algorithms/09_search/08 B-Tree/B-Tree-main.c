/***************************
 *						   *
 * �ļ���: 09 ����       *
 * 						   *
 * �ļ���: B-Tree-main.c   *
 * 						   *
 * ��  ��: B�����Functest *
 *                         *
 ***************************/

#include <stdio.h>
#include "B-Tree.c" 							//**09 ����**//

/* �궨�� */
#define Max 15									//���ұ���Ԫ�ظ���

int main(int argc, char *argv[])
{	
	Table T;
	BTree BT;

	printf("���������һ�����ұ�...\n");
	{
		FILE *fp;
		
		fp = fopen("TestData_Table.txt", "r");	
		Create(fp, &T, Max);	
		Traverse(T, PrintKey);	
		printf("\n");
	}	
	PressEnter; 
	
	printf("1����8\nFunc CreateBTree�� test...\n");		//1����8.FuncCreateBTree��test		
	{
		printf("����B��...\n");
		CreateBTree(&BT, T);
		printf("\n");
	}	
	PressEnter; 
	
	printf("16\nFunc PrintBT_InOreder test...\n");		//16.FuncPrintBT_InOredertest	 
	{
		printf("���������B���ؼ��֣�");
		PrintBT_InOreder(BT); 
		printf("\n\n");
	}
	PressEnter;
	
	printf("17\nFunc PrintBT_InOreder�� test...\n");	//17.FuncPrintBT_Leveltest
	{
		printf("��������B���ؼ��֣�\n");
		PrintBT_Level(BT);
		printf("\n");
	}	
	PressEnter; 
	
	printf("9����15\nFunc DeleteKey�� test...\n");		//9����15.FuncDeleteKey��test
	{
		int K = 45;
			
		printf("ɾ���ؼ��� %d ...\n", K);
		DeleteKey(&BT, K);
		printf("���������B���ؼ��֣�");
		PrintBT_InOreder(BT); 
		printf("\n");
		printf("��������B���ؼ��֣�\n");
		PrintBT_Level(BT);
		printf("\n");
	}	
	PressEnter;
		
	return 0;
}
