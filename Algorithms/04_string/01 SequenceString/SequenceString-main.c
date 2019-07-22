/*************************************
 *                                   *
 * �ļ���: 04_string\01 SequenceString *
 *                                   *
 * ��  ��: ˳�����Functest        *
 *                                   *
 *************************************/

#include <stdio.h>
#include "SequenceString.c"                             //**04_string**//

int main(int argc, char **argv)
{
    char *chars = "abcdef g";
    char *t = "** *";
    char *v = "^^^  ^";
    SString S, Tmp, T, V, Sub;
    int i;

    printf("1\nFunc StrAssign_Sq test...\n");        //1.FuncStrAssign_Sqtest
    {
        printf("Ϊ˳�� Tmp ��ֵ...\n");
        StrAssign_Sq(Tmp, chars);
        printf("\n");
    }
    PressEnter;

    printf("3\nFunc StrEmpty_Sq test...\n");        //3.FuncStrEmpty_Sqtest
    {
        StrEmpty_Sq(Tmp) ? printf(" Tmp  is empty!!\n") : printf(" Tmp  not empty!\n");
        printf("\n");
    }
    PressEnter;

    printf("5\nFunc StrLength_Sq test...\n");        //5.FuncStrLength_Sqtest
    {
        i = StrLength_Sq(Tmp);
        printf(" Tmp �ĳ���Ϊ %d \n", i);
        printf("\n");
    }
    PressEnter;

    printf("14\nFunc StrPrint_Sq test...\n");        //14.FuncStrPrint_Sqtest
    {
        printf(" Tmp �е�Ԫ��Ϊ��Tmp = ");
        StrPrint_Sq(Tmp);
        printf("\n\n");
    }
    PressEnter;

    printf("2\nFunc StrCopy_Sq test...\n");            //2.FuncStrCopy_Sqtest
    {
        printf("���� Tmp �� S ...\n");
        StrCopy_Sq(S, Tmp);
        printf(" S �е�Ԫ��Ϊ��S = ");
        StrPrint_Sq(S);
        printf("\n\n");
    }
    PressEnter;

    printf("4\nFunc StrCompare_Sq test...\n");        //4.FuncStrCompare_Sqtest
    {
        printf("�Ƚ��ַ��� Tmp �� S ...\n");
        i = StrCompare_Sq(Tmp, S);
        i == 0 ? printf("Tmp==S!!\n") : (i < 0 ? printf("Tmp<S!!\n") : printf("Tmp>S!!\n"));
        printf("\n");
    }
    PressEnter;

    printf("11\nFunc StrInsert_Sq test...\n");        //11.FuncStrInsert_Sqtest
    {
        printf("�� \"***\" ����T...\n");
        StrAssign_Sq(T, t);
        printf("�� S �ĵ� 5 ���ַ�ǰ����T...\n");
        StrInsert_Sq(S, 5, T);
        printf(" S �е�Ԫ��Ϊ��S = ");
        StrPrint_Sq(S);
        printf("\n\n");
    }
    PressEnter;

    printf("9\nFunc Index_Sq_1 test...\n");            //9-1.FuncIndex_Sq_1test
    {
        printf("��ȡ�ַ��� \"***\" �� S �дӵ�1���ַ�����ĵ�һ�γ��ֵ�λ��...\n");
        i = Index_Sq_1(S, T, 1);
        printf(" \"***\" �� S �е�1���ַ����һ�γ��ֵ�λ��Ϊ%d\n", i);
        printf("\n");
    }
    PressEnter;

    printf("8\nFunc SubString_Sq test...\n");        //8.FuncSubString_Sqtest
    {
        printf("�� Sub ���� S �е� 5 ���ַ���� 3 ���ַ�...\n");
        SubString_Sq(Sub, S, 5, 3);
        printf(" Sub �е�Ԫ��Ϊ��Sub = ");
        StrPrint_Sq(Sub);
        printf("\n\n");
    }
    PressEnter;

    printf("10\nFunc Replace_Sq��Index_Sq_2 test...\n");//9-2��10.FuncReplace_Sq��Index_Sq_2test
    {
        printf("�� \"^^^^\" ����V...\n");
        StrAssign_Sq(V, v);
        printf("�� \"^^^^\" �滻S�е� \"***\" ...\n");
        Replace_Sq(S, T, V);
        printf(" S �е�Ԫ��Ϊ��S = ");
        StrPrint_Sq(S);
        printf("\n\n");
    }
    PressEnter;

    printf("12\nFunc StrDelete_Sq test...\n");        //12.FuncStrDelete_Sqtest
    {
        printf("ɾ�� S �е� 5 ���ַ���� 4 ���ַ�...\n");
        StrDelete_Sq(S, 5, 4);
        printf(" S �е�Ԫ��Ϊ��S = ");
        StrPrint_Sq(S);
        printf("\n\n");
    }
    PressEnter;

    printf("6\nFunc ClearString_Sq test...\n");        //6.FuncClearString_Sqtest
    {
        printf("��� S ǰ��");
        StrEmpty_Sq(S) ? printf(" S  is empty!!\n") : printf(" S  not empty!\n");
        ClearString_Sq(S);
        printf("��� S ��");
        StrEmpty_Sq(S) ? printf(" S  is empty!!\n") : printf(" S  not empty!\n");
        printf("\n");
    }
    PressEnter;

    printf("7\nFunc Concat_Sq test...\n");            //7.FuncConcat_Sqtest
    {
        printf("���� T �� V �γ� Tmp ...\n");
        Concat_Sq(Tmp, T, V);
        printf(" Tmp �е�Ԫ��Ϊ��Tmp = ");
        StrPrint_Sq(Tmp);
        printf("\n\n");
    }
    PressEnter;

    return 0;
}
