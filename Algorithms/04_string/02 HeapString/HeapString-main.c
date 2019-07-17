/*********************************
 *                               *
 * �ļ���: 04_string\02 HeapString *
 *                               *
 * ��  ��: �Ѵ����Functest      *
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
		printf("Initial�մ� Tmp ...\n");
		InitString_H(&Tmp);
		printf("\n");
	}
	PressEnter;

	printf("2\nFunc StrAssign_H test...\n");		//2.FuncStrAssign_Htest
	{
		printf("Ϊ Tmp ��ֵ %s ...\n", chars);
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
		printf(" Tmp �ĳ���Ϊ %d \n", i);
		printf("\n");
	}
	PressEnter;

	printf("15\nFunc StrPrint_H test...\n");		//15.FuncStrPrint_Htest
	{
		printf(" Tmp �е�Ԫ��Ϊ��Tmp = ");
		StrPrint_H(Tmp);
		printf("\n\n");
	}
	PressEnter;

	printf("3\nFunc StrCopy_H test...\n");			//3.FuncStrCopy_Htest
	{
		printf("���� Tmp �� S ...\n");
		StrCopy_H(&S, Tmp);
		printf(" S �е�Ԫ��Ϊ��S = ");
		StrPrint_H(S);
		printf("\n\n");
	}
	PressEnter;

	printf("5\nFunc StrCompare_H test...\n");		//5.FuncStrCompare_Htest
	{
		printf("�Ƚ��ַ��� Tmp �� S ...\n");
		i = StrCompare_H(Tmp, S);
		i == 0 ? printf("Tmp==S!!\n") : (i < 0 ? printf("Tmp<S!!\n") : printf("Tmp>S!!\n"));
		printf("\n");
	}
	PressEnter;

	printf("12\nFunc StrInsert_H test...\n");		//12.FuncStrInsert_Htest
	{
		printf("�� \"***\" ���� T ...\n");
		StrAssign_H(&T, t);
		printf("�� S �ĵ� 5 ���ַ�ǰ���� T ...\n");
		StrInsert_H(&S, 5, T);
		printf(" S �е�Ԫ��Ϊ��S = ");
		StrPrint_H(S);
		printf("\n\n");
	}
	PressEnter;

	printf("10\nFunc Index_H test...\n");			//10.FuncIndex_Htest
	{
		printf("��ȡ�ַ��� \"***\" �� S �дӵ� 1 ���ַ�����ĵ�һ�γ��ֵ�λ��...\n");
		i = Index_H(S, T, 1);
		printf(" \"***\" �� S �е�1���ַ����һ�γ��ֵ�λ��Ϊ %d \n", i);
		printf("\n");
	}
	PressEnter;

	printf("9\nFunc SubString_H test...\n");		//9.FuncSubString_Htest
	{
		printf("�� Sub ���� S �е� 5 ���ַ���� 3 ���ַ�...\n");
		SubString_H(&Sub, S, 5, 3);
		printf(" Sub �е�Ԫ��Ϊ��Sub = ");
		StrPrint_H(Sub);
		printf("\n\n");
	}
	PressEnter;

	printf("11\nFunc Replace_H test...\n");			//11.FuncReplace_Htest
	{
		printf("�� \"^^^^\" ���� V ...\n");
		StrAssign_H(&V, v);
		printf("�� \"^^^^\" �滻 S �е� \"***\" ...\n");
		Replace_H(&S, T, V);
		printf(" S �е�Ԫ��Ϊ��S = ");
		StrPrint_H(S);
		printf("\n\n");
	}
	PressEnter;

	printf("13\nFunc StrDelete_H test...\n");		//13.FuncStrDelete_Htest
	{
		printf("ɾ�� S �е� 5 ���ַ���� 4 ���ַ�...\n");
		StrDelete_H(&S, 5, 4);
		printf(" S �е�Ԫ��Ϊ��S = ");
		StrPrint_H(S);
		printf("\n\n");
	}
	PressEnter;

	printf("7\nFunc ClearString_H test...\n");		//7.FuncClearString_Htest
	{
		printf("��� S ǰ��");
		StrEmpty_H(S) ? printf(" S  is empty!!\n") : printf(" S  not empty!\n");
		ClearString_H(&S);
		printf("��� S ��");
		StrEmpty_H(S) ? printf(" S  is empty!!\n") : printf(" S  not empty!\n");
		printf("\n");
	}
	PressEnter;

	printf("8\nFunc Concat_H test...\n");			//8.FuncConcat_Htest
	{
		printf("���� T �� V �γ�Tmp...\n");
		Concat_H(&Tmp, T, V);
		printf(" Tmp �е�Ԫ��Ϊ��Tmp = ");
		StrPrint_H(Tmp);
		printf("\n\n");
	}
	PressEnter;

	return 0;
}
