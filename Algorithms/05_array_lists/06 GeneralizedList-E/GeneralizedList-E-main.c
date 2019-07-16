/**************************************************
 *						                          *
 * �ļ���: 05_array_lists\06 GeneralizedList-E *
 * 						                          *
 * ��  ��: �������չ��������洢�����Functest *
 *                                                *
 *************************************************/

#include <stdio.h>
#include "GeneralizedList-E.c" 				//**05_array_lists**//

void PrintElem(AtomType e);					//��ӡ�����ԭ��

int main(int argc, char **argv)
{
	GList Tmp, G;
	GList g1, g2, g3;
	SString S1, S2, S3;

	printf("1\nFunc InitGList_GL_E test...\n");				//1.FuncInitGList_GL_Etest
	{
		printf("�����յĹ���� Tmp ...\n");
		InitGList_GL_E(&Tmp);
		printf("\n");
	}
	PressEnter;

	printf("8\nFunc GListEmpty_GL_E test...\n");			//8.FuncGListEmpty_GL_Etest
	{
		int tag;

		tag = GListEmpty_GL_E(Tmp);
		tag ? printf(" Tmp  is empty!\n") : printf(" Tmp  not empty!!\n");
		printf("\n");
	}
	PressEnter;

	printf("2��3\nFunc sever_GL_E��CreateGList_GL_E test...\n");	//2��3.Funcsever_GL_E��CreateGList_GL_Etest
	{
		char *s1 = "()";
		char *s2 = "(e)";
		char *s3 = "(a,(b,c,d))";

		printf("���������S1��S2��S3...\n");
		StrAssign_Sq(S1, s1);
		CreateGList_GL_E(&g1, S1);
		StrAssign_Sq(S2, s2);
		CreateGList_GL_E(&g2, S2);
		StrAssign_Sq(S3, s3);
		CreateGList_GL_E(&g3, S3);
		printf("\n");
	}
	PressEnter;

	printf("11\nFunc InsertFirst_GL_E test...\n");			//11.FuncInsertFirst_GL_H_Ttest
	{
		printf("�� S3��S2��S1 ���β��뵽 Tmp ���׸�λ��...\n");
		InsertFirst_GL_E(&Tmp, g3);
		InsertFirst_GL_E(&Tmp, g2);
		InsertFirst_GL_E(&Tmp, g1);
		printf("\n");
	}
	PressEnter;

	printf("13\nFunc Traverse_GL_E test...\n");				//13.FuncTraverse_GL_Etest
	{
		printf("����������ԭ�� Tmp = ");
		Traverse_GL_E(Tmp, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("14\nFunc Output_GL_E test...\n");				//14.FuncOutput_GL_Etest
	{
		printf("�������������� Tmp = ");
		Output_GL_E(Tmp);
		printf("\n\n");
	}
	PressEnter;

	printf("5\nFunc CopyGList_GL_E test...\n");				//5.FuncCopyGList_GL_Etest
	{
		printf("���� Tmp �� G = ");
		CopyGList_GL_E(&G, Tmp);
		Output_GL_E(G);
		printf("\n\n");
	}
	PressEnter;

	printf("12\nFunc DeleteFirst_GL_E test...\n");			//12.FuncDeleteFirst_GL_Etest
	{
		GList h;

		printf("ɾ������� Tmp �ı�ͷ��");
		DeleteFirst_GL_E(&Tmp, &h);
		Output_GL_E(h);
		printf("\n");
		printf(" Tmp = ");
		Output_GL_E(Tmp);
		printf("\n\n");
	}
	PressEnter;

	printf("6\nFunc GListLength_GL_E test...\n");			//6.FuncGListLength_GL_Etest
	{
		printf("����� G �ĳ���Ϊ��%d\n", GListLength_GL_E(G));
		printf("\n");
	}
	PressEnter;

	printf("7-1��7-2\nFunc GListDepth_GL_E_1�� test...\n");	//7-1��7-2.FuncGListDepth_GL_E_1��test
	{
		printf("����� Tmp �����Ϊ��%d\n", GListDepth_GL_E_1(Tmp));
		printf("����� G   �����Ϊ��%d\n", GListDepth_GL_E_2(G));
		printf("\n");
	}
	PressEnter;

	printf("9\nFunc GetHead_GL_E test...\n");				//9.FuncGetHead_GL_Etest
	{
		GList H;

		printf("��ȡ����� G �ı�ͷ H = ");
		H = GetHead_GL_E(G);
		Output_GL_E(H);
		printf("\n\n");
	}
	PressEnter;

	printf("10\nFunc GetTail_GL_E test...\n");				//10.FuncGetTail_GL_Etest
	{
		GList T;

		printf("��ȡ����� G �ı�β T = ");
		T = GetTail_GL_E(G);
		Output_GL_E(T);
		printf("\n\n");
	}
	PressEnter;

	printf("4\nFunc DestroyGList_GL_E test...\n");			//4.FuncDestroyGList_GL_Etest
	{
		printf("���� G ǰ��");
		G ? printf(" G exsists!\n") : printf(" G  not exsist!!\n");
		DestroyGList_GL_E(&G);
		printf("���� G ��");
		G ? printf(" G exsists!\n") : printf(" G  not exsist!!\n");
		printf("\n");
	}
	PressEnter;

	return 0;
}

void PrintElem(AtomType e)
{
	printf("%d ", e);
}
