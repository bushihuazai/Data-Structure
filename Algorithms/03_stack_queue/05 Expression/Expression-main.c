/***************************************
 *						               *
 * �ļ���: 03_stack_queue\05 Expression *
 * 						               *
 * ��  ��: ���ʽ��ֵ���Functest      *
 *                                     *
 ***************************************/

#include "Expression.c"			//**03_stack_queue**//					

int main(int argc, char **argv)
{
	char opnd;
	char *exp = "(2+3)*4*6#";

	opnd = EvaluateExpression(exp);

	printf("��Ϊʾ����%s �ļ�����Ϊ��%d\n", exp, opnd - '0');

	printf("\n");

	return 0;
}
