/*************************************
 *                                   *
 * 文件夹: 04_string\01 SequenceString *
 *                                   *
 * 内  容: 顺序串相关Functest        *
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
        printf("为顺序串 Tmp 赋值...\n");
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
        printf(" Tmp 的长度为 %d \n", i);
        printf("\n");
    }
    PressEnter;

    printf("14\nFunc StrPrint_Sq test...\n");        //14.FuncStrPrint_Sqtest
    {
        printf(" Tmp 中的元素为：Tmp = ");
        StrPrint_Sq(Tmp);
        printf("\n\n");
    }
    PressEnter;

    printf("2\nFunc StrCopy_Sq test...\n");            //2.FuncStrCopy_Sqtest
    {
        printf("复制 Tmp 到 S ...\n");
        StrCopy_Sq(S, Tmp);
        printf(" S 中的元素为：S = ");
        StrPrint_Sq(S);
        printf("\n\n");
    }
    PressEnter;

    printf("4\nFunc StrCompare_Sq test...\n");        //4.FuncStrCompare_Sqtest
    {
        printf("比较字符串 Tmp 、 S ...\n");
        i = StrCompare_Sq(Tmp, S);
        i == 0 ? printf("Tmp==S!!\n") : (i < 0 ? printf("Tmp<S!!\n") : printf("Tmp>S!!\n"));
        printf("\n");
    }
    PressEnter;

    printf("11\nFunc StrInsert_Sq test...\n");        //11.FuncStrInsert_Sqtest
    {
        printf("将 \"***\" 赋给T...\n");
        StrAssign_Sq(T, t);
        printf("在 S 的第 5 个字符前插入T...\n");
        StrInsert_Sq(S, 5, T);
        printf(" S 中的元素为：S = ");
        StrPrint_Sq(S);
        printf("\n\n");
    }
    PressEnter;

    printf("9\nFunc Index_Sq_1 test...\n");            //9-1.FuncIndex_Sq_1test
    {
        printf("获取字符串 \"***\" 在 S 中从第1个字符算起的第一次出现的位置...\n");
        i = Index_Sq_1(S, T, 1);
        printf(" \"***\" 在 S 中第1个字符后第一次出现的位置为%d\n", i);
        printf("\n");
    }
    PressEnter;

    printf("8\nFunc SubString_Sq test...\n");        //8.FuncSubString_Sqtest
    {
        printf("用 Sub 返回 S 中第 5 个字符起的 3 个字符...\n");
        SubString_Sq(Sub, S, 5, 3);
        printf(" Sub 中的元素为：Sub = ");
        StrPrint_Sq(Sub);
        printf("\n\n");
    }
    PressEnter;

    printf("10\nFunc Replace_Sq、Index_Sq_2 test...\n");//9-2、10.FuncReplace_Sq、Index_Sq_2test
    {
        printf("将 \"^^^^\" 赋给V...\n");
        StrAssign_Sq(V, v);
        printf("用 \"^^^^\" 替换S中的 \"***\" ...\n");
        Replace_Sq(S, T, V);
        printf(" S 中的元素为：S = ");
        StrPrint_Sq(S);
        printf("\n\n");
    }
    PressEnter;

    printf("12\nFunc StrDelete_Sq test...\n");        //12.FuncStrDelete_Sqtest
    {
        printf("删除 S 中第 5 个字符起的 4 个字符...\n");
        StrDelete_Sq(S, 5, 4);
        printf(" S 中的元素为：S = ");
        StrPrint_Sq(S);
        printf("\n\n");
    }
    PressEnter;

    printf("6\nFunc ClearString_Sq test...\n");        //6.FuncClearString_Sqtest
    {
        printf("清空 S 前：");
        StrEmpty_Sq(S) ? printf(" S  is empty!!\n") : printf(" S  not empty!\n");
        ClearString_Sq(S);
        printf("清空 S 后：");
        StrEmpty_Sq(S) ? printf(" S  is empty!!\n") : printf(" S  not empty!\n");
        printf("\n");
    }
    PressEnter;

    printf("7\nFunc Concat_Sq test...\n");            //7.FuncConcat_Sqtest
    {
        printf("连接 T 和 V 形成 Tmp ...\n");
        Concat_Sq(Tmp, T, V);
        printf(" Tmp 中的元素为：Tmp = ");
        StrPrint_Sq(Tmp);
        printf("\n\n");
    }
    PressEnter;

    return 0;
}
