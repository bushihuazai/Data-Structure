/************************************
 *						            *
 * �ļ���: 02 ���Ա�              *
 * 						            *
 * ��  ��: ��չ�ĵ��������Functest *
 *                                  *
 ************************************/

#include <stdio.h>
#include "ExtenLinkedList.c" 							//**02 ���Ա�**//

/* Funcԭ�� */
Status CmpGreater(LElemType_E e, LElemType_E data);		//�ж�data�Ƿ����e //��data>e������TRUE
void PrintElem(LElemType_E e);							//testFunc����ӡ����
	
int main(int argc, char **argv)
{
	ELinkList L;
	Link p, q, s;
	PositionPtr r;
	int i;
	LElemType_E e;
		
	printf("3\nFunc InitList_E test...\n");			//3.FuncInitList_Etest
	{
		printf("Initial��չ�ĵ����� L ...\n");	
		InitList_E(&L);
		printf("\n");
	} 
	PressEnter;
	
	printf("14\nFunc ListEmpty_E test...\n");		//14.FuncListEmpty_Etest
	{
		ListEmpty_E(L) ? printf(" L Ϊ�գ���\n") : printf(" L ��Ϊ�գ�\n");
		printf("\n");
	} 
	PressEnter;
	
	printf("23\nFunc ListInsert_L_E test...\n");	//23.FuncListInsert_L_Etest
	{
		for(i=1; i<=6; i++)
		{
			printf("�� L �� %d ��λ�ò��� \"%d\" ...\n", i, 2*i);
			ListInsert_L_E(&L, i, 2*i);
		}
		printf("\n");
	} 
	PressEnter;
	
	printf("22\nFunc ListTraverse_E test...\n");	//22.FuncListTraverse_Etest
	{
		printf(" L �е�Ԫ��Ϊ��L = ");						 
		ListTraverse_E(L, PrintElem);
		printf("\n\n");
	} 
	PressEnter;
	
	printf("15\nFunc ListLength_E test...\n");		//15.FuncListLength_Etest
	{
		i = ListLength_E(L);
		printf(" L �ĳ���Ϊ %d \n", i);
		printf("\n");
	} 
	PressEnter;
	
	printf("24\nFunc ListDelete_E test...\n");		//24.FuncListDelete_L_Etest
	{
		ListDelete_L_E(&L, 6, &e);
		printf("ɾ�� L �е� 6 ��Ԫ�� \"%d\" ...\n", e);
		printf(" L �е�Ԫ��Ϊ��L = ");						 
		ListTraverse_E(L, PrintElem);
		printf("\n\n");
	} 
	PressEnter;	

	printf("20\nFunc LocatePos_E test...\n");		//20.FuncLocatePos_Etest
	{
		LocatePos_E(L, 3, &p);
		printf(" L �е� 3 ��Ԫ�� \"%d\" �ĵ�ַΪ 0x%x \n", p->data, p);
		printf("\n");
	} 
	PressEnter;
	
	printf("18\nFunc PriorPos_E test...\n");		//18.FuncPriorPos_Etest
	{
		r = PriorPos_E(L, p);
		printf("ָ�� p ָ���Ԫ�� \"%d\" ��ǰ��Ԫ��Ϊ \"%d\" \n", p->data, r->data);
		printf("\n");
	} 
	PressEnter;
	
	printf("19\nFunc NextPos_E test...\n");			//19.FuncNextPos_Etest
	{
		r = NextPos_E(p);
		printf("ָ�� p ָ���Ԫ�� \"%d\" �ĺ��Ԫ��Ϊ \"%d\" \n", p->data, r->data);
		printf("\n");
	} 
	PressEnter;
	
	printf("21\nFunc LocateElem_E test...\n");		//21.FuncLocateElem_Etest
	{
		r = LocateElem_E(L, 7, CmpGreater);
		printf(" L �е�һ��Ԫ��ֵ���� 7 ��Ԫ�� \"%d\" �ĵ�ַΪ 0x%x \n", r->data, r);
		printf("\n");
	} 
	PressEnter;
	
	printf("1\nFunc MakeNode_E test...\n");			//1.FuncMakeNode_Etest
	{
		printf("������� p ...\n");
		MakeNode_E(&p, 101);
		printf("������� q ...\n");
		MakeNode_E(&q, 202);
		printf("\n"); 
	} 
	PressEnter;
	
	printf("13\nFunc GetCurElem_E test...\n");		//13.FuncGetCurElem_Etest
	{
		e = GetCurElem_E(p);
		printf("��� p ��ֵΪ \"%d\" \n", e);
		e = GetCurElem_E(q);
		printf("��� q ��ֵΪ \"%d\" \n", e);
		printf("\n");
	} 
	PressEnter;
	
	printf("12\nFunc SetCurElem_E test...\n");		//12.FuncSetCurElem_Etest
	{
		printf("�� 888 �滻 p ����е�ֵ...\n"); 
		SetCurElem_E(p, 888);
		printf("��� p ��ֵΪ \"%d\" \n", p->data);
		printf("\n");
	} 
	PressEnter;
	
	printf("2\nFunc FreeNode_E test...\n");			//2.FuncFreeNode_Etest
	{
		printf("���ٽ�� p ǰ��");
		p ? printf(" p ���ڣ�\n") : printf(" p �����ڣ���\n");
		FreeNode_E(&p);
		printf("���ٽ�� p ��");
		p ? printf(" p ���ڣ�\n") : printf(" p �����ڣ���\n");
		printf("\n");
	} 
	PressEnter;
	 
	printf("8\nFunc Append_E test...\n");			//8.FuncAppend_Etest
	{
		printf("�� q ������ L ���һ�����֮��...\n");
		Append_E(&L, q);
		printf(" L �е�Ԫ��Ϊ��L = ");						 
		ListTraverse_E(L, PrintElem);
		printf("\n\n");
	} 
	PressEnter;
	
	printf("9\nFunc Remove_E test...\n");			//9.FuncRemove_Etest
	{
		printf("ɾ�� L �����һ����㣬�� p ����ɾ���Ľ��...\n");
		Remove_E(&L, &p);
		printf(" L �е�Ԫ��Ϊ��L = ");						 
		ListTraverse_E(L, PrintElem);
		printf("\n\n");
	} 
	PressEnter;
		
	printf("6\nFunc InsFirst_E test...\n");			//6.FuncInsFirst_Etest
	{
		printf("����ֵΪ 303 �Ľ�� p ...\n");
		MakeNode_E(&p, 303);
		printf("�� q ָ�� L �е� 4 ��Ԫ��...\n");
		LocatePos_E(L, 4, &q);
		printf("�� p �����뵽�� q ��ͷ��������ĵ�һ�����֮ǰ...\n");
		InsFirst_E(&L, q, p);
		printf(" L �е�Ԫ��Ϊ��L = ");						 
		ListTraverse_E(L, PrintElem);
		printf("\n\n");
	} 
	PressEnter;
	
	printf("7\nFunc DelFirst_E test...\n");			//7.FuncDelFirst_Etest
	{
		printf("ɾ�� L ���Ե�4����� q Ϊͷ��������ĵ�һ�����...\n");
		DelFirst_E(&L, q, &p);
		printf("��ǰ L ��ֵΪ��L = ");						 
		ListTraverse_E(L, PrintElem);
		printf("\n\n");
	} 
	PressEnter;

	printf("16\nFunc GetHead_E test...\n");			//16.FuncGetHead_Etest
	{
		p = GetHead_E(L);
		printf(" L ͷָ��Ϊ p = L.head = 0x%x \n", p);
		printf("\n");
	} 
	PressEnter;

	printf("17\nFunc GetLast_E test...\n");			//17.FuncGetLast_Etest
	{
		q = GetLast_E(L);
		printf(" L βָ��Ϊ q = L.tail = 0x%x \n", q);	
		printf("\n");
	} 
	PressEnter;
			
	printf("10\nFunc InsBefore_E test...\n");		//10.FuncInsBefore_Etest
	{			
		printf("����ֵΪ 404 �Ľ�� s ...\n");						
		MakeNode_E(&s, 404);
		printf("����� s ���뵽β��� q ֮ǰ...\n");
		InsBefore(&L, &q, s);
		printf("��ǰ L ��ֵΪ��L = ");						 
		ListTraverse_E(L, PrintElem);
		printf("\n\n");
	} 
	PressEnter;
		
	printf("11\nFunc InsAfter_E test...\n");		//11.FuncInsAfter_Etest
	{	
		printf("����ֵΪ 505 �Ľ�� s ...\n");						
		MakeNode_E(&s, 505);
		printf("����� s ���뵽ͷ��� p ֮��...\n");
		InsAfter(&L, &p, s);
		printf(" L �е�Ԫ��Ϊ��L = ");			 
		ListTraverse_E(L, PrintElem);
		printf("\n\n");
	} 
	PressEnter;
	
	printf("4\nFunc ClearList_E test...\n");		//4.FuncClearList_Etest
	{
		printf("��� L ǰ��");
		ListEmpty_E(L) ? printf(" L Ϊ�գ���\n") : printf(" L ��Ϊ�գ�\n");
		ClearList_E(&L);
		printf("��� L ��");
		ListEmpty_E(L) ? printf(" L Ϊ�գ���\n") : printf(" L ��Ϊ�գ�\n");
		printf("\n");
	} 
	PressEnter;
	
	printf("5\nFunc DestroyList_E test...\n");		//5.FuncDestroyList_Etest
	{
		printf("���� L ǰ��");
		L.head!=NULL && L.tail!=NULL ? printf(" L ���ڣ�\n") : printf(" L �����ڣ���\n");
		DestroyList_E(&L);
		printf("���� L ��");
		L.head!=NULL && L.tail!=NULL ? printf(" L ���ڣ�\n") : printf(" L �����ڣ���\n");
		printf("\n");
	} 
	PressEnter;
	
	return 0; 
}

Status CmpGreater(LElemType_E e, LElemType_E data)
{
	return data>e ? TRUE : FALSE;
}

void PrintElem(LElemType_E e)
{
	printf("%d ", e);
}
