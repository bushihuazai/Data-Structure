/****************************
 *                            *
 * 文件夹: 09_search        *
 *                             *
 * 文件名: B+Tree-main.c    *
 *                             *
 * 内  容: B+树相关Functest *
 *                          *
 ****************************/

#include <stdio.h>
#include "B+Tree.c"                         //**09_search**//

/* 宏定义 */
#define Max 15                                //查找表中元素个数

int main(int argc, char *argv[])
{
    Table T;
    B_Tree B_T;

    printf("创建并输出一个查找表...\n");
    {
        FILE *fp;

        fp = fopen("TestData_Table.txt", "r");
        Create(fp, &T, Max);
        Traverse(T, PrintKey);
        printf("\n");
    }
    PressEnter;

    printf("1——8\nFunc CreateB_Tree等 test...\n");        //1——8.FuncCreateB_Tree等test
    {
        printf("构造B+树...\n");
        CreateB_Tree(&B_T, T);
        printf("\n");
    }
    PressEnter;

    printf("9\nFunc PrintB_Tree test...\n");                //9.FuncPrintB_Treetest
    {
        printf("输出B+树的关键字...\n");
        PrintB_Tree(B_T);
        printf("\n");
    }
    PressEnter;

    printf("\n查找test...\n");                                //查找test
    {
        Result r;
        KeyType key = 30;

        printf("查找关键字%d...\n", key);
        r = SearchB_Tree(B_T, key);
        if (r.tag == 1) {
            printf("查找成功，%d 在所属结点的第 %d 个位置。\n", key, Search(r.pt, key));
        } else {
            printf("查找失败!\n");
        }
        printf("\n");
    }
    PressEnter;
}
