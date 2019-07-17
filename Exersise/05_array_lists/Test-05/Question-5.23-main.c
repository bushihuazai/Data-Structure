#include <stdio.h>
#include "../../../Algorithms/01_abstract/Status.h"  	                     	//**01_abstract**//
#include "../../../Algorithms/05_array_lists/03 RowLinkSparseMatrix/RowLinkSparseMatrix.c"  //**05_array_lists**//

/* Funcԭ�� */
Status Algo_5_23(RLSMatrix M, int i, int j, int *e);

int main(int argc, char *argv[])
{
	RLSMatrix M;
	int e;
	FILE *fp;													//��Ϊ����Դ

	printf("����ϡ����� M...\n");
	fp = fopen("Data/Algo_5_23.txt", "r");
	CreateSMatrix_RL(fp, 1, &M);
	fclose(fp);
	printf("M = \n");
	PrintSMatrix_RL(M);
	printf("\n");

	Algo_5_23(M, 2, 3, &e);
	printf("�� %d �� %d �е�Ԫ��Ϊ %d\n", 2, 3, e);

	printf("\n");

	return 0;
}

/*������������������������������������
����5.23����ȡ�����е�i�е�j�е�Ԫ�ة�
������������������������������������*/
Status Algo_5_23(RLSMatrix M, int i, int j, int *e)
{
	int m, n, k;

	if (i < 0 || i > M.mu || j < 0 || j > M.nu) {
		return ERROR;
	}

	m = M.rpos[i];
	n = (i == M.mu ? M.tu : M.rpos[i + 1] - 1);
	*e = 0;

	for (k = m; k <= n; k++) {
		if (M.data[k].j == j) {			//���±�i not exsist
			*e = M.data[k].e;
		}
	}

	return OK;
}
