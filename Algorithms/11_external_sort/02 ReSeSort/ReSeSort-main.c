/************************************
 *                                    *
 * 文件夹: 11 外部排序            *
 *                                     *
 * 文件名: ReSeSort-main.c          *
 *                                     *
 * 内  容: 置换选择排序相关Functest *
 *                                  *
 ************************************/

#include <stdio.h>
#include "ReSeSort.c"                                             //**11 外部排序**//

int main(int argc, char *argv[])
{
    FILE *fi;
    LoserTree ls;
    WorkArea wa;

    printf("1、2、3、4\nFunc Replace_Selectiom等 test...\n");//1、2、3、4.FuncReplace_Selectiom等test
    {
        printf("将输入文件通过败者树归并到输出文件[0..k-1].txt中...\n");
        printf("可在当前文件夹下查看生成的文件...\n");
        fi = fopen("TestData.txt", "r");                        //读取输入文件
        Replace_Selectiom(fi, ls, wa);                            //分割fi
        printf("\n");
    }
    PressEnter;

    return 0;
}

