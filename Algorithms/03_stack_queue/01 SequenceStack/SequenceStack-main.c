/******************************************
 *						      			  *
 * 文件夹: 03 栈和队列\01 SequenceStack *
 * 						      			  *
 * 内  容: 顺序栈相关Functest 			  *
 *                            			  *
 ******************************************/

#include <stdio.h>
#include "SequenceStack.c" 								//**03 栈和队列**//
	
void PrintElem(SElemType_Sq e);
	//testFunc，打印整型 

int main(int argc, char **argv)
{
	SqStack S;
	int i;
	SElemType_Sq e;
	
	printf("1\nFunc InitStack test...\n");			//1.FuncInitStacktest
	{
		printf("Initial顺序栈 S ...\n");					 
		InitStack_Sq(&S);
		printf("\n");
	}
	PressEnter;
	
	printf("4\nFunc StackEmpty test...\n");			//4.FuncStackEmptytest
	{
		StackEmpty_Sq(S) ? printf(" S 为空！！\n") : printf(" S 不为空！\n");
		printf("\n");
	}
	PressEnter;
	
	printf("7\nFunc Push test...\n");					//7.FuncPushtest
	{
		for(i=1; i<=6; i++)									
		{
			printf("将 \"%2d\" 压入栈 S ", 2*i);
			Push_Sq(&S, 2*i);
			printf("（累计第 %d 个元素）...\n", S.top-S.base);
		}
		printf("\n");
	}
	PressEnter;
	
	printf("9\nFunc StackTraverse test...\n");		//9.FuncStackTraversetest
	{
		printf(" S 中的元素为：S = ");						 
		StackTraverse_Sq(S, PrintElem);
		printf("\n\n");
	}
	PressEnter;
	
	printf("8\nFunc Pop test...\n");					//8.FuncPoptest
	{
		Pop_Sq(&S, &e);
		printf("栈顶元素 \"%d\" 出栈...\n", e);
		printf(" S 中的元素为：S = ");						 
		StackTraverse_Sq(S, PrintElem);
		printf("\n\n");
	}
	PressEnter;
	
	printf("5\nFunc StackLength test...\n");			//5.FuncStackLengthtest
	{
		i = StackLength_Sq(S);
		printf(" S 的长度为 %d \n", i);
		printf("\n");
	}
	PressEnter;
	
	printf("6\nFunc GetTop test...\n");				//6.FuncGetToptest
	{
		GetTop_Sq(S, &e);
		printf("栈顶元素的值为 \"%d\" \n", e);
		printf("\n");
	}
	PressEnter;
	
	printf("3\nFunc ClearStack test...\n");			//3.FuncClearStacktest
	{
		printf("清空 S 前：");
		StackEmpty_Sq(S) ? printf(" S 为空！！\n") : printf(" S 不为空！\n");
		ClearStack_Sq(&S);
		printf("清空 S 后：");
		StackEmpty_Sq(S) ? printf(" S 为空！！\n") : printf(" S 不为空！\n");
		printf("\n");
	}
	PressEnter;
	
	printf("2\nFunc DestroyStack test...\n");			//2.FuncDestroyStacktest
	{
		printf("销毁 S 前：");
		S.base!=NULL && S.top!=NULL ? printf(" S 存在！\n") : printf(" S 不存在！！\n");
		DestroyStack_Sq(&S);
		printf("销毁 S 后：");
		S.base!=NULL && S.top!=NULL ? printf(" S 存在！\n") : printf(" S 不存在！！\n");
		printf("\n");
	}
	PressEnter;
		
	return 0;
}

void PrintElem(SElemType_Sq e)
{
	printf("%d ", e);
}
