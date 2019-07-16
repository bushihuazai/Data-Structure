/*******************************************
 *                                         *
 * �ļ���: 02 ���Ա�\04 SinglyLinkedList *
 *                                         *
 * ��  ��:  SingleLinkedList ���Functest              *
 *                                         *
 *******************************************/

#include <stdio.h>
#include "SinglyLinkedList.c" 						//**02 ���Ա�**//

/* Funcԭ�� */
Status CmpGreater(LElemType_L e, LElemType_L data);	//�ж�data�Ƿ����e //��data����e������TRUE
void PrintElem(LElemType_L e);						//testFunc����ӡ����

int main(int argc, char **argv)
{
	LinkList L;
	int i;
	LElemType_L e;

	printf("1\nFunc InitList_L test...\n");			//1.FuncInitList_Ltest
	{
		printf("Initial SingleLinkedList  L ...\n");
		InitList_L(&L);
		printf("\n");
	}
	PressEnter;

	printf("4\nFunc ListEmpty_L test...\n");		//4.FuncListEmpty_Ltest
	{
		ListEmpty_L(L) ? printf(" L  is empty!!\n") : printf(" L  not empty!\n");
		printf("\n");
	}
	PressEnter;

	printf("10\nFunc ListInsert_L test...\n");		//10.FuncListInsert_Ltest
	{
		for (i = 1; i <= 6; i++) {
			printf("�� L �� %d ��λ�ò��� \"%d\" ...\n", i, 2 * i);
			ListInsert_L(L, i, 2 * i);
		}
		printf("\n");
	}
	PressEnter;

	printf("12\nFunc ListTraverse_L test...\n");	//12.FuncListTraverse_Ltest
	{
		printf(" L �е�Ԫ��Ϊ��L = ");
		ListTraverse_L(L, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("5\nFunc ListLength_L test...\n");		//5.FuncListLength_Ltest
	{
		printf(" L �ĳ���Ϊ %d \n", ListLength_L(L));
		printf("\n");
	}
	PressEnter;

	printf("11\nFunc ListDelete_L test...\n");		//11.FuncListDelete_Ltest
	{
		ListDelete_L(L, 6, &e);
		printf("ɾ�� L �е� 6 ��Ԫ�� \"%d\" ...\n", e);
		printf(" L �е�Ԫ��Ϊ��L = ");
		ListTraverse_L(L, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("6\nFunc GetElem_L test...\n");			//6.FuncGetElem_Ltest
	{
		GetElem_L(L, 4, &e);
		printf(" L �е� 4 ��λ�õ�Ԫ��Ϊ \"%d\" \n", e);
		printf("\n");
	}
	PressEnter;

	printf("7\nFunc LocateElem_L test...\n");		//7.FuncLocateElem_Ltest
	{
		i = LocateElem_L(L, 13, CmpGreater);
		printf(" L �е�һ��Ԫ��ֵ���� \"7\" ��Ԫ�ص�λ��Ϊ %d \n", i);
		printf("\n");
	}
	PressEnter;

	printf("8\nFunc PriorElem_L test...\n");		//8.FuncPriorElem_Ltest
	{
		PriorElem_L(L, 6, &e);
		printf("Ԫ�� \"6\" ��ǰ��Ϊ \"%d\" \n", e);
		printf("\n");
	}
	PressEnter;

	printf("9\nFunc NextElem_L test...\n");			//9.FuncNextElem_Ltest
	{
		NextElem_L(L, 6, &e);
		printf("Ԫ�� \"6\" �ĺ��Ϊ \"%d\" \n", e);
		printf("\n");
	}
	PressEnter;

	printf("2\nFunc ClearList_L test...\n");		//2.FuncClearList_Ltest
	{
		printf("��� L ǰ��");
		ListEmpty_L(L) ? printf(" L  is empty!!\n") : printf(" L  not empty!\n");
		ClearList_L(L);
		printf("��� L ��");
		ListEmpty_L(L) ? printf(" L  is empty!!\n") : printf(" L  not empty!\n");
		printf("\n");
	}
	PressEnter;

	printf("3\nFunc DestroyList_L test...\n");		//3.FuncDestroyList_Ltest
	{
		printf("���� L ǰ��");
		L ? printf(" L ����!\n") : printf(" L ������!!\n");
		DestroyList_L(&L);
		printf("���� L ��");
		L ? printf(" L ����!\n") : printf(" L ������!!\n");
		printf("\n");
	}
	PressEnter;

	printf("13\nFunc CreateList_HL test...\n");		//13.FuncCreateList_HLtest
	{
		FILE *fp;
		LinkList L;
		printf("ͷ�巨���� SingleLinkedList  L = ");
		fp = fopen("TestData_HL.txt", "r");				//�ļ�ָ�룬ָ������Դ
		CreateList_HL(fp, &L, 5);
		fclose(fp);
		ListTraverse_L(L, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("14\nFunc CreateList_TL test...\n");		//14.FuncCreateList_TLtest
	{
		FILE *fp;
		LinkList L;
		printf("β�巨���� SingleLinkedList  L = ");
		fp = fopen("TestData_TL.txt", "r");				//�ļ�ָ�룬ָ������Դ
		CreateList_TL(fp, &L, 5);
		fclose(fp);
		ListTraverse_L(L, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	return 0;
}

Status CmpGreater(LElemType_L e, LElemType_L data)
{
	return data > e ? TRUE : FALSE;
}

void PrintElem(LElemType_L e)
{
	printf("%d ", e);
}
