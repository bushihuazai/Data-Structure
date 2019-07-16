/****************************************
 *                                      *
 * 文件夹: 03_stack_queue\08 CylSeqQueue *
 *                                      *
 * 内  容: 循环队列相关Functest         *
 *                                      *
 ****************************************/

#include <stdio.h>
#include "CylSeqQueue.c"	//**03_stack_queue**//

void PrintElem(QElemType_CSq e);						//testFunc，打印整型

int main(int argc, char **argv)
{
	CSqQueue Q;
	int i;
	QElemType_CSq e;

	printf("1\nFunc InitQueue_CSq test...\n");		//1.FuncInitQueue_CSqtest
	{
		printf("Initial循环顺序队列 Q ...\n");
		InitQueue_CSq(&Q);
		printf("\n");
	}
	PressEnter;

	printf("4\nFunc QueueEmpty_CSq test...\n");		//4.FuncQueueEmpty_CSqtest
	{
		QueueEmpty_CSq(Q) ? printf(" Q  is empty!!\n") : printf(" Q  not empty!\n");
		printf("\n");
	}
	PressEnter;

	printf("7\nFunc EnQueue_CSq test...\n");		//7.FuncEnQueue_CSqtest
	{
		for (i = 1; i <= 6; i++) {
			printf("元素 \"%2d\" 入队Q，", 2 * i);
			EnQueue_CSq(&Q, 2 * i);
			printf("（累计第 %d 个元素）...\n", QueueLength_CSq(Q));
		}
		printf("\n");
	}
	PressEnter;

	printf("9\nFunc QueueTraverse_CSq test...\n");	//9.FuncQueueTraverse_CSqtest
	{
		printf(" Q 中的元素为：Q = ");
		QueueTraverse_CSq(Q, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("8\nFunc DeQueue_CSq test...\n");		//8.FuncDeQueue_CSqtest
	{
		DeQueue_CSq(&Q, &e);
		printf("队头元素 \"%d\" 出队...\n", e);
		printf(" Q 中的元素为：Q = ");
		QueueTraverse_CSq(Q, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("5\nFunc QueueLength_CSq test...\n");	//5.FuncQueueLength_CSqtest
	{
		i = QueueLength_CSq(Q);
		printf(" Q 的长度为 %d \n", i);
		printf("\n");
	}
	PressEnter;

	printf("6\nFunc GetHead_CSq test...\n");		//6.FuncGetHead_CSqtest
	{
		GetHead_CSq(Q, &e);
		printf("队头元素的值为 \"%d\" \n", e);
		printf("\n");
	}
	PressEnter;

	printf("3\nFunc ClearQueue_CSq test...\n");		//3.FuncClearQueue_CSqtest
	{
		printf("清空 Q 前：");
		QueueEmpty_CSq(Q) ? printf(" Q  is empty!!\n") : printf(" Q  not empty!\n");
		ClearQueue_CSq(&Q);
		printf("清空 Q 后：");
		QueueEmpty_CSq(Q) ? printf(" Q  is empty!!\n") : printf(" Q  not empty!\n");
		printf("\n");
	}
	PressEnter;

	printf("2\nFunc DestroyQueue_CSq test...\n");	//2.FuncDestroyQueue_CSqtest
	{
		printf("销毁 Q 前：");
		Q.base != NULL ? printf(" Q exsists!\n") : printf(" Q  not exsist!!\n");
		DestroyQueue_CSq(&Q);
		printf("销毁 Q 后：");
		Q.base != NULL ? printf(" Q exsists!\n") : printf(" Q  not exsist!!\n");
		printf("\n");
	}
	PressEnter;

	return 0;
}

void PrintElem(QElemType_CSq e)
{
	printf("%d ", e);
}
