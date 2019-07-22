/*************************************
 *                                     *
 * �ļ���: 02_sequence_list\11 Polynomial *
 *                                      *
 * ��  ��: һԪ����ʽ���Functest    *
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
        printf("��Ϊʾ������������Ϊ %d �Ķ���ʽPa...\n", m);
        fp = fopen("TestData_Pa.txt", "r");                //�ļ�ָ�룬ָ������Դ
        CreatPolyn_P(fp, &Pa, m);
        fclose(fp);
        printf("��Ϊʾ������������Ϊ %d �Ķ���ʽPb...\n", n);
        fp = fopen("TestData_Pb.txt", "r");
        CreatPolyn_P(fp, &Pb, n);
        fclose(fp);
        printf("\n");
    }
    PressEnter;

    printf("8\nFunc CreatPolyn test...\n");            //8.FuncCreatPolyntest
    {
        printf("һԪ����ʽ Pa = ");
        PrintPolyn_P(Pa);
        printf("\n");
        printf("һԪ����ʽ Pb = ");
        PrintPolyn_P(Pb);
        printf("\n\n");
    }
    PressEnter;

    printf("3\nFunc PolynLength_P test...\n");        //3.FuncPolynLength_Ptest
    {
        printf(" La ������Ϊ %d ��Lb ������Ϊ %d\n", PolynLength_P(Pa), PolynLength_P(Pb));
        printf("\n");
    }
    PressEnter;

    printf("4��7\nFunc AddPolyn_P ��test...\n");     //4��7.FuncAddPolyn_P��Cmp_exp
    {
        AddPolyn_P(&Pa, &Pb);
        printf("Pa = Pa + Pb = ");
        PrintPolyn_P(Pa);
        printf("\n\n");
    }
    PressEnter;

    printf("2\nFuncDestroyPolyn_Ptest...\n");        //2.FuncDestroyPolyn_Ptest
    {
        printf("���� Pa ǰ��");
        (Pa.head && Pa.tail && Pa.len) ? printf(" Pa exsists!\n") : printf(" Pa  not exsist!!\n");
        DestroyPolyn_P(&Pa);
        printf("���� Pa ��");
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
