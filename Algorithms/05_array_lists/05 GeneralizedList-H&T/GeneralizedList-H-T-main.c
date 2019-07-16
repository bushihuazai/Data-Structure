/****************************************************
 *						                            *
 * �ļ���: 05 ����͹����\05 GeneralizedList-H&T *
 * 						                            *
 * ��  ��: �����ͷβ����洢�����Functest       *
 *                                                  *
 ****************************************************/

#include <stdio.h> 
#include "GeneralizedList-H-T.c"		//**05 ����͹����**//

void PrintElem(AtomType e);				//��ӡ�����ԭ�� 

int main(int argc, char **argv)
{
	GList Tmp, G;
	GList g1, g2, g3;
	SString S1, S2, S3;
	 
	printf("1\nFunc InitGList_GL_H_T test...\n");			//1.FuncInitGList_GL_H_Ttest
	{
		printf("�����յĹ���� Tmp ...\n");
		InitGList_GL_H_T(&Tmp);
		printf("\n");
	} 
	PressEnter;
	
	printf("8\nFunc GListEmpty_GL_H_T test...\n");			//8.FuncGListEmpty_GL_H_Ttest
	{
		int tag;
		
		tag = GListEmpty_GL_H_T(Tmp);
		tag ? printf(" Tmp  is empty!\n") : printf(" Tmp  not empty!!\n");
		printf("\n");
	} 
	PressEnter;
	
	printf("2-1��3-1��2-2��3-2\nFunc sever_GL_H_T_1��CreateGList_GL_H_T_1�� test...\n");
	{															//2-1��3-1��2-2��3-2.Funcsever_GL_H_T_1��CreateGList_GL_H_T_1��test
		char *s1 = "()";
		char *s2 = "(e)";
		char *s3 = "(a,(b,c,d))";
		
		printf("���������S1��S2��S3...\n");
		StrAssign_Sq(S1, s1);
		CreateGList_GL_H_T_1(&g1, S1);
		StrAssign_Sq(S2, s2);
		CreateGList_GL_H_T_1(&g2, S2);
		StrAssign_Sq(S3, s3);
		CreateGList_GL_H_T_2(&g3, S3);
		printf("\n");
	}
	PressEnter;
		
	printf("11\nFunc InsertFirst_GL_H_T test...\n");		//11.FuncInsertFirst_GL_H_Ttest		
	{
		printf("�� S3��S2��S1 ���β��뵽 Tmp ���׸�λ��...\n");
		InsertFirst_GL_H_T(&Tmp, g3); 
		InsertFirst_GL_H_T(&Tmp, g2);
		InsertFirst_GL_H_T(&Tmp, g1);
		printf("\n");
	}
	PressEnter;
	
	printf("13\nFunc Traverse_GL_H_T test...\n");			//13.FuncTraverse_GL_H_Ttest
	{
		printf("����������ԭ�� Tmp = ");
		Traverse_GL_H_T(Tmp, PrintElem);
		printf("\n\n");
	}
	PressEnter;
	
	printf("14\nFunc Output_GL_H_T test...\n");				//14.FuncOutput_GL_H_Ttest
	{
		printf("�������������� Tmp = ");
		Output_GL_H_T(Tmp, Head);
		printf("\n\n");
	} 
	PressEnter;

	printf("5\nFunc CopyGList_GL_H_T test...\n");			//5.FuncCopyGList_GL_H_Ttest
	{
		printf("���� Tmp �� G = ");
		CopyGList_GL_H_T(&G, Tmp);
		Output_GL_H_T(G, Head);
		printf("\n\n");
	}
	PressEnter;
	
	printf("12\nFunc DeleteFirst_GL_H_T test...\n");		//12.FuncDeleteFirst_GL_H_Ttest
	{
		GList h;
		
		printf("ɾ������� Tmp �ı�ͷ��");
		DeleteFirst_GL_H_T(&Tmp, &h);
		Output_GL_H_T(h, Head);
		printf("\n");
		printf(" Tmp = ");
		Output_GL_H_T(Tmp, Head);
		printf("\n\n");
	} 
	PressEnter;
	
	printf("6\nFunc GListLength_GL_H_T test...\n");			//6.FuncGListLength_GL_H_Ttest
	{
		printf("����� G �ĳ���Ϊ�� %d \n", GListLength_GL_H_T(G));
		printf("\n");
	} 
	PressEnter;
	
	printf("7\nFunc GListDepth_GL_H_T test...\n");			//7.FuncGListDepth_GL_H_Ttest
	{
		printf("����� G �����Ϊ�� %d\n", GListDepth_GL_H_T(G));
		printf("\n");
	} 
	PressEnter;
	
	printf("9\nFunc GetHead_GL_H_T test...\n");				//9.FuncGetHead_GL_H_Ttest
	{
		GList H;
		
		printf("����� G �ı�ͷ H = ");
		H = GetHead_GL_H_T(G);
		Output_GL_H_T(H, Head);
		printf("\n\n");
	} 
	PressEnter;
	
	printf("10\nFunc GetTail_GL_H_T test...\n");			//10.FuncGetTail_GL_H_Ttest
	{
		GList T;
		
		printf("����� G �ı�β T = ");
		T = GetTail_GL_H_T(G);
		Output_GL_H_T(T, Head);
		printf("\n\n");
	}
	PressEnter;
		
	printf("4\nFunc ClearGList_GL_H_T test...\n");			//4.FuncClearGList_GL_H_Ttest
	{
		printf("���� G ǰ��");
		G ? printf(" G ����!\n") : printf(" G ������!!\n");
		ClearGList_GL_H_T(&G);
		printf("���� G ��");
		G ? printf(" G ����!\n") : printf(" G ������!!\n");
		printf("\n");
	}
	PressEnter;

	return 0;
}

void PrintElem(AtomType e)
{
	printf("%d ", e);
}
