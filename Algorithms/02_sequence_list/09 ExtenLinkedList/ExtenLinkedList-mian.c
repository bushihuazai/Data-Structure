/************************************
 *						            *
 * 文件夹: 02 线性表              *
 * 						            *
 * 内  容: 扩展的单链表相关Functest *
 *                                  *
 ************************************/

#include <stdio.h>
#include "ExtenLinkedList.c" 							//**02 线性表**//

/* Func原型 */
Status CmpGreater(LElemType_E e, LElemType_E data);		//判断data是否大于e //若data>e，返回TRUE
void PrintElem(LElemType_E e);							//testFunc，打印整型
	
int main(int argc, char **argv)
{
	ELinkList L;
	Link p, q, s;
	PositionPtr r;
	int i;
	LElemType_E e;
		
	printf("3\nFunc InitList_E test...\n");			//3.FuncInitList_Etest
	{
		printf("Initial扩展的单链表 L ...\n");	
		InitList_E(&L);
		printf("\n");
	} 
	PressEnter;
	
	printf("14\nFunc ListEmpty_E test...\n");		//14.FuncListEmpty_Etest
	{
		ListEmpty_E(L) ? printf(" L 为空！！\n") : printf(" L 不为空！\n");
		printf("\n");
	} 
	PressEnter;
	
	printf("23\nFunc ListInsert_L_E test...\n");	//23.FuncListInsert_L_Etest
	{
		for(i=1; i<=6; i++)
		{
			printf("在 L 第 %d 个位置插入 \"%d\" ...\n", i, 2*i);
			ListInsert_L_E(&L, i, 2*i);
		}
		printf("\n");
	} 
	PressEnter;
	
	printf("22\nFunc ListTraverse_E test...\n");	//22.FuncListTraverse_Etest
	{
		printf(" L 中的元素为：L = ");						 
		ListTraverse_E(L, PrintElem);
		printf("\n\n");
	} 
	PressEnter;
	
	printf("15\nFunc ListLength_E test...\n");		//15.FuncListLength_Etest
	{
		i = ListLength_E(L);
		printf(" L 的长度为 %d \n", i);
		printf("\n");
	} 
	PressEnter;
	
	printf("24\nFunc ListDelete_E test...\n");		//24.FuncListDelete_L_Etest
	{
		ListDelete_L_E(&L, 6, &e);
		printf("删除 L 中第 6 个元素 \"%d\" ...\n", e);
		printf(" L 中的元素为：L = ");						 
		ListTraverse_E(L, PrintElem);
		printf("\n\n");
	} 
	PressEnter;	

	printf("20\nFunc LocatePos_E test...\n");		//20.FuncLocatePos_Etest
	{
		LocatePos_E(L, 3, &p);
		printf(" L 中第 3 个元素 \"%d\" 的地址为 0x%x \n", p->data, p);
		printf("\n");
	} 
	PressEnter;
	
	printf("18\nFunc PriorPos_E test...\n");		//18.FuncPriorPos_Etest
	{
		r = PriorPos_E(L, p);
		printf("指针 p 指向的元素 \"%d\" 的前驱元素为 \"%d\" \n", p->data, r->data);
		printf("\n");
	} 
	PressEnter;
	
	printf("19\nFunc NextPos_E test...\n");			//19.FuncNextPos_Etest
	{
		r = NextPos_E(p);
		printf("指针 p 指向的元素 \"%d\" 的后继元素为 \"%d\" \n", p->data, r->data);
		printf("\n");
	} 
	PressEnter;
	
	printf("21\nFunc LocateElem_E test...\n");		//21.FuncLocateElem_Etest
	{
		r = LocateElem_E(L, 7, CmpGreater);
		printf(" L 中第一个元素值大于 7 的元素 \"%d\" 的地址为 0x%x \n", r->data, r);
		printf("\n");
	} 
	PressEnter;
	
	printf("1\nFunc MakeNode_E test...\n");			//1.FuncMakeNode_Etest
	{
		printf("创建结点 p ...\n");
		MakeNode_E(&p, 101);
		printf("创建结点 q ...\n");
		MakeNode_E(&q, 202);
		printf("\n"); 
	} 
	PressEnter;
	
	printf("13\nFunc GetCurElem_E test...\n");		//13.FuncGetCurElem_Etest
	{
		e = GetCurElem_E(p);
		printf("结点 p 的值为 \"%d\" \n", e);
		e = GetCurElem_E(q);
		printf("结点 q 的值为 \"%d\" \n", e);
		printf("\n");
	} 
	PressEnter;
	
	printf("12\nFunc SetCurElem_E test...\n");		//12.FuncSetCurElem_Etest
	{
		printf("用 888 替换 p 结点中的值...\n"); 
		SetCurElem_E(p, 888);
		printf("结点 p 的值为 \"%d\" \n", p->data);
		printf("\n");
	} 
	PressEnter;
	
	printf("2\nFunc FreeNode_E test...\n");			//2.FuncFreeNode_Etest
	{
		printf("销毁结点 p 前：");
		p ? printf(" p 存在！\n") : printf(" p 不存在！！\n");
		FreeNode_E(&p);
		printf("销毁结点 p 后：");
		p ? printf(" p 存在！\n") : printf(" p 不存在！！\n");
		printf("\n");
	} 
	PressEnter;
	 
	printf("8\nFunc Append_E test...\n");			//8.FuncAppend_Etest
	{
		printf("将 q 结点插在 L 最后一个结点之后...\n");
		Append_E(&L, q);
		printf(" L 中的元素为：L = ");						 
		ListTraverse_E(L, PrintElem);
		printf("\n\n");
	} 
	PressEnter;
	
	printf("9\nFunc Remove_E test...\n");			//9.FuncRemove_Etest
	{
		printf("删除 L 中最后一个结点，用 p 接收删除的结点...\n");
		Remove_E(&L, &p);
		printf(" L 中的元素为：L = ");						 
		ListTraverse_E(L, PrintElem);
		printf("\n\n");
	} 
	PressEnter;
		
	printf("6\nFunc InsFirst_E test...\n");			//6.FuncInsFirst_Etest
	{
		printf("创建值为 303 的结点 p ...\n");
		MakeNode_E(&p, 303);
		printf("令 q 指向 L 中第 4 个元素...\n");
		LocatePos_E(L, 4, &q);
		printf("将 p 结点插入到以 q 作头结点的链表的第一个结点之前...\n");
		InsFirst_E(&L, q, p);
		printf(" L 中的元素为：L = ");						 
		ListTraverse_E(L, PrintElem);
		printf("\n\n");
	} 
	PressEnter;
	
	printf("7\nFunc DelFirst_E test...\n");			//7.FuncDelFirst_Etest
	{
		printf("删除 L 中以第4个结点 q 为头结点的链表的第一个结点...\n");
		DelFirst_E(&L, q, &p);
		printf("当前 L 的值为：L = ");						 
		ListTraverse_E(L, PrintElem);
		printf("\n\n");
	} 
	PressEnter;

	printf("16\nFunc GetHead_E test...\n");			//16.FuncGetHead_Etest
	{
		p = GetHead_E(L);
		printf(" L 头指针为 p = L.head = 0x%x \n", p);
		printf("\n");
	} 
	PressEnter;

	printf("17\nFunc GetLast_E test...\n");			//17.FuncGetLast_Etest
	{
		q = GetLast_E(L);
		printf(" L 尾指针为 q = L.tail = 0x%x \n", q);	
		printf("\n");
	} 
	PressEnter;
			
	printf("10\nFunc InsBefore_E test...\n");		//10.FuncInsBefore_Etest
	{			
		printf("创建值为 404 的结点 s ...\n");						
		MakeNode_E(&s, 404);
		printf("将结点 s 插入到尾结点 q 之前...\n");
		InsBefore(&L, &q, s);
		printf("当前 L 的值为：L = ");						 
		ListTraverse_E(L, PrintElem);
		printf("\n\n");
	} 
	PressEnter;
		
	printf("11\nFunc InsAfter_E test...\n");		//11.FuncInsAfter_Etest
	{	
		printf("创建值为 505 的结点 s ...\n");						
		MakeNode_E(&s, 505);
		printf("将结点 s 插入到头结点 p 之后...\n");
		InsAfter(&L, &p, s);
		printf(" L 中的元素为：L = ");			 
		ListTraverse_E(L, PrintElem);
		printf("\n\n");
	} 
	PressEnter;
	
	printf("4\nFunc ClearList_E test...\n");		//4.FuncClearList_Etest
	{
		printf("清空 L 前：");
		ListEmpty_E(L) ? printf(" L 为空！！\n") : printf(" L 不为空！\n");
		ClearList_E(&L);
		printf("清空 L 后：");
		ListEmpty_E(L) ? printf(" L 为空！！\n") : printf(" L 不为空！\n");
		printf("\n");
	} 
	PressEnter;
	
	printf("5\nFunc DestroyList_E test...\n");		//5.FuncDestroyList_Etest
	{
		printf("销毁 L 前：");
		L.head!=NULL && L.tail!=NULL ? printf(" L 存在！\n") : printf(" L 不存在！！\n");
		DestroyList_E(&L);
		printf("销毁 L 后：");
		L.head!=NULL && L.tail!=NULL ? printf(" L 存在！\n") : printf(" L 不存在！！\n");
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
