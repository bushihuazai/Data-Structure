/**************************************
 *                                    *
 * 文件夹: 02_sequence_list\03 MergeSqList *
 *                                    *
 * 内  容: 顺序表归并相关Functest     *
 *                                    *
 **************************************/

#include <stdio.h>
#include "MergeSqList.c"                //**02_sequence_list**//

void PrintElem(LElemType_Sq e);            //testFunc，打印整型

int main(int argc, char **argv)
{
    SqList La, Lb, Lc1, Lc2;
    LElemType_Sq a[4] = {3, 5, 8, 11};
    LElemType_Sq b[7] = {2, 6, 8, 9, 11, 15, 20};
    int i;

    InitList_Sq(&La);                    //InitialLa
    for (i = 1; i <= 4; i++) {
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

    MergeSqList_1(La, Lb, &Lc1);        //合并A与B,算法2.6
    printf("Merge La and Lb into Lc1 = ");         //输出Lc1
    ListTraverse_Sq(Lc1, PrintElem);
    printf("\n\n");

    MergeSqList_2(La, Lb, &Lc2);        //合并A与B,算法2.7
    printf("Merge La and Lb into Lc2 = ");         //输出Lc2
    ListTraverse_Sq(Lc2, PrintElem);
    printf("\n\n");

    return 0;
}

void PrintElem(LElemType_Sq e)
{
    printf("%d ", e);
}
