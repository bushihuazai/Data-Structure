#include <stdio.h>
#include "../../../Algorithms/01_abstract/Status.h"  	                     	//**01_abstract**//
#include "../../../Algorithms/05_array_lists/05 GeneralizedList-H&T/GeneralizedList-H-T.c" //**05_array_lists**//
#include "../../../Algorithms/04_string/01 SequenceString/SequenceString.c" 	//**04_string**//

/* Funcԭ�� */
Status Algo_5_32_1(GList A, GList B);

int main(int argc, char *argv[])
{
	GList A, B;
	char *s = "((),(e),(a,(b,c,d)))";
	SString S;

	printf("��������� A��B ...\n");
	StrAssign_Sq(S, s);
	CreateGList_GL_H_T_1(&A, S);
	CreateGList_GL_H_T_1(&B, S);
	printf("A = ");
	Output_GL_H_T(A, Head);
	printf("\n");
	printf("B = ");
	Output_GL_H_T(B, Head);
	printf("\n\n");

	Algo_5_32_1(A, B) ? printf("����������!\n") : printf("����������!!\n");
	printf("\n");

	return 0;
}

/*��������������������������������������������������
����5.32-1���жϹ�����Ƿ���ȣ�ͷβ����洢��ʾ����
��������������������������������������������������*/
/* ͷβ����洢��ʾ */
Status Algo_5_32_1(GList A, GList B)
{
	if (!A && !B) {						//�����ձ����
		return OK;
	}

	if (A && B) {							//������� not empty
		if (A->tag == B->tag) {				//Ԫ��������ͬ
			if (A->tag == Atom) {			//ԭ�ӽ��
				if (A->Union.atom == B->Union.atom) {
					return OK;
				}
			} else {						//����
				if (Algo_5_32_1(A->Union.ptr.hp, B->Union.ptr.hp)) {
					if (Algo_5_32_1(A->Union.ptr.tp, B->Union.ptr.tp)) {
						return OK;
					}
				}
			}
		}
	}

	return ERROR;
}
