#include <stdio.h>
#include "../../../Algorithms/01_abstract/Status.h"      //**01_abstract**//
#include "../../../Algorithms/03_stack_queue/01 SequenceStack/SequenceStack.c"  //**03_stack_queue**//
#include "../../../Algorithms/03_stack_queue/07 LinkQueue/LinkQueue.c"  //**03_stack_queue**//

/* Func原型 */
Status Algo_3_31(char c[]);

int main(int argc, char *argv[])
{
    char *a = "abcdedcba@";
    char *b = "ababab@";

    if (Algo_3_31(a)) {
        printf("%s（不包括@）是回文序列!\n", a);
    } else {
        printf("%s（不包括@）不是回文序列!!\n", a);
    }
    printf("\n");

    if (Algo_3_31(b)) {
        printf("%s（不包括@）是回文序列!\n", b);
    } else {
        printf("%s（不包括@）不是回文序列!!\n", b);
    }
    printf("\n");

    return 0;
}

/*━━━━━━━━━━━━━━━━┓
┃题3.31：判断序列c是否为回文序列 ┃
┗━━━━━━━━━━━━━━━━*/
Status Algo_3_31(char c[])
{
    SqStack S;
    LinkQueue Q;
    SElemType_Sq e1;
    QElemType_L e2;
    int i;

    InitStack_Sq(&S);
    InitQueue_L(&Q);

    for (i = 0; c[i] != '@'; i++) {    //将字符读入栈和队列
        Push_Sq(&S, c[i]);
        EnQueue_L(&Q, c[i]);
    }

    while (!StackEmpty_Sq(S) && !QueueEmpty_L(Q)) {
        Pop_Sq(&S, &e1);
        DeQueue_L(&Q, &e2);
        if (e1 != e2) {
            return ERROR;
        }
    }

    if (StackEmpty_Sq(S) && QueueEmpty_L(Q)) {
        return OK;
    }
}
