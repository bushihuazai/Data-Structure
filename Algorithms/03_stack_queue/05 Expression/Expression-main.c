/***************************************
 *						               *
 * 文件夹: 03_stack_queue\05 Expression *
 * 						               *
 * 内  容: 表达式求值相关Functest      *
 *                                     *
 ***************************************/

#include "Expression.c"			//**03_stack_queue**//					

int main(int argc, char **argv)
{
	char opnd;
	char *exp = "(2+3)*4*6#";

	opnd = EvaluateExpression(exp);

	printf("作为示例，%s 的计算结果为：%d\n", exp, opnd - '0');

	printf("\n");

	return 0;
}
