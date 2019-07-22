/******************************
 *                              *
 * 文件夹: 09_search          *
 *                               *
 * 文件名: TrieTree-main.c    *
 *                               *
 * 内  容: Trie树相关Functest *
 *                            *
 ******************************/

#include <stdio.h>
#include "TrieTree.c"         //**09_search**//

/* Func原型 */
void Print(Record *r);        //输出记录r的关键字

int main(int argc, char *argv[])
{
    TrieTree TT;

    printf("1、3、5、6\nFunc CreateTrie等 test...\n");        //1、3、5、6.FuncCreateTrie等test
    {
        FILE *fp;

        printf("创建一棵Trie树...\n");
        fp = fopen("TestData_Table.txt", "r");
        CreateTrie(fp, &TT);
        printf("\n");
    }
    PressEnter;

    printf("7\nFunc TraverseTrie test...\n");                //7.FuncTraverseTrietest
    {
        printf("输出Trie树中的记录...\n");
        TraverseTrie(TT, Print);
        printf("\n\n");
    }
    PressEnter;

    printf("2\nFunc SearchDLTree test...\n");                //2.FuncSearchDLTreetest
    {
        Record *p;
        KeysType K = {"LONG", 4};

        printf("查找关键字 %s ...\n", K.ch);
        p = SearchTrie(TT, K);
        p ? printf("查找成功!\n") : printf("查找失败!!\n");
        printf("\n");
    }
    PressEnter;

    printf("4\nFunc DeleteTrie test...\n");                    //4.FuncDeleteTrietest
    {
        KeysType K1 = {"CAI", 3};
        KeysType K2 = {"CAO", 3};

        printf("依次删除含有关键字 %s、%s 的记录...\n", K1.ch, K2.ch);
        DeleteTrie(&TT, K1);
        TraverseTrie(TT, Print);
        printf("\n");
        DeleteTrie(&TT, K2);
        TraverseTrie(TT, Print);
        printf("\n\n");
    }
    PressEnter;

    return 0;
}

void Print(Record *r)
{
    printf("%s ", r->key);
}
