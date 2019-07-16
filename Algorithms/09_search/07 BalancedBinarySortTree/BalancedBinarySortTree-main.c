/*****************************************
 *						                 *
 * �ļ���: 09_search                     *
 * 						                 *
 * �ļ���: BalancedBinarySortTree-main.c *
 * 							             *
 * ��  ��: ƽ��������������Functest    *
 *                                       *
 *****************************************/

#include <stdio.h>
#include "BalancedBinarySortTree.c" 		//**09_search**//

/* �궨�� */
#define Max 7								//���ұ���Ԫ�ظ���

int main(int argc, char *argv[])
{
	Table T;
	BBSTree BBST;

	printf("���������һ�����ұ�...\n");
	{
		FILE *fp;

		fp = fopen("TestData_Table.txt", "r");
		Create(fp, &T, Max);
		Traverse(T, PrintKey);
		printf("\n");
	}
	PressEnter;

	printf("1��3��5��6��7��8��9\nFunc CreateAVL�� test...\n");		//1��3��5��6��7��8��9.FuncCreateAVL��test
	{
		printf("����������������������ؼ��֣�");
		CreateAVL(&BBST, T);
		InOrderTraverse_AVL(BBST, PrintKey);
		printf("\n\n");
	}
	PressEnter;

	printf("10��11\nFunc PrintAVLTree�� test...\n");				//10��11.FuncPrintAVLTree��test
	{
		printf("��ӡƽ���������\n");
		PrintAVLTree(BBST);
		printf("\n");
	}
	PressEnter;

	printf("2\nFunc SearchAVL test...\n");							//2.FuncSearchAVLtest
	{
		printf("�ؼ��� %2d ", T.elem[1].key);
		SearchAVL(BBST, T.elem[1].key) == NULL ? printf("����") : printf("��");
		printf("ƽ���������!\n");
		printf("\n");
	}
	PressEnter;

	printf("4\nFunc DeleteAVL test...\n");							//4.FuncDeleteAVLtest
	{
		BBSTree f, p;
		Boolean taller;

		f = NULL;
		p = BBST;
		taller = FALSE;
		DeleteAVL(&BBST, T.elem[1], f, p, &taller, 0);
		printf("ɾ���ؼ��� %2d ���ƽ�������Ϊ��\n", T.elem[1].key);
		PrintAVLTree(BBST);
		printf("\n");
	}
	PressEnter;

	return 0;
}
