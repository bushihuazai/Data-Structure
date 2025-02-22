#include <stdio.h>
#include "../../../Algorithms/01_abstract/Status.h"    //**01_abstract**//
#include "../../../Algorithms/06_tree_binaryTree/02 BinaryTree/BinaryTree.c" //**06 数和二叉树**//

/* Func原型 */
void Algo_6_51(BiTree T);
Status IsOperator_6_51(char c);
Status LowPriority_6_51(char a, char b);

int main(int argc, char *argv[])
{
    BiTree T;
    FILE *fp;

    printf("创建二叉树（先序序列）T→ */*+a^^b^^-c^^d^^e^^-g^^h^^...\n");
    InitBiTree(&T);
    fp = fopen("Data/Algo_6_51.txt", "r");
    CreateBiTree(fp, &T);
    fclose(fp);
    printf("\n");

    printf("二叉树T为：\n");
    PrintTree(T);
    printf("\n");

    printf("输出算术表达式：");
    Algo_6_51(T);
    printf("\n\n");

    return 0;
}

/*━━━━━━━━━━━━━━━━━┓
┃题6.51：输出算术表达式构成的二叉树┃
┗━━━━━━━━━━━━━━━━━*/
void Algo_6_51(BiTree T)
{
    if (T) {
        if (T->lchild) {
            if (IsOperator_6_51(T->lchild->data) && LowPriority_6_51(T->lchild->data, T->data)) {
                //当前结点的左孩子是操作符且优先级低于当前结点
                printf("(");
                Algo_6_51(T->lchild);
                printf(")");
            } else {
                Algo_6_51(T->lchild);
            }
        }

        printf("%c", T->data);

        if (T->rchild) {
            if (IsOperator_6_51(T->rchild->data) && LowPriority_6_51(T->rchild->data, T->data)) {
                //当前结点的右孩子是操作符且优先级低于当前结点
                printf("(");
                Algo_6_51(T->rchild);
                printf(")");
            } else {
                Algo_6_51(T->rchild);
            }
        }
    }
}

Status IsOperator_6_51(char c)                //判断字符c是否为操作符
{
    if (c == '+' || c == '-' || c == '*' || c == '/') {
        return TRUE;
    } else {
        return ERROR;
    }
}

Status LowPriority_6_51(char a, char b)        //确定操作符a的优先级是否低于b
{
    if ((a == '+' || a == '-') && (b == '*' || b == '/')) {
        return TRUE;
    } else {                                //a与b同等级时也视为a的优先级较高
        return ERROR;
    }
}
