/*************************************
 *						             *
 * �ļ���: 03_stack_queue\03 LineEdit *
 * 						             *
 * ��  ��: �б༭�������Functest    *
 *                                   *
 *************************************/

#include "LineEdit.c"					//**03_stack_queue**//					

int main(int argc, char *argv[])
{
	char *buf = "whli##ilr#e(s#*s)\noutcha@  putchar(*s=#++);"; //��Ҫ¼�������

	printf("��Ϊʾ�����û�������ı�����Ϊ��\n");
	printf("%s\n", buf);
	printf("\n");
	printf("�����б༭����...\n");
	printf("������ţ���#�� ����ɾ����һԪ�أ���@������ɾ����ǰ�����У�\n");
	printf("          ��\\n������ȷ�ϴ������󣬡�\\0���������������\n");
	printf("���մ洢������Ϊ��\n");
	LineEdit(buf);
	printf("\n\n");

	return 0;
}
