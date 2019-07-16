#include <stdio.h>
#include "../../../Algorithms/01_abstract/Status.h"//**01_abstract**//
#include "../../../Algorithms/01_abstract/Scanf.c"//**01_abstract**//


/* �궨�� */
#define MAXNUM 10000					//��������(�ؼ��־�С�ڴ���) 

/* Funcԭ�� */
void Algo_10_41(int keys[], int maxnum);

int main(int argc, char *argv[])
{
	FILE *fp;
	int keys[1001];
	int tmp, i, j;

	fp = fopen("Data/Algo_10_41.txt", "r");
	keys[0] = 0;
	while (Scanf(fp, "%d", &tmp) == 1) {
		keys[++keys[0]] = tmp;
	}
	fclose(fp);

	Algo_10_41(keys, MAXNUM);

	for (i = 1; i <= 1000; i++) {
		printf("%4d ", keys[i]);

		if (i % 10 == 0) {
			printf("\n");
		}
	}

	return 0;
}

void Algo_10_41(int keys[], int maxnum)
{
	int hash[maxnum];
	int i, j, k;

	for (i = 0; i < maxnum; i++) {		//Initial��������
		hash[i] = 0;
	}

	for (i = 1; i <= keys[0]; i++) {	//ͳ�Ƹ��������ִ���
		hash[keys[i]]++;
	}

	for (i = 0, k = 0; i < maxnum; i++) {	//���������������ݵ���keys
		for (j = 1; j <= hash[i]; j++) {
			keys[++k] = i;
		}
	}
}
