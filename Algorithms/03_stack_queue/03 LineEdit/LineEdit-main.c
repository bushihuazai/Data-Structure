/*************************************
 *						             *
 * 文件夹: 03_stack_queue\03 LineEdit *
 * 						             *
 * 内  容: 行编辑程序相关Functest    *
 *                                   *
 *************************************/

#include "LineEdit.c"					//**03_stack_queue**//					

int main(int argc, char *argv[])
{
	char *buf = "whli##ilr#e(s#*s)\noutcha@  putchar(*s=#++);"; //需要录入的内容

	printf("作为示范，用户输入的文本内容为：\n");
	printf("%s\n", buf);
	printf("\n");
	printf("进入行编辑程序...\n");
	printf("特殊符号：“#” 代表删除上一元素，“@”代表删除当前输入行，\n");
	printf("          “\\n”代表确认此行无误，“\\0”代表输入结束。\n");
	printf("最终存储的内容为：\n");
	LineEdit(buf);
	printf("\n\n");

	return 0;
}
