#include <stdio.h>
#include "../../../Algorithms/01_abstract/Status.h"                                      //**01_abstract**//
#include "../../../Algorithms/02_sequence_list/04 SinglyLinkedList/SinglyLinkedList.c"    //**02_sequence_list**//

/* Func原型 */
Status Algo_2_22(LinkList L);

void PrintElem(LElemType_L e);
//testFunc，打印整型

int main(int argc, char *argv[])
{
    LinkList L;
    int i;

    if (InitList_L(&L)) {                //链表L创建成功
        for (i = 1; i <= 10; i++) {        //链表L中元素1~10
            ListInsert_L(L, i, i);
        }
    }

    printf("L = ");
    ListTraverse_L(L, PrintElem);         //输出L
    printf("\n\n");

    printf("逆置 SingleLinkedList ...\n");
    Algo_2_22(L);
    printf("此时L = ");
    ListTraverse_L(L, PrintElem);         //输出L
    printf("\n\n");

    return 0;
}

/*━━━━━━━━━┓
┃题2.22： SingleLinkedList 逆置┃
┗━━━━━━━━━*/
Status Algo_2_22(LinkList L)
{
    LinkList pre, p;

    if (!L || !L->next) {            //链表 not exsist或链表 is empty
        return ERROR;

    }

    p = L->next;
    L->next = NULL;

    while(p)                        //头插法 
    {  {pre = p;
        p = p->next;
        pre->next = L->next;
        L->next = pre;
    }

    return OK;
}

void PrintElem(LElemType_L e)
{
    printf("%d ", e);
}
