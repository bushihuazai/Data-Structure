/**********************************
 *                                  *
 * 文件夹: 09_search              *
 *                                   *
 * 文件名: BinarySortTree-main.c  *
 *                                   *
 * 内  容: 二叉排序树相关Functest *
 *                                *
 **********************************/

#include <stdio.h>
#include "BinarySortTree.c"                                 //**09_search**//

#define Max 7                                                //查找表中元素个数

int main(int argc, char *argv[])
{
    Table T;
    BSTree BST;

    printf("创建并输出一个查找表...\n");
    {
        FILE *fp;

        fp = fopen("TestData_Table.txt", "r");
        Create(fp, &T, Max);
        Traverse(T, PrintKey);
        printf("\n");
    }
    PressEnter;

    printf("1、3、4、5\nFunc CreateBSTree等 test...\n");    //1、3、4、5.FuncCreateBSTree等test
    {
        printf("构造二叉排序树，并输出其关键字：");
        CreateBSTree(&BST, T);
        InOrderTraverse_BST(BST, PrintKey);
        printf("\n\n");
    }
    PressEnter;

    printf("2\nFunc SearchBST_1 test...\n");                //2.FuncSearchBST_1test
    {
        printf("关键字 24 ");
        SearchBST_1(BST, 24) == NULL ? printf("不在") : printf("在");
        printf("二叉排序树中!");
        printf("\n\n");
    }
    PressEnter;

    printf("6、7\nFunc DeleteBST等 test...\n");            //6、7.FuncDeleteBST等test
    {
        printf("删除关键字 24 后的关键字序列为：");
        DeleteBST(&BST, 24);
        InOrderTraverse_BST(BST, PrintKey);
        printf("\n\n");
    }
    PressEnter;

    return 0;
}
