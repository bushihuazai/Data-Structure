/**************************************
 *                                    *
 * 文件夹: 03 栈和队列\07 LinkQueue *
 *                                    *
 * 内  容: 链队相关Functest           *
 *                                    *
 *************************************/

#include <stdio.h>
#include "LinkQueue.c" 		//**03 栈和队列**//
	
void PrintElem(QElemType_L e);						//testFunc，打印整型 
	
int main(int argc, char **argv)
{
	LinkQueue Q;
	int i;
	QElemType_L e;
	
	printf("1\nFunc InitQueue_L test...\n");	//1.FuncInitQueue_Ltest
	{
		printf("Initial链队 Q ...\n");					 
		InitQueue_L(&Q);
		printf("\n");
	} 
	PressEnter;
	
	printf("4\nFunc QueueEmpty_L test...\n");	//4.FuncQueueEmpty_Ltest
	{
		QueueEmpty_L(Q) ? printf(" Q 为空！！\n") : printf(" Q 不为空！\n");
		printf("\n");
	} 
	PressEnter;
	
	printf("7\nFunc EnQueue_L test...\n");		//7.FuncEnQueue_Ltest
	{
		for(i=1; i<=6; i++)									
		{
			printf("元素 \"%2d\" 入队，", 2*i);
			EnQueue_L(&Q, 2*i);
			printf("（累计第 %d 个元素）...\n", QueueLength_L(Q));
		}
		printf("\n");
	} 
	PressEnter;
	
	printf("9\nFunc QueueTraverse_L test...\n");//9.FuncQueueTraverse_Ltest
	{
		printf(" Q 中的元素为：Q = ");						 
		QueueTraverse_L(Q, PrintElem);
		printf("\n\n");
	} 
	PressEnter;
	
	printf("8\nFunc DeQueue_L test...\n");		//8.FuncDeQueue_Ltest
	{
		DeQueue_L(&Q, &e);
		printf("队头元素 \"%d\" 出队...\n", e);
		printf(" Q 中的元素为：Q = ");						 
		QueueTraverse_L(Q, PrintElem);
		printf("\n\n");
	} 
	PressEnter;
	
	printf("5\nFunc QueueLength_L test...\n");	//5.FuncQueueLength_Ltest
	{
		i = QueueLength_L(Q);
		printf(" Q 的长度为 %d \n", i);
		printf("\n");
	} 
	PressEnter;
	
	printf("6\nFunc GetHead_L test...\n");		//6.FuncGetHead_Ltest
	{
		GetHead_L(Q, &e);
		printf("队头元素的值为 \"%d\" \n", e);
		printf("\n");
	} 
	PressEnter;
	
	printf("3\nFunc ClearQueue_L test...\n");	//3.FuncClearQueue_Ltest
	{
		printf("清空 Q 前：");
		QueueEmpty_L(Q) ? printf(" Q 为空！！\n") : printf(" Q 不为空！\n");
		ClearQueue_L(&Q);
		printf("清空 Q 后：");
		QueueEmpty_L(Q) ? printf(" Q 为空！！\n") : printf(" Q 不为空！\n");
		printf("\n");
	} 
	PressEnter;
	
	printf("2\nFunc DestroyQueue_L test...\n");	//2.FuncDestroyQueue_Ltest
	{
		printf("销毁 Q 前：");
		Q.front!=NULL && Q.rear!=NULL ? printf(" Q 存在！\n") : printf(" Q 不存在！！\n");
		DestroyQueue_L(&Q);
		printf("销毁 Q 后：");
		Q.front!=NULL && Q.rear!=NULL ? printf(" Q 存在！\n") : printf(" Q 不存在！！\n");
		printf("\n");
	} 
	PressEnter;
		
	return 0;
}

void PrintElem(QElemType_L e)
{
	printf("%d ", e);
}
