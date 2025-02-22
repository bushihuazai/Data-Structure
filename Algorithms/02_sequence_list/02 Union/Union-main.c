/********************************
 *                              *
 * 文件夹: 02_sequence_list\02 Union *
 *                              *
 * 内  容: 求并集相关Functest   *
 *                              *
 ********************************/

#include <stdio.h>
#include "Union.c"                    //**02_sequence_list**//

void PrintElem(LElemType_Sq e);        //testFunc，打印整型

int main(int argc, char **argv)
{
    SqList La, Lb;
    LElemType_Sq a[5] = {5, 2, 1, 3, 9};
    LElemType_Sq b[7] = {7, 2, 6, 9, 11, 3, 10};
    int i;

    InitList_Sq(&La);                    //InitialLa
    for (i = 1; i <= 5; i++) {
        ListInsert_Sq(&La, i, a[i - 1]);
    }
    InitList_Sq(&Lb);                    //InitialLb
    for (i = 1; i <= 7; i++) {
        ListInsert_Sq(&Lb, i, b[i - 1]);
    }

    printf("La = ");                    //输出La
    ListTraverse_Sq(La, PrintElem);
    printf("\n");
    printf("Lb = ");                    //输出Lb
    ListTraverse_Sq(Lb, PrintElem);
    printf("\n\n");

    printf("La = La U Lb = ");            //输出新表La的内容
    Union(&La, Lb);
    ListTraverse_Sq(La, PrintElem);
    printf("\n\n");

    return 0;
}

void PrintElem(LElemType_Sq e)
{
    printf("%d ", e);
}
