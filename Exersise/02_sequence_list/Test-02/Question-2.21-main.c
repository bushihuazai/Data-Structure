#include <stdio.h>
#include "../../../Algorithms/01_abstract/Status.h"                              //**01_abstract**//
#include "../../../Algorithms/02_sequence_list/01 SequenceList/SequenceList.c"    //**02_sequence_list**//#include <stdio.h>    

/* Func原型 */
Status Algo_2_21(SqList L);

void PrintElem(LElemType_Sq e);
//testFunc，打印整型

int main(int argc, char *argv[])
{
    SqList L;
    int i;

    if (InitList_Sq(&L)) {                //链表L创建成功
        for (i = 1; i <= 10; i++) {        //链表L中元素1~10
            ListInsert_Sq(&L, i, i);
        }
    }

    printf("L = ");
    ListTraverse_Sq(L, PrintElem);             //输出L
    printf("\n\n");

    printf("逆置顺序表...\n");
    Algo_2_21(L);
    printf("此时L = ");
    ListTraverse_Sq(L, PrintElem);             //输出L
    printf("\n\n");

    return 0;
}

/*━━━━━━━━━┓
┃题2.21：顺序表逆置┃
┗━━━━━━━━━*/
Status Algo_2_21(SqList L)
{
    int i;
    int j;
    LElemType_Sq tmp;

    if (L.length == 0) {
        return ERROR;
    }

    for (j = 1, i = (L.length) / 2; j <= i; j++) {
        tmp = L.elem[j - 1];
        L.elem[j - 1] = L.elem[L.length - j];
        L.elem[L.length - j] = tmp;
    }

    return OK;
}

void PrintElem(LElemType_Sq e)
{
    printf("%d ", e);
}
