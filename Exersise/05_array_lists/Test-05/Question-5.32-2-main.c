#include <stdio.h>
#include "../../../Algorithms/01_abstract/Status.h"  	                     	//**01_abstract**//
#include "../../../Algorithms/05_array_lists/06 GeneralizedList-E/GeneralizedList-E.c" //**05_array_lists**//
#include "../../../Algorithms/04 ��/01 SequenceString/SequenceString.c" 	//**04 ��**//

/* Funcԭ�� */
Status Algo_5_32_2(GList A, GList B);

int main(int argc, char *argv[])
{
	GList A, B;
	char *s = "((),(e),(a,(b,c,d)))";
	SString S;
	
	printf("��������� A��B ...\n");
	StrAssign_Sq(S, s);
	CreateGList_GL_E(&A, S);
	CreateGList_GL_E(&B, S);
	printf("A = ");
	Output_GL_E(A);
	printf("\n");
	printf("B = ");
	Output_GL_E(B);	
	printf("\n\n");	
	
	Algo_5_32_2(A, B) ? printf("����������!\n") : printf("����������!!\n");
	printf("\n");
		
	return 0;
}

/*������������������������������������������������������
����5.32-2���жϹ�����Ƿ���ȣ���չ��������洢��ʾ����
������������������������������������������������������*/
/* ��չ��������洢��ʾ */ 
Status Algo_5_32_2(GList A, GList B)
{
	if(!A && !B)							//�����ձ���� 
		return OK;
	
	if(A && B)								//������� not empty
	{
		if(A->tag==B->tag)					//Ԫ��������ͬ
		{
			if(A->tag==Atom)				//ԭ�ӽ��
			{
				if(A->Union.atom==B->Union.atom)
				{
					if(Algo_5_32_2(A->tp, B->tp))
						return OK;
				}	
			}
			else							//���� 
			{
				if(Algo_5_32_2(A->Union.hp, B->Union.hp))
				{
					if(Algo_5_32_2(A->tp, B->tp))
						return OK;
				}
			}
		} 
	}
	
	return ERROR;
}
