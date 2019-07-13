/******************************
 *						      *
 * �ļ���: 09 ����          *
 * 						      *
 * �ļ���: DLTree-main.c      *
 * 						      *
 * ��  ��: ˫�������Functest *
 *                            *
 ******************************/

#include <stdio.h>
#include "DLTree.c" 						//**09 ����**//

int main(int argc, char *argv[])
{		
	DLTree DLT;

	printf("1��3��4\nFunc CreateDLTree�� test...\n");		//1��3��4.FuncCreateDLTree��test		
	{
		FILE *fp;
		
		printf("����һ��˫��������������еĹؼ��֣�\n");
		fp = fopen("TestData_Table.txt", "r");	
		CreateDLTree(fp, &DLT);	
		PrintKeys(DLT);	
		printf("\n\n");
	}	
	PressEnter; 
	
	printf("2\nFunc SearchDLTree test...\n");				//2.FuncSearchDLTreetest		
	{
		KeysType K = {"LONG", 4}; 
		
		printf("���ң��ؼ��� %s ", K.ch);
		SearchDLTree(DLT, K) ? printf("��") : printf("����");
		printf("˫�����У�\n");
		printf("\n");
	}	
	PressEnter; 

	return 0;
}
