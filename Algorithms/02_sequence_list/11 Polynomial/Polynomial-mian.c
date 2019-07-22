/*************************************
 *                                     *
 * 文件夹: 02_sequence_list\11 Polynomial *
 *                                      *
 * 内  容: 一元多项式相关Functest    *
 *                                   *
 *************************************/

#include <stdio.h>
#include "Polynomial.c"                                 //**02_sequence_list**//

int main(int argc, char **argv)
{
    FILE *fp;
    Polynomial Pa, Pb;
    int m, n, i;

    m = 5;
    n = 6;

    printf("1\nFunc CreatPolyn test...\n");            //1.FuncCreatPolyntest
    {
        printf("作为示范，创建项数为 %d 的多项式Pa...\n", m);
        fp = fopen("TestData_Pa.txt", "r");                //文件指针，指向数据源
        CreatPolyn_P(fp, &Pa, m);
        fclose(fp);
        printf("作为示范，创建项数为 %d 的多项式Pb...\n", n);
        fp = fopen("TestData_Pb.txt", "r");
        CreatPolyn_P(fp, &Pb, n);
        fclose(fp);
        printf("\n");
    }
    PressEnter;

    printf("8\nFunc CreatPolyn test...\n");            //8.FuncCreatPolyntest
    {
        printf("一元多项式 Pa = ");
        PrintPolyn_P(Pa);
        printf("\n");
        printf("一元多项式 Pb = ");
        PrintPolyn_P(Pb);
        printf("\n\n");
    }
    PressEnter;

    printf("3\nFunc PolynLength_P test...\n");        //3.FuncPolynLength_Ptest
    {
        printf(" La 的项数为 %d ，Lb 的项数为 %d\n", PolynLength_P(Pa), PolynLength_P(Pb));
        printf("\n");
    }
    PressEnter;

    printf("4、7\nFunc AddPolyn_P 等test...\n");     //4、7.FuncAddPolyn_P、Cmp_exp
    {
        AddPolyn_P(&Pa, &Pb);
        printf("Pa = Pa + Pb = ");
        PrintPolyn_P(Pa);
        printf("\n\n");
    }
    PressEnter;

    printf("2\nFuncDestroyPolyn_Ptest...\n");        //2.FuncDestroyPolyn_Ptest
    {
        printf("销毁 Pa 前：");
        (Pa.head && Pa.tail && Pa.len) ? printf(" Pa exsists!\n") : printf(" Pa  not exsist!!\n");
        DestroyPolyn_P(&Pa);
        printf("销毁 Pa 后：");
        (Pa.head && Pa.tail && Pa.len) ? printf(" Pa exsists!\n") : printf(" Pa  not exsist!!\n");
        printf("\n");
    }
    PressEnter;

    printf("5\nFunc SubtractPolyn_P test...\n");    //5.FuncSubtractPolyn_Ptest
    {
        fp = fopen("TestData_Pa.txt", "r");
        CreatPolyn_P(fp, &Pa, m);
        fclose(fp);
        fp = fopen("TestData_Pb.txt", "r");
        CreatPolyn_P(fp, &Pb, n);
        fclose(fp);
        SubtractPolyn_P(&Pa, &Pb);
        printf(" Pa = Pa - Pb = ");
        PrintPolyn_P(Pa);
        DestroyPolyn_P(&Pa);
        printf("\n\n");
    }
    PressEnter;

    printf("6\nFunc MultiplyPolyn_P test...\n");    //6.FuncMultiplyPolyn_Ptest
    {
        fp = fopen("TestData_Pa.txt", "r");
        CreatPolyn_P(fp, &Pa, m);
        fclose(fp);
        fp = fopen("TestData_Pb.txt", "r");
        CreatPolyn_P(fp, &Pb, n);
        fclose(fp);
        MultiplyPolyn_P(&Pa, &Pb);
        printf(" Pa = Pa * Pb = ");
        PrintPolyn_P(Pa);
        DestroyPolyn_P(&Pa);
        printf("\n\n");
    }
    PressEnter;

    return 0;
}
