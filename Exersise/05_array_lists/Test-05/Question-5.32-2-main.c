#include <stdio.h>
#include "../../../Algorithms/01_abstract/Status.h"                               //**01_abstract**//
#include "../../../Algorithms/05_array_lists/06 GeneralizedList-E/GeneralizedList-E.c" //**05_array_lists**//
#include "../../../Algorithms/04_string/01 SequenceString/SequenceString.c"     //**04_string**//

/* Func原型 */
Status Algo_5_32_2(GList A, GList B);

int main(int argc, char *argv[])
{
    GList A, B;
    char *s = "((),(e),(a,(b,c,d)))";
    SString S;

    printf("创建广义表 A、B ...\n");
    StrAssign_Sq(S, s);
    CreateGList_GL_E(&A, S);
    CreateGList_GL_E(&B, S);
    printf("A = ");
    Output_GL_E(A);
    printf("\n");
    printf("B = ");
    Output_GL_E(B);
    printf("\n\n");

    Algo_5_32_2(A, B) ? printf("两广义表相等!\n") : printf("两广义表不相等!!\n");
    printf("\n");

    return 0;
}

/*━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┃题5.32-2：判断广义表是否相等（扩展线性链表存储表示）┃
┗━━━━━━━━━━━━━━━━━━━━━━━━━━*/
/* 扩展线性链表存储表示 */
Status Algo_5_32_2(GList A, GList B)
{
    if (!A && !B) {                        //两个空表相等
        return OK;
    }

    if (A && B) {                            //两个表均 not empty
        if (A->tag == B->tag) {                //元素类型相同
            if (A->tag == Atom) {            //原子结点
                if (A->Union.atom == B->Union.atom) {
                    if (Algo_5_32_2(A->tp, B->tp)) {
                        return OK;
                    }
                }
            } else {                        //表结点
                if (Algo_5_32_2(A->Union.hp, B->Union.hp)) {
                    if (Algo_5_32_2(A->tp, B->tp)) {
                        return OK;
                    }
                }
            }
        }
    }

    return ERROR;
}
