/******************************
 *                              *
 * 文件夹: 09_search          *
 *                               *
 * 文件名: DLTree-main.c      *
 *                               *
 * 内  容: 双链树相关Functest *
 *                            *
 ******************************/

#include <stdio.h>
#include "DLTree.c"                         //**09_search**//

int main(int argc, char *argv[])
{
    DLTree DLT;

    printf("1、3、4\nFunc CreateDLTree等 test...\n");        //1、3、4.FuncCreateDLTree等test
    {
        FILE *fp;

        printf("创建一棵双链树，并输出其中的关键字：\n");
        fp = fopen("TestData_Table.txt", "r");
        CreateDLTree(fp, &DLT);
        PrintKeys(DLT);
        printf("\n\n");
    }
    PressEnter;

    printf("2\nFunc SearchDLTree test...\n");                //2.FuncSearchDLTreetest
    {
        KeysType K = {"LONG", 4};

        printf("查找：关键字 %s ", K.ch);
        SearchDLTree(DLT, K) ? printf("在") : printf("不在");
        printf("双链树中!\n");
        printf("\n");
    }
    PressEnter;

    return 0;
}
