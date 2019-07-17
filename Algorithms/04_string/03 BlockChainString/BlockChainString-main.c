/***************************************
 *                                     *
 * �ļ���: 04_string\03 BlockChainString *
 *                                     *
 * ��  ��: ���������Functest          *
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
		printf("Initial�մ� Tmp ...\n");
		InitString_L(&Tmp);
		printf("\n");
	}
	PressEnter;

	printf("2\nFunc StrAssign_L test...\n");		//2.FuncStrAssign_Ltest
	{
		printf("Ϊ Tmp ��ֵ %s ...\n", chars);
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
		printf(" Tmp �ĳ���Ϊ %d \n", i);
		printf("\n");
	}
	PressEnter;

	printf("15\nFunc StrPrint_L test...\n");		//15.FuncStrPrint_Ltest
	{
		printf(" Tmp �е�Ԫ��Ϊ��Tmp = ");
		StrPrint_L(Tmp);
		printf("\n\n");
	}
	PressEnter;

	printf("3\nFunc StrCopy_L test...\n");			//3.FuncStrCopy_Ltest
	{
		printf("���� Tmp �� S ...\n");
		StrCopy_L(&S, Tmp);
		printf(" S �е�Ԫ��Ϊ��S = ");
		StrPrint_L(S);
		printf("\n\n");
	}
	PressEnter;

	printf("5\nFunc StrCompare_L test...\n");		//5.FuncStrCompare_Ltest
	{
		printf("�Ƚ��ַ��� Tmp �� S ...\n");
		i = StrCompare_L(Tmp, S);
		i == 0 ? printf("Tmp==S!!\n") : (i < 0 ? printf("Tmp<S!!\n") : printf("Tmp>S!!\n"));
		printf("\n");
	}
	PressEnter;

	printf("12\nFunc StrInsert_L test...\n");		//12.FuncStrInsert_Ltest
	{
		printf("�� \"***\" ���� T ...\n");
		StrAssign_L(&T, t);
		printf("�� S �ĵ� 5 ���ַ�ǰ���� T ...\n");
		StrInsert_L(&S, 5, T);
		printf(" S �е�Ԫ��Ϊ��S = ");
		StrPrint_L(S);
		printf("\n\n");
	}
	PressEnter;

	printf("10\nFunc Index_L test...\n");			//10.FuncIndex_Ltest
	{
		printf("��ȡ�ַ��� \"***\" �� S �дӵ� 1 ���ַ�����ĵ�һ�γ��ֵ�λ��...\n");
		i = Index_L(S, T, 1);
		printf(" \"***\" �� S �е� 1 ���ַ����һ�γ��ֵ�λ��Ϊ %d \n", i);
		printf("\n");
	}
	PressEnter;

	printf("9\nFunc SubString_L test...\n");		//9.FuncSubString_Ltest
	{
		printf("�� Sub ����S�е� 5 ���ַ���� 3 ���ַ�...\n");
		SubString_L(&Sub, S, 5, 3);
		printf(" Sub �е�Ԫ��Ϊ��Sub = ");
		StrPrint_L(Sub);
		printf("\n\n");
	}
	PressEnter;

	printf("11\nFunc Replace_L test...\n");			//11.FuncReplace_Ltest
	{
		printf("�� \"^^^^\" ���� V ...\n");
		StrAssign_L(&V, v);
		printf("�� \"^^^^\" �滻 S �е� \"***\" ...\n");
		Replace_L(&S, T, V);
		printf(" S �е�Ԫ��Ϊ��S = ");
		StrPrint_L(S);
		printf("\n\n");
	}
	PressEnter;

	printf("13\nFunc StrDelete_L test...\n");		//13.FuncStrDelete_Ltest
	{
		printf("ɾ�� S �е� 5 ���ַ���� 4 ���ַ�...\n");
		StrDelete_L(&S, 5, 4);
		printf(" S �е�Ԫ��Ϊ��S = ");
		StrPrint_L(S);
		printf("\n\n");
	}
	PressEnter;

	printf("7\nFunc ClearString_L test...\n");		//7.FuncClearString_Ltest
	{
		printf("��� S ǰ��");
		StrEmpty_L(S) ? printf(" S  is empty!!\n") : printf(" S  not empty!\n");
		ClearString_L(&S);
		printf("��� S ��");
		StrEmpty_L(S) ? printf(" S  is empty!!\n") : printf(" S  not empty!\n");
		printf("\n");
	}
	PressEnter;

	printf("8\nFunc Concat_L test...\n");			//8.FuncConcat_Ltest
	{
		printf("���� T �� V �γ� Tmp ...\n");
		Concat_L(&Tmp, T, V);
		printf(" Tmp �е�Ԫ��Ϊ��Tmp = ");
		StrPrint_L(Tmp);
		printf("\n\n");
	}
	PressEnter;

	return 0;
}
