/******************************
 *                              *
 * �ļ���: 09_search          *
 *                               *
 * �ļ���: TrieTree-main.c    *
 *                               *
 * ��  ��: Trie�����Functest *
 *                            *
 ******************************/

#include <stdio.h>
#include "TrieTree.c"         //**09_search**//

/* Funcԭ�� */
void Print(Record *r);        //�����¼r�Ĺؼ���

int main(int argc, char *argv[])
{
    TrieTree TT;

    printf("1��3��5��6\nFunc CreateTrie�� test...\n");        //1��3��5��6.FuncCreateTrie��test
    {
        FILE *fp;

        printf("����һ��Trie��...\n");
        fp = fopen("TestData_Table.txt", "r");
        CreateTrie(fp, &TT);
        printf("\n");
    }
    PressEnter;

    printf("7\nFunc TraverseTrie test...\n");                //7.FuncTraverseTrietest
    {
        printf("���Trie���еļ�¼...\n");
        TraverseTrie(TT, Print);
        printf("\n\n");
    }
    PressEnter;

    printf("2\nFunc SearchDLTree test...\n");                //2.FuncSearchDLTreetest
    {
        Record *p;
        KeysType K = {"LONG", 4};

        printf("���ҹؼ��� %s ...\n", K.ch);
        p = SearchTrie(TT, K);
        p ? printf("���ҳɹ�!\n") : printf("����ʧ��!!\n");
        printf("\n");
    }
    PressEnter;

    printf("4\nFunc DeleteTrie test...\n");                    //4.FuncDeleteTrietest
    {
        KeysType K1 = {"CAI", 3};
        KeysType K2 = {"CAO", 3};

        printf("����ɾ�����йؼ��� %s��%s �ļ�¼...\n", K1.ch, K2.ch);
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
