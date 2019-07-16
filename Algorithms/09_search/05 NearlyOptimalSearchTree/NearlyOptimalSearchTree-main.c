/******************************************
 *						                  *
 * �ļ���: 09_search                      *
 * 						                  *
 * �ļ���: NearlyOptimalSearchTree-main.c *
 * 							              *
 * ��  ��: ���Ų��������Functest         *
 *                                        *
 ******************************************/

#include <stdio.h>
#include "NearlyOptimalSearchTree.c" 		//**09_search**//

/* �궨�� */
#define Max 9								//���ұ���Ԫ�ظ��� 

void Print(ElemType_Search e);		//���������еĹؼ��ֺ�������

int main(int argc, char *argv[])
{
	Table T;
	SOSTree BT;

	printf("���������һ�����ұ�...\n");
	{
		FILE *fp;

		fp = fopen("TestData_Table.txt", "r");
		Create(fp, &T, Max);
		Traverse(T, Print);
	}
	PressEnter;

	printf("1��2��3��4\nFunc CreateSOSTree�� test...\n");	//1��2��3��4.FuncCreateSOSTree��test
	{
		printf("���첢չʾ���Ų�������\n");
		CreateSOSTree(&BT, T);
		PrintTree(BT);
		printf("\n");
	}
	PressEnter;

	printf("5\nFunc Search_SOST test...\n");				//5.FuncSearch_SOSTtest
	{
		printf("�ؼ��� %c ", ch[3]);
		Search_SOST(BT, 3) ? printf("��") : printf("����");
		printf("���Ų�������!\n");
		printf("\n");
	}
	PressEnter;

	return 0;
}

void Print(ElemType_Search e)
{
	printf("(%c, %.1f) ", ch[e.key], e.weight);
}
