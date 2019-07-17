/*********************************
 *                               *
 * 文件夹: 04_string\02 HeapString *
 *                               *
 * 内  容: 堆串相关Functest      *
 *                               *
 *********************************/

#include <stdio.h>
#include "HeapString.c" 								//**04_string**//

int main(int argc, char **argv)
{
	char *chars = "abcdefg";
	char *t = "***";
	char *v = "^^^^";
	HString S, Tmp, T, V, Sub;
	int i;

	printf("1\nFunc InitString_H test...\n");		//1.FuncInitString_Htest
	{
		printf("Initial空串 Tmp ...\n");
		InitString_H(&Tmp);
		printf("\n");
	}
	PressEnter;

	printf("2\nFunc StrAssign_H test...\n");		//2.FuncStrAssign_Htest
	{
		printf("为 Tmp 赋值 %s ...\n", chars);
		StrAssign_H(&Tmp, chars);
		printf("\n");
	}
	PressEnter;

	printf("4\nFunc StrEmpty_H test...\n");			//4.FuncStrEmpty_Htest
	{
		StrEmpty_H(Tmp) ? printf(" Tmp  is empty!!\n") : printf(" Tmp  not empty!\n");
		printf("\n");
	}
	PressEnter;

	printf("6\nFunc StrLength_H test...\n");		//6.FuncStrLength_Htest
	{
		i = StrLength_H(Tmp);
		printf(" Tmp 的长度为 %d \n", i);
		printf("\n");
	}
	PressEnter;

	printf("15\nFunc StrPrint_H test...\n");		//15.FuncStrPrint_Htest
	{
		printf(" Tmp 中的元素为：Tmp = ");
		StrPrint_H(Tmp);
		printf("\n\n");
	}
	PressEnter;

	printf("3\nFunc StrCopy_H test...\n");			//3.FuncStrCopy_Htest
	{
		printf("复制 Tmp 到 S ...\n");
		StrCopy_H(&S, Tmp);
		printf(" S 中的元素为：S = ");
		StrPrint_H(S);
		printf("\n\n");
	}
	PressEnter;

	printf("5\nFunc StrCompare_H test...\n");		//5.FuncStrCompare_Htest
	{
		printf("比较字符串 Tmp 、 S ...\n");
		i = StrCompare_H(Tmp, S);
		i == 0 ? printf("Tmp==S!!\n") : (i < 0 ? printf("Tmp<S!!\n") : printf("Tmp>S!!\n"));
		printf("\n");
	}
	PressEnter;

	printf("12\nFunc StrInsert_H test...\n");		//12.FuncStrInsert_Htest
	{
		printf("将 \"***\" 赋给 T ...\n");
		StrAssign_H(&T, t);
		printf("在 S 的第 5 个字符前插入 T ...\n");
		StrInsert_H(&S, 5, T);
		printf(" S 中的元素为：S = ");
		StrPrint_H(S);
		printf("\n\n");
	}
	PressEnter;

	printf("10\nFunc Index_H test...\n");			//10.FuncIndex_Htest
	{
		printf("获取字符串 \"***\" 在 S 中从第 1 个字符算起的第一次出现的位置...\n");
		i = Index_H(S, T, 1);
		printf(" \"***\" 在 S 中第1个字符后第一次出现的位置为 %d \n", i);
		printf("\n");
	}
	PressEnter;

	printf("9\nFunc SubString_H test...\n");		//9.FuncSubString_Htest
	{
		printf("用 Sub 返回 S 中第 5 个字符起的 3 个字符...\n");
		SubString_H(&Sub, S, 5, 3);
		printf(" Sub 中的元素为：Sub = ");
		StrPrint_H(Sub);
		printf("\n\n");
	}
	PressEnter;

	printf("11\nFunc Replace_H test...\n");			//11.FuncReplace_Htest
	{
		printf("将 \"^^^^\" 赋给 V ...\n");
		StrAssign_H(&V, v);
		printf("用 \"^^^^\" 替换 S 中的 \"***\" ...\n");
		Replace_H(&S, T, V);
		printf(" S 中的元素为：S = ");
		StrPrint_H(S);
		printf("\n\n");
	}
	PressEnter;

	printf("13\nFunc StrDelete_H test...\n");		//13.FuncStrDelete_Htest
	{
		printf("删除 S 中第 5 个字符起的 4 个字符...\n");
		StrDelete_H(&S, 5, 4);
		printf(" S 中的元素为：S = ");
		StrPrint_H(S);
		printf("\n\n");
	}
	PressEnter;

	printf("7\nFunc ClearString_H test...\n");		//7.FuncClearString_Htest
	{
		printf("清空 S 前：");
		StrEmpty_H(S) ? printf(" S  is empty!!\n") : printf(" S  not empty!\n");
		ClearString_H(&S);
		printf("清空 S 后：");
		StrEmpty_H(S) ? printf(" S  is empty!!\n") : printf(" S  not empty!\n");
		printf("\n");
	}
	PressEnter;

	printf("8\nFunc Concat_H test...\n");			//8.FuncConcat_Htest
	{
		printf("联接 T 和 V 形成Tmp...\n");
		Concat_H(&Tmp, T, V);
		printf(" Tmp 中的元素为：Tmp = ");
		StrPrint_H(Tmp);
		printf("\n\n");
	}
	PressEnter;

	return 0;
}
