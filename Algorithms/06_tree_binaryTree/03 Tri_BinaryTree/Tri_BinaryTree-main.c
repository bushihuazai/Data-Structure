/**********************************************
 *										      *
 * �ļ���: 06 ���Ͷ�����\03 Tri_BinaryTree  *
 * 									          *
 * �ļ���: Tri_BinaryTree-main.c              *
 * 										      *
 * ��  ��: ����������������洢�����Functest *
 *                                            *
 *********************************************/

#include <stdio.h>
#include "Tri_BinaryTree.c" 						//**06 ���Ͷ�����**//

void PrintElem(TElemType_Tri e);

int main(int argc, char *argv[])
{
	TBiTree T;
	
	printf("1\nFunc InitBiTree_Tri test...\n");				//1.FuncInitBiTree_Tritest
	{
		printf("Initialһ���ն����� T ...\n");
		InitBiTree_Tri(&T);
		printf("\n");
	}
	PressEnter;
	
	printf("4\nFunc BiTreeEmpty_Tri test...\n");			//4.FuncBiTreeEmpty_Tritest
	{
		BiTreeEmpty_Tri(T) ? printf(" T  is empty!\n") : printf(" T  not empty!\n");
		printf("\n");
	}
	PressEnter;
	
	printf("5��6\nFunc CreateBiTree_Tri�� test...\n");		//5��6.FuncCreate_Tri��CreateBiTree_Tritest
	{
		FILE *fp;
		
		printf("���������д��������� T ...\n");
		printf("��Ϊʾ����¼���������У�ABDG^^^EH^^I^^CF^J^^^\n");
		fp = fopen("TestData_T.txt", "r");
		CreateBiTree_Tri(fp, &T); 
		fclose(fp);
		printf("\n");
	}
	PressEnter;

	printf("24\nFunc Print_Tri test...\n");					//24.FuncPrint_Tritest
	{
		printf("���������Ľṹ��ӡ����T = \n");
		Print_Tri(T);
		printf("\n");
	}
	PressEnter;
	
	printf("7��8\nFunc BiTreeLength_Tri��BiTreeDepth_Tri test...\n");//7��8.FuncBiTreeLength_Tri��BiTreeDepth_Tritest	
	{
		printf(" T �ĳ���Ϊ��%d�����Ϊ %d \n", BiTreeLength_Tri(T), BiTreeDepth_Tri(T));
		printf("\n");
	}
	PressEnter;
	
	printf("20\nFunc LevelOrderTraverse_Tri test...\n");	//20.FuncLevelOrderTraverse_Tritest
	{
		printf("������������� T = ");
		LevelOrderTraverse_Tri(T, PrintElem);
		printf("\n\n");
	}
	PressEnter;
	
	printf("21\nFunc PreOrderTraverse_Tri test...\n");		//21.FuncPreOrderTraverse_Tritest
	{
		printf("ǰ����������� T = ");
		PreOrderTraverse_Tri(T, PrintElem);
		printf("\n\n");
	}
	PressEnter;
	
	printf("22\nFunc InOrderTraverse_Tri test...\n");		//22.FuncInOrderTraverse_Tritest
	{
		printf("������������� T = ");
		InOrderTraverse_Tri(T, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("23\nFunc PostOrderTraverse_Tri test...\n");		//23.FuncPostOrderTraverse_Tritest
	{
		printf("������������� T = ");
		PostOrderTraverse_Tri(T, PrintElem);
		printf("\n\n");
	}
	PressEnter;	
	
	printf("9\nFunc Root_Tri test...\n");					//9.FuncRoot_Tritest
	{
		TElemType_Tri e;
		
		Root_Tri(T, &e);
		printf(" T �ĸ����Ϊ %c \n", e);
		printf("\n");
	}
	PressEnter;
	
	printf("10\nFunc Value_Tri test...\n");					//10.FuncValue_Tritest
	{
		TBiTree p;
		
		p = T->lchild->rchild->lchild;
		printf("ָ�� p ָ��Ľ��ֵΪ %c \n", Value_Tri(p));
		printf("\n");
	}
	PressEnter;	
	
	printf("11\nFunc Assign_Tri test...\n");				//11.FuncAssign_Tritest
	{
		TBiTree p;
		
		p = T->lchild->rchild->lchild;
		Assign_Tri(p, 'X');
		printf("�� 'X' ���� p ָ��Ľ���T = \n");
		Print_Tri(T);
		printf("\n");
	}
	PressEnter;	
	
	printf("12��13\nFunc Point��Parent test...\n");			//12��13.FuncPoint��Parent_Tritest
	{
		printf(" 'X' ��˫��Ϊ��%c \n", Parent_Tri(T, 'X'));
		printf("\n");
	}
	PressEnter;	
	
	printf("14��15\nFunc LeftChild_Tri��RightChild_Tri test...\n");	//14��15.FuncLeftChild_Tri��RightChild_Tritest
	{
		printf(" 'E' �����ӽ��ֵΪ��%c ���Һ��ӽ��ֵΪ��%c \n", LeftChild_Tri(T, 'E'), RightChild_Tri(T, 'E'));
		printf("\n");
	}
	PressEnter;	
	
	printf("16\nFunc LeftSibling_Tri test...\n");			//16.FuncLeftSibling_Tritest
	{
		printf(" 'I' �����ֵ�Ϊ��%c \n", LeftSibling_Tri(T, 'I'));
		printf("\n");
	}
	PressEnter;	

	printf("17\nFunc RightSibling_Tri test...\n");			//17.FuncRightSibling_Tritest
	{
		printf(" 'X' �����ֵ�Ϊ��%c \n", RightSibling_Tri(T, 'X'));
		printf("\n");
	}
	PressEnter;	
		
	printf("18\nFunc InsertBiTree_Tri test...\n");			//18.FuncInsertBiTree_Tritest 
	{
		FILE *fp;
		TBiTree T0;
		
		printf("��������ӡ������ T0 = \n");
		InitBiTree_Tri(&T0);
		fp = fopen("TestData_T0.txt", "r");
		CreateBiTree_Tri(fp, &T0); 
		fclose(fp);
		Print_Tri(T0);
		printf("�� T0 ���뵽 T �г�Ϊ��㡮E������������T = \n");
		InsertBiTree_Tri(T, 'E', &T0, 0);
		Print_Tri(T);
		printf("\n");
	}
	PressEnter;

	printf("19\nFunc DeleteBiTree_Tri test...\n");			//19.FuncDeleteBiTree_Tritest
	{
		printf("ɾ����� '1' ���Һ��ӽ���T = \n");
		DeleteBiTree_Tri(T, '1', 1);
		Print_Tri(T);
		printf("\n");
	}
	PressEnter;	
	
	printf("2\nFunc ClearBiTree_Tri test...\n");			//2.FuncClearBiTree_Tritest
	{
		ClearBiTree_Tri(&T);
		if(BiTreeEmpty_Tri(T))
			printf(" T �ѱ����!\n");
		printf("\n");
	}
	PressEnter;
				
	return 0;
}

void PrintElem(TElemType_Tri e)
{
	printf("%c ",e);
}
