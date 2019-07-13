/******************************************
 *						      			  *
 * �ļ���: 03 ջ�Ͷ���\01 SequenceStack *
 * 						      			  *
 * ��  ��: ˳��ջ���Functest 			  *
 *                            			  *
 ******************************************/

#include <stdio.h>
#include "SequenceStack.c" 								//**03 ջ�Ͷ���**//
	
void PrintElem(SElemType_Sq e);
	//testFunc����ӡ���� 

int main(int argc, char **argv)
{
	SqStack S;
	int i;
	SElemType_Sq e;
	
	printf("1\nFunc InitStack test...\n");			//1.FuncInitStacktest
	{
		printf("Initial˳��ջ S ...\n");					 
		InitStack_Sq(&S);
		printf("\n");
	}
	PressEnter;
	
	printf("4\nFunc StackEmpty test...\n");			//4.FuncStackEmptytest
	{
		StackEmpty_Sq(S) ? printf(" S Ϊ�գ���\n") : printf(" S ��Ϊ�գ�\n");
		printf("\n");
	}
	PressEnter;
	
	printf("7\nFunc Push test...\n");					//7.FuncPushtest
	{
		for(i=1; i<=6; i++)									
		{
			printf("�� \"%2d\" ѹ��ջ S ", 2*i);
			Push_Sq(&S, 2*i);
			printf("���ۼƵ� %d ��Ԫ�أ�...\n", S.top-S.base);
		}
		printf("\n");
	}
	PressEnter;
	
	printf("9\nFunc StackTraverse test...\n");		//9.FuncStackTraversetest
	{
		printf(" S �е�Ԫ��Ϊ��S = ");						 
		StackTraverse_Sq(S, PrintElem);
		printf("\n\n");
	}
	PressEnter;
	
	printf("8\nFunc Pop test...\n");					//8.FuncPoptest
	{
		Pop_Sq(&S, &e);
		printf("ջ��Ԫ�� \"%d\" ��ջ...\n", e);
		printf(" S �е�Ԫ��Ϊ��S = ");						 
		StackTraverse_Sq(S, PrintElem);
		printf("\n\n");
	}
	PressEnter;
	
	printf("5\nFunc StackLength test...\n");			//5.FuncStackLengthtest
	{
		i = StackLength_Sq(S);
		printf(" S �ĳ���Ϊ %d \n", i);
		printf("\n");
	}
	PressEnter;
	
	printf("6\nFunc GetTop test...\n");				//6.FuncGetToptest
	{
		GetTop_Sq(S, &e);
		printf("ջ��Ԫ�ص�ֵΪ \"%d\" \n", e);
		printf("\n");
	}
	PressEnter;
	
	printf("3\nFunc ClearStack test...\n");			//3.FuncClearStacktest
	{
		printf("��� S ǰ��");
		StackEmpty_Sq(S) ? printf(" S Ϊ�գ���\n") : printf(" S ��Ϊ�գ�\n");
		ClearStack_Sq(&S);
		printf("��� S ��");
		StackEmpty_Sq(S) ? printf(" S Ϊ�գ���\n") : printf(" S ��Ϊ�գ�\n");
		printf("\n");
	}
	PressEnter;
	
	printf("2\nFunc DestroyStack test...\n");			//2.FuncDestroyStacktest
	{
		printf("���� S ǰ��");
		S.base!=NULL && S.top!=NULL ? printf(" S ���ڣ�\n") : printf(" S �����ڣ���\n");
		DestroyStack_Sq(&S);
		printf("���� S ��");
		S.base!=NULL && S.top!=NULL ? printf(" S ���ڣ�\n") : printf(" S �����ڣ���\n");
		printf("\n");
	}
	PressEnter;
		
	return 0;
}

void PrintElem(SElemType_Sq e)
{
	printf("%d ", e);
}
