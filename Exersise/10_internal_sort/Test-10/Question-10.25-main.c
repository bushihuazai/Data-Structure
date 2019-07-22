#include <stdio.h>
#include "../../../Algorithms/10_internal_sort/04 TInsertSort/TInsertSort.c"//**10_internal_sort**//

/* Func原型 */
void Algo_10_25(SLinkList_sort *L);
void PrintKey(KeyType e);

int main(int argc, char *argv[])
{
    FILE *fp;
    SLinkList_sort L;

    printf("创建并输出一个任意序列...\n");
    fp = fopen("Data/Algo_10_24.txt", "r");
    CreateSortList(fp, &L);
    Traverse(L, PrintKey);
    printf("\n");

    printf("将关键字按递增顺序排列...\n");
    Algo_10_25(&L);
    Traverse(L, PrintKey);
    printf("\n");

    return 0;
}

/*━━━━━━━━━━━┓
┃题10.25：链表插入排序 ┃
┗━━━━━━━━━━━*/
void Algo_10_25(SLinkList_sort *L)
{
    TInsertSort(L);                    //已定义
}

void PrintKey(KeyType e)
{
    printf("%d ", e);
}
