/******************************
 *						      *
 * �ļ���: 11 �ⲿ����      *
 * 						      *
 * �ļ���: LoserTree-main.c   *
 * 							  *
 * ��  ��: ���������Functest *
 *                            *
 ******************************/

#include <stdio.h>
#include "LoserTree.c"		//**11 �ⲿ����**//

int main(int argc, char *argv[])
{	
	FILE *fp;
	LoserTree ls;
	External b;
	
	printf("6\nFunc RandomNum test...\n");						//6.FuncRandomNumtest		
	{
		printf("�������������Ϊʾ���ļ�...\n");
		fp = fopen("TestData.txt", "w+");							//�������д���ļ�
		RandomNum(fp);
		printf("\n");
	}	
	PressEnter; 
	
	printf("7\nFunc Cut_Sort test...\n");						//7.FuncCut_Sorttest
	{
		printf("�ָ�����������ֱ���������[0..k-1].txt...\n");
		fp = fopen("TestData.txt", "r");							//��ȡ������ļ�
		Cut_Sort(fp);												//�ָ�fpΪk���ļ������ֱ����� 
		printf("\n");
	}	
	PressEnter; 	
	
	printf("1��2��3��4��5\nFunc K_Merge�� test...\n");			//1��2��3��4��5.FuncK_Merge��test
	{
		printf("��k���鲢��[0..k-1].txt�����д���ļ�Order.txt");
		fp = fopen("Order.txt", "w+");								//������鲢����д�������Ĺؼ���
		K_Merge(fp, ls, b);
		system("start Order.txt");									//�����Ĺؼ��� 
		printf("\n\n");	
	}
	PressEnter;
	
	system("rd/s/q tmpfile");										//ɾ����ʱ�ļ��� 
	
	return 0;
}
