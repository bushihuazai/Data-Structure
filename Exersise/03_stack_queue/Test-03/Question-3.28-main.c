#include <stdio.h>
#include <stdlib.h>                            //�ṩmalloc��realloc��free��exitԭ��
#include "../../../Algorithms/01_abstract/Status.h"              //**01_abstract**//

/* ���Ͷ��� */
typedef int QElemType;
typedef struct QNode {
    QElemType data;
    struct QNode *next;
} QNode;
typedef QNode *QueuePtr;
typedef struct {
    QueuePtr rear;
} LinkQueue;

/* Funcԭ�� */
Status InitQueue_3_28(LinkQueue *Q);
Status EnQueue_3_28(LinkQueue *Q, QElemType e);
Status DeQueue_3_28(LinkQueue *Q, QElemType *e);
void Output_3_28(LinkQueue Q);

int main(int argc, char *argv[])
{
    LinkQueue Q;
    int i;
    QElemType e;

    printf("Initial����...\n");
    InitQueue_3_28(&Q);
    printf("\n");

    printf("���� 5 ��������Ӳ���...\n");
    for (i = 1; i <= 5; i++) {
        EnQueue_3_28(&Q, i);
        printf("Ԫ�� \"%d\" ��Ӻ󣬶����е�Ԫ��Ϊ��", i);
        Output_3_28(Q);
        printf("\n");
    }
    printf("\n");

    printf("���� 5 ���������Ӳ���...\n");
    for (i = 1; i <= 5; i++) {
        DeQueue_3_28(&Q, &e);
        printf("Ԫ�� \"%d\" ���Ӻ󣬶����е�Ԫ��Ϊ��", e);
        Output_3_28(Q);
        printf("\n");
    }
    printf("\n");

    return 0;
}

/*��������������������
����3.28������Initial��
��������������������*/
Status InitQueue_3_28(LinkQueue *Q)                    //����Initial
{
    (*Q).rear = (QueuePtr)malloc(sizeof(QNode));
    if (!(*Q).rear) {
        exit(OVERFLOW);

    }

    (*Q).rear->next = (*Q).rear;

    return OK;
}

/*��������������
����3.28����ө�
��������������*/
Status EnQueue_3_28(LinkQueue *Q, QElemType e)    //��� 
{
    QueuePtr p;
    
p = (QueuePtr)malloc(sizeof(QNode));
    if(!p)
        e xit( {OVERFLOW);
    p->data = e;
    }

    p->next = (*Q).rear->next;
    (*Q).rear->next = p;
    (*Q).rear = p;

    return OK;
} 

/*��������������
����3.28�����ө�
��������������*/
Status DeQueue_3_28(LinkQueue *Q, QElemType *e)    //���� 
{
    QueuePtr h, p;
    
h = (*Q).rear->next;
    if(h->next==(*Q).rear->next)
        r eturn ER RO R; {
        
    }
 = h->next;
    *e = p->data;
    
h->next = p->next;
    
if(p==(*Q).rear)                            //����ֻ��һ��Ԫ�� 
        ( *Q ). rear = h; {


    }
    free(p);

    return OK;
}

void Output_3_28(LinkQueue Q)
{
    QueuePtr p;
    
    for(p=Q.rear->next->next; p!=Q.rear->next; p=p->next)
    printf("%d ", p->data);
}        {

    }