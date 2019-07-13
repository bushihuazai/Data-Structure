/***********************************************
 *							                   *
 * �ļ���: 06 ���Ͷ�����\04 ThreadBinaryTree *
 *							                   *
 * �ļ���: ThreadBinaryTree-main.c             *
 * 								               *
 * ��  ��: ������������ز����б�              *
 *                                             *
 ***********************************************/

#include <stdio.h>
#include "ThreadBinaryTree.c" 									//**06 ���Ͷ�����**//

void PrintElem(TElemType_Thr e);

int main(int argc, char *argv[])
{
	ThrBiTree Thrt1, Thrt2, Thrt3;
	ThrBiTree T1, T2, T3; 
	int mark;
			
	printf("1\nFunc CreateBiTree_Thr test...\n");				//1.FuncCreateBiTree_Thrtest
	{
		FILE *fp;
		
		printf("���������д���������...\n");
		printf("��Ϊʾ����¼���������У�ABDG^^^EH^^I^^CF^J^^^\n");
		fp = fopen("TestData_T.txt", "r");
		CreateBiTree_Thr(fp, &T1);
		fseek(fp, 0, SEEK_SET);										//�˻ص��ĵ���ͷ 
		CreateBiTree_Thr(fp, &T2);
		fseek(fp, 0, SEEK_SET);										//�˻ص��ĵ���ͷ 
		CreateBiTree_Thr(fp, &T3);
		fclose(fp);
		printf("\n");
	} 
	PressEnter; 
	
	printf("��\n��test����������������...\n��\n");
	{
		printf("5��6\nFunc PreTheading_Thr��PreOrderThreading_Thr test...\n");//5��6.FuncPreTheading_Thr��PreOrderThreading_Thrtest
		printf("�� T1 ������������Ϊ Thrt1 ...\n");
		PreOrderThreading_Thr(&Thrt1, T1);
		printf("\n");
	}
	PressEnter;
	
	printf("7\nFunc PreOrderTraverse_Thr test...\n");		//4.FuncPreOrderTraverse_Thrtest
	{
		printf("������� Thrt1 = ");
		PreOrderTraverse_Thr(Thrt1, PrintElem);
		printf("\n\n");
	}
	PressEnter;		
	
	printf("��\n��test����ȫ����������...\n��\n");
	printf("2��3\nFunc InTheading_Thr��InOrderThreading_Thr test...\n");	//2��3.FuncInTheading_Thr��InOrderThreading_Thrtest
	{
		printf("�� T2 ����ȫ������Ϊ Thrt2 ...\n");
		InOrderThreading_Thr(&Thrt2, T2);
		printf("\n");
	}
	PressEnter;
	
	printf("4\nFunc InOrderTraverse_Thr test...\n");		//4.FuncInOrderTraverse_Thrtest
	{
		printf("������� Thrt2 = ");
		InOrderTraverse_Thr(Thrt2, PrintElem);
		printf("\n\n");
	}
	PressEnter;
	
	printf("��\n��test����������������...\n��\n");
	printf("11\nFunc ParentPtr_Thr�� test...\n");								//11.FuncParentPtr_Thrtest
	{
		printf("Ϊ�����Ѱ��˫�׽��...\n");
		ParentPtr_Thr(T3);
		printf("\n");
	}
	PressEnter;
				
	printf("8��9\nFunc PosTheading_Thr��PosOrderThreading_Thr test...\n");	//8��9.FuncPosTheading_Thr��PosOrderThreading_Thrtest
	{
		printf("�� T3 ������������Ϊ Thrt3 ...\n");
		PosOrderThreading_Thr(&Thrt3, T3);
		printf("\n");
	}
	PressEnter;

	printf("10��12\nFunc PosOrderTraverse_Thr�� test...\n");					//10��12.FuncPosOrderTraverse_Thr��Pos_NextPtr_Thrtest
	{
		printf("������� Thrt3 = ");
		PosOrderTraverse_Thr(Thrt3, PrintElem);
		printf("\n\n");
	}
	PressEnter;
	
	return 0;
}

void PrintElem(TElemType_Thr e)
{
	printf("%c ",e);
}
