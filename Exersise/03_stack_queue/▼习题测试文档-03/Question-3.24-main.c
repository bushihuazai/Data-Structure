#include <stdio.h>
#include <stdlib.h>							//�ṩmalloc��realloc��free��exitԭ��
#include "../../../�α��㷨ʵ��/01_abstract/Status.h"  			//**01_abstract**//

/* Funcԭ�� */
int Algo_3_24(int m, int n);

int main(int argc, char *argv[])
{
	int m, n;
	
	m = 5;
	n = 2;
	
	printf("g(%d,%d) = %d\n", m, n, Algo_3_24(m, n));
	printf("\n");

	return 0;
}

/*������������������������
����3.24���ݹ����g(m,n)��
������������������������*/
int Algo_3_24(int m, int n)
{
	if(m<0 || n<0)
		exit(ERROR);
		
	if(m==0)
		return 0;
	else
		return Algo_3_24(m-1, 2*n) + n;
}
