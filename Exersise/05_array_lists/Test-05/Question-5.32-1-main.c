#include <stdio.h>
#include "../../../Algorithms/01_abstract/Status.h"                               //**01_abstract**//
#include "../../../Algorithms/05_array_lists/05 GeneralizedList-H&T/GeneralizedList-H-T.c" //**05_array_lists**//
#include "../../../Algorithms/04_string/01 SequenceString/SequenceString.c"     //**04_string**//

/* Func原型 */
Status Algo_5_32_1(GList A, GList B);

int main(int argc, char *argv[])
{
    GList A, B;
    char *s = "((),(e),(a,(b,c,d)))";
    SString S;

    printf("创建广义表 A、B ...\n");
    StrAssign_Sq(S, s);
    CreateGList_GL_H_T_1(&A, S);
    CreateGList_GL_H_T_1(&B, S);
    printf("A = ");
    Output_GL_H_T(A, Head);
    printf("\n");
    printf("B = ");
    Output_GL_H_T(B, Head);
    printf("\n\n");

    Algo_5_32_1(A, B) ? printf("两广义表相等!\n") : printf("两广义表不相等!!\n");
    printf("\n");

    return 0;
}

/*━━━━━━━━━━━━━━━━━━━━━━━━┓
┃题5.32-1：判断广义表是否相等（头尾链表存储表示）┃
┗━━━━━━━━━━━━━━━━━━━━━━━━*/
/* 头尾链表存储表示 */
Status Algo_5_32_1(GList A, GList B)
{
    if (!A && !B) {                        //两个空表相等
        return OK;
    }

    if (A && B) {                            //两个表均 not empty
        if (A->tag == B->tag) {                //元素类型相同
            if (A->tag == Atom) {            //原子结点
                if (A->Union.atom == B->Union.atom) {
                    return OK;
                }
            } else {                        //表结点
                if (Algo_5_32_1(A->Union.ptr.hp, B->Union.ptr.hp)) {
                    if (Algo_5_32_1(A->Union.ptr.tp, B->Union.ptr.tp)) {
                        return OK;
                    }
                }
            }
        }
    }

    return ERROR;
}
