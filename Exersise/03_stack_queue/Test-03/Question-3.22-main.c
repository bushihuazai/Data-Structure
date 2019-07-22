#include <stdio.h>
#include <ctype.h>                                        //�ṩisdigitԭ�� 
#include "../../../Algorithms/01_abstract/Status.h"      //**01_abstract**//
#include "../../../Algorithms/03_stack_queue/01 SequenceStack/SequenceStack.c"  //**03_stack_queue**//

/* Funcԭ�� */
Status Algo_3_22(char c[], SElemType_Sq *Value);
char Operate(char a, char oper, char b);

int main(int argc, char *argv[])
{
    char c[] = "134*+62/-";
    SElemType_Sq value;

    printf("��֪�沨��ʽΪ��");
    printf("%s\n", c);
    Algo_3_22(c, &value);
    printf("�沨��ʽ�ļ�����Ϊ��%d\n", value - 48);
    printf("\n");

    return 0;
}

/*����������������������������
����3.22�����沨�����ʽ��ֵ��
����������������������������*/
/* Ԥ�������Ϊ'+','-','*','/'������Ϊ������ */
Status Algo_3_22(char c[], SElemType_Sq *Value)
{
    int i;
    SqStack S;
    SElemType_Sq a, b;

    InitStack_Sq(&S);
    i = 0;

    while (c[i]) {
        if (isdigit(c[i])) {            //��������
            Push_Sq(&S, c[i]);
        } else {
            Pop_Sq(&S, &b);                //�ȵ��������ڲ��������
            Pop_Sq(&S, &a);
            Push_Sq(&S, Operate(a, c[i], b));
        }

        i++;
    }

    Pop_Sq(&S, Value);

    if (!StackEmpty_Sq(S)) {
        return ERROR;
    } else {
        return OK;
    }
}

/* ����a<oper>b */
char Operate(char a, char oper, char b)
{
    char c;

    switch (oper) {
        case '+':
            c = (a - 48) + (b - 48) + 48;
            break;
        case '-':
            c = (a - 48) - (b - 48) + 48;
            break;
        case '*':
            c = (a - 48) * (b - 48) + 48;
            break;
        case '/':
            c = (a - 48) / (b - 48) + 48;
            break;
    }

    return c;
}
