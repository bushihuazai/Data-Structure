/***************************************
 *                                     *
 * 文件夹: 04_string\03 BlockChainString *
 *                                     *
 * 内  容: 块链串相关Functest          *
 *                                     *
 ***************************************/

#include <stdio.h>
#include "BlockChainString.c" 							//**04_string**//

int main(int argc, char **argv)
{
	char *chars = "kuai-lian-chuan";
	char *t = "***";
	char *v = "^^^^";
	LString S, Tmp, T, V, Sub;
	int i;

	printf("1\nFunc InitString_L test...\n");		//1.FuncInitString_Ltest
	{
		printf("Initial空串 Tmp ...\n");
		InitString_L(&Tmp);
		printf("\n");
	}
	PressEnter;

	printf("2\nFunc StrAssign_L test...\n");		//2.FuncStrAssign_Ltest
	{
		printf("为 Tmp 赋值 %s ...\n", chars);
		StrAssign_L(&Tmp, chars);
		printf("\n");
	}
	PressEnter;

	printf("4\nFunc StrEmpty_L test...\n");			//4.FuncStrEmpty_Ltest
	{
		StrEmpty_L(Tmp) ? printf(" Tmp  is empty!!\n") : printf(" Tmp  not empty!\n");
		printf("\n");
	}
	PressEnter;

	printf("6\nFunc StrLength_L test...\n");		//6.FuncStrLength_Ltest
	{
		i = StrLength_L(Tmp);
		printf(" Tmp 的长度为 %d \n", i);
		printf("\n");
	}
	PressEnter;

	printf("15\nFunc StrPrint_L test...\n");		//15.FuncStrPrint_Ltest
	{
		printf(" Tmp 中的元素为：Tmp = ");
		StrPrint_L(Tmp);
		printf("\n\n");
	}
	PressEnter;

	printf("3\nFunc StrCopy_L test...\n");			//3.FuncStrCopy_Ltest
	{
		printf("复制 Tmp 到 S ...\n");
		StrCopy_L(&S, Tmp);
		printf(" S 中的元素为：S = ");
		StrPrint_L(S);
		printf("\n\n");
	}
	PressEnter;

	printf("5\nFunc StrCompare_L test...\n");		//5.FuncStrCompare_Ltest
	{
		printf("比较字符串 Tmp 、 S ...\n");
		i = StrCompare_L(Tmp, S);
		i == 0 ? printf("Tmp==S!!\n") : (i < 0 ? printf("Tmp<S!!\n") : printf("Tmp>S!!\n"));
		printf("\n");
	}
	PressEnter;

	printf("12\nFunc StrInsert_L test...\n");		//12.FuncStrInsert_Ltest
	{
		printf("将 \"***\" 赋给 T ...\n");
		StrAssign_L(&T, t);
		printf("在 S 的第 5 个字符前插入 T ...\n");
		StrInsert_L(&S, 5, T);
		printf(" S 中的元素为：S = ");
		StrPrint_L(S);
		printf("\n\n");
	}
	PressEnter;

	printf("10\nFunc Index_L test...\n");			//10.FuncIndex_Ltest
	{
		printf("获取字符串 \"***\" 在 S 中从第 1 个字符算起的第一次出现的位置...\n");
		i = Index_L(S, T, 1);
		printf(" \"***\" 在 S 中第 1 个字符后第一次出现的位置为 %d \n", i);
		printf("\n");
	}
	PressEnter;

	printf("9\nFunc SubString_L test...\n");		//9.FuncSubString_Ltest
	{
		printf("用 Sub 返回S中第 5 个字符起的 3 个字符...\n");
		SubString_L(&Sub, S, 5, 3);
		printf(" Sub 中的元素为：Sub = ");
		StrPrint_L(Sub);
		printf("\n\n");
	}
	PressEnter;

	printf("11\nFunc Replace_L test...\n");			//11.FuncReplace_Ltest
	{
		printf("将 \"^^^^\" 赋给 V ...\n");
		StrAssign_L(&V, v);
		printf("用 \"^^^^\" 替换 S 中的 \"***\" ...\n");
		Replace_L(&S, T, V);
		printf(" S 中的元素为：S = ");
		StrPrint_L(S);
		printf("\n\n");
	}
	PressEnter;

	printf("13\nFunc StrDelete_L test...\n");		//13.FuncStrDelete_Ltest
	{
		printf("删除 S 中第 5 个字符起的 4 个字符...\n");
		StrDelete_L(&S, 5, 4);
		printf(" S 中的元素为：S = ");
		StrPrint_L(S);
		printf("\n\n");
	}
	PressEnter;

	printf("7\nFunc ClearString_L test...\n");		//7.FuncClearString_Ltest
	{
		printf("清空 S 前：");
		StrEmpty_L(S) ? printf(" S  is empty!!\n") : printf(" S  not empty!\n");
		ClearString_L(&S);
		printf("清空 S 后：");
		StrEmpty_L(S) ? printf(" S  is empty!!\n") : printf(" S  not empty!\n");
		printf("\n");
	}
	PressEnter;

	printf("8\nFunc Concat_L test...\n");			//8.FuncConcat_Ltest
	{
		printf("联接 T 和 V 形成 Tmp ...\n");
		Concat_L(&Tmp, T, V);
		printf(" Tmp 中的元素为：Tmp = ");
		StrPrint_L(Tmp);
		printf("\n\n");
	}
	PressEnter;

	return 0;
}
