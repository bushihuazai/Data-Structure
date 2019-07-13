/**************************************
 *                                    *
 * �ļ���: 03 ջ�Ͷ���\07 LinkQueue *
 *                                    *
 * ��  ��: �������Functest           *
 *                                    *
 *************************************/

#include <stdio.h>
#include "LinkQueue.c" 		//**03 ջ�Ͷ���**//
	
void PrintElem(QElemType_L e);						//testFunc����ӡ���� 
	
int main(int argc, char **argv)
{
	LinkQueue Q;
	int i;
	QElemType_L e;
	
	printf("1\nFunc InitQueue_L test...\n");	//1.FuncInitQueue_Ltest
	{
		printf("Initial���� Q ...\n");					 
		InitQueue_L(&Q);
		printf("\n");
	} 
	PressEnter;
	
	printf("4\nFunc QueueEmpty_L test...\n");	//4.FuncQueueEmpty_Ltest
	{
		QueueEmpty_L(Q) ? printf(" Q Ϊ�գ���\n") : printf(" Q ��Ϊ�գ�\n");
		printf("\n");
	} 
	PressEnter;
	
	printf("7\nFunc EnQueue_L test...\n");		//7.FuncEnQueue_Ltest
	{
		for(i=1; i<=6; i++)									
		{
			printf("Ԫ�� \"%2d\" ��ӣ�", 2*i);
			EnQueue_L(&Q, 2*i);
			printf("���ۼƵ� %d ��Ԫ�أ�...\n", QueueLength_L(Q));
		}
		printf("\n");
	} 
	PressEnter;
	
	printf("9\nFunc QueueTraverse_L test...\n");//9.FuncQueueTraverse_Ltest
	{
		printf(" Q �е�Ԫ��Ϊ��Q = ");						 
		QueueTraverse_L(Q, PrintElem);
		printf("\n\n");
	} 
	PressEnter;
	
	printf("8\nFunc DeQueue_L test...\n");		//8.FuncDeQueue_Ltest
	{
		DeQueue_L(&Q, &e);
		printf("��ͷԪ�� \"%d\" ����...\n", e);
		printf(" Q �е�Ԫ��Ϊ��Q = ");						 
		QueueTraverse_L(Q, PrintElem);
		printf("\n\n");
	} 
	PressEnter;
	
	printf("5\nFunc QueueLength_L test...\n");	//5.FuncQueueLength_Ltest
	{
		i = QueueLength_L(Q);
		printf(" Q �ĳ���Ϊ %d \n", i);
		printf("\n");
	} 
	PressEnter;
	
	printf("6\nFunc GetHead_L test...\n");		//6.FuncGetHead_Ltest
	{
		GetHead_L(Q, &e);
		printf("��ͷԪ�ص�ֵΪ \"%d\" \n", e);
		printf("\n");
	} 
	PressEnter;
	
	printf("3\nFunc ClearQueue_L test...\n");	//3.FuncClearQueue_Ltest
	{
		printf("��� Q ǰ��");
		QueueEmpty_L(Q) ? printf(" Q Ϊ�գ���\n") : printf(" Q ��Ϊ�գ�\n");
		ClearQueue_L(&Q);
		printf("��� Q ��");
		QueueEmpty_L(Q) ? printf(" Q Ϊ�գ���\n") : printf(" Q ��Ϊ�գ�\n");
		printf("\n");
	} 
	PressEnter;
	
	printf("2\nFunc DestroyQueue_L test...\n");	//2.FuncDestroyQueue_Ltest
	{
		printf("���� Q ǰ��");
		Q.front!=NULL && Q.rear!=NULL ? printf(" Q ���ڣ�\n") : printf(" Q �����ڣ���\n");
		DestroyQueue_L(&Q);
		printf("���� Q ��");
		Q.front!=NULL && Q.rear!=NULL ? printf(" Q ���ڣ�\n") : printf(" Q �����ڣ���\n");
		printf("\n");
	} 
	PressEnter;
		
	return 0;
}

void PrintElem(QElemType_L e)
{
	printf("%d ", e);
}
