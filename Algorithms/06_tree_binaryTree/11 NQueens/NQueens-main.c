/**************************************
 *							          *
 * 文件夹: 06 树和二叉树\11 NQueens *
 * 							          *
 * 文件名: NQueens-main.c             *
 * 							          *
 * 内  容: N皇后问题相关Func测        *
 *                                    *
 *************************************/

#include <stdio.h>
#include "NQueens.c" 										//**06 树和二叉树**//

int main(int argc, char *argv[])
{
	ChessBoard c[N][N];
	
	printf("1\nFunc InitChessBoard_CB test...\n");		//1.FuncInitChessBoard_CBtest
	{
		printf("Initial一个 %2d * %-2d 的空棋盘...\n", N, N);
		InitChessBoard_CB(c);
		printf("\n");
	}
	PressEnter;	

	printf("4\nFunc Output_CB test...\n");				//4.FuncOutput_CBtest
	{ 
		printf("展示当前棋盘中的皇后布局...\n");
		Output_CB(c);
		printf("\n");
	}
	PressEnter;	

	printf("2、3\nFunc Trial_CB等 test...\n");			//2、3.FuncTrial_CB、Layout_CBtest
	{
		printf("计算N皇后问题的各解...\n");
		Trial_CB(1, c);
		printf("\n");
	}
	PressEnter;
}
