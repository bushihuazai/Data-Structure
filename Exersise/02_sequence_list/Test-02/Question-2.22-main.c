#include <stdio.h>
#include "../../../Algorithms/01_abstract/Status.h"  									//**01_abstract**//
#include "../../../Algorithms/02_sequence_list/04 SinglyLinkedList/SinglyLinkedList.c"	//**02_sequence_list**//

/* Funcԭ�� */
Status Algo_2_22(LinkList L);

void PrintElem(LElemType_L e);
//testFunc����ӡ����

int main(int argc, char *argv[])
{
	LinkList L;
	int i;

	if (InitList_L(&L)) {				//����L�����ɹ�
		for (i = 1; i <= 10; i++) {		//����L��Ԫ��1~10
			ListInsert_L(L, i, i);
		}
	}

	printf("L = ");
	ListTraverse_L(L, PrintElem); 		//���L
	printf("\n\n");

	printf("���� SingleLinkedList ...\n");
	Algo_2_22(L);
	printf("��ʱL = ");
	ListTraverse_L(L, PrintElem); 		//���L
	printf("\n\n");

	return 0;
}

/*��������������������
����2.22�� SingleLinkedList ���é�
��������������������*/
Status Algo_2_22(LinkList L)
{
	LinkList pre, p;

	if (!L || !L->next) {			//���� not exsist������ is empty
		return ERROR;

	}

	p = L->next;
	L->next = NULL;

	while(p)						//ͷ�巨 
	{  {pre = p;
		p = p->next;
		pre->next = L->next;
		L->next = pre;
	}

	return OK;
}

void PrintElem(LElemType_L e)
{
	printf("%d ", e);
}
