/*************************************
 *						             *
 * �ļ���: 04_string\05 WordIndexTable *
 * 						             *
 * ��  ��: �������������Functest    *
 *                                   *
 *************************************/

#include <stdlib.h>						//�ṩsystemԭ��  
#include "WordIndexTable.c"				//**04_string**//	

int main(int argc, char **argv)
{
	FILE *fp;
	char line[MaxLineLen];

	char *bookinfo = "BookInfo.txt";	//��Ŀ�ļ���
	char *bookidx  = "BookIdx.txt";		//�ؼ��������ļ���

	Main(bookinfo, bookidx);			//����������

	if (fp = fopen(bookidx, "r")) {	//��ʾ��������Ļ
		printf("---------���������ɹ�!---------\n\n");
	}
	while (!feof(fp)) {
		fgets(line, MaxLineLen, fp);
		printf("%s", line);
	}
	printf("\n\n-------------------------------\n\n");

	Wait(50);
	system("start BookInfo.txt");		//����Ŀ�ļ�
	Wait(50);
	system("start BookIdx.txt");		//���������ɵ�������

	return 0;
}
