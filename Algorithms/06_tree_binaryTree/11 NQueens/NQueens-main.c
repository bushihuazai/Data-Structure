/**************************************
 *							          *
 * �ļ���: 06 ���Ͷ�����\11 NQueens *
 * 							          *
 * �ļ���: NQueens-main.c             *
 * 							          *
 * ��  ��: N�ʺ��������Func��        *
 *                                    *
 *************************************/

#include <stdio.h>
#include "NQueens.c" 										//**06 ���Ͷ�����**//

int main(int argc, char *argv[])
{
	ChessBoard c[N][N];
	
	printf("1\nFunc InitChessBoard_CB test...\n");		//1.FuncInitChessBoard_CBtest
	{
		printf("Initialһ�� %2d * %-2d �Ŀ�����...\n", N, N);
		InitChessBoard_CB(c);
		printf("\n");
	}
	PressEnter;	

	printf("4\nFunc Output_CB test...\n");				//4.FuncOutput_CBtest
	{ 
		printf("չʾ��ǰ�����еĻʺ󲼾�...\n");
		Output_CB(c);
		printf("\n");
	}
	PressEnter;	

	printf("2��3\nFunc Trial_CB�� test...\n");			//2��3.FuncTrial_CB��Layout_CBtest
	{
		printf("����N�ʺ�����ĸ���...\n");
		Trial_CB(1, c);
		printf("\n");
	}
	PressEnter;
}
