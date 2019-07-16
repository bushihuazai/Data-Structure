/**********************************************
 *							                  *
 * �ļ���: 06_tree_binaryTree\02 BinaryTree      *
 * 							                  *
 * �ļ���: BinaryTree-main.c                  *
 * 										      *
 * ��  ��: ����������������洢�����Functest *
 *                                            *
 **********************************************/

#include <stdio.h>
#include "BinaryTree.c" 										//**06_tree_binaryTree**//

void PrintElem(TElemType e);
Status PrintElement(TElemType e);

int main(int argc, char *argv[])
{
	BiTree T;

	printf("1\nFunc InitBiTree test...\n");					//1.FuncInitBiTreetest
	{
		printf("Initialһ���ն����� T ...\n");
		InitBiTree(&T);
		printf("\n");
	}
	PressEnter;

	printf("4\nFunc BiTreeEmpty test...\n");				//4.FuncBiTreeEmptytest
	{
		BiTreeEmpty(T) ? printf(" T  is empty!\n") : printf(" T  not empty!\n");
		printf("\n");
	}
	PressEnter;

	printf("5\nFunc CreateBiTree_Sq test...\n");			//5.FuncCreateBiTree_Sqtest
	{
		FILE *fp;

		printf("���������д���������...\n");
		printf("��Ϊʾ����¼���������У�ABDG^^^EH^^I^^CF^J^^^\n");
		fp = fopen("TestData_T.txt", "r");
		CreateBiTree(fp, &T);
		fclose(fp);
		printf("\n");
	}
	PressEnter;

	printf("23\nFunc PrintTree test...\n");					//23.FuncPrintTreetest
	{
		printf("���������Ľṹ��ӡ����T = \n");
		PrintTree(T);
		printf("\n");
	}
	PressEnter;

	printf("6��7\nFunc BiTreeLength��BiTreeDepth test...\n");//6��7.FuncBiTreeLength��BiTreeDepthtest
	{
		printf(" T �ĳ���Ϊ��%d�����Ϊ %d \n", BiTreeLength(T), BiTreeDepth(T));
		printf("\n");
	}
	PressEnter;

	printf("19\nFunc LevelOrderTraverse test...\n");		//19.FuncLevelOrderTraversetest
	{
		printf("������������� T = ");
		LevelOrderTraverse(T, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("20-1\nFunc PreOrderTraverse_1 test...\n");		//20-1.FuncPreOrderTraverse_1test
	{
		printf("ǰ����������� T = ");
		PreOrderTraverse_1(T, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("20-2\nFunc PreOrderTraverse_2 test...\n");		//20-2.FuncPreOrderTraverse_2test
	{
		printf("ǰ����������� T = ");
		PreOrderTraverse_2(T, PrintElement);
		printf("\n\n");
	}
	PressEnter;

	printf("21-1\nFunc InOrderTraverse_1 test...\n");		//21-1.FuncInOrderTraverse_1test
	{
		printf("������������� T = ");
		InOrderTraverse_1(T, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("21-2\nFunc InOrderTraverse_2 test...\n");		//21-2.FuncInOrderTraverse_2test
	{
		printf("������������� T = ");
		InOrderTraverse_2(T, PrintElement);
		printf("\n\n");
	}
	PressEnter;

	printf("21-3\nFunc InOrderTraverse_3 test...\n");		//21-3.FuncInOrderTraverse_3test
	{
		printf("������������� T = ");
		InOrderTraverse_3(T, PrintElement);
		printf("\n\n");
	}
	PressEnter;

	printf("22\nFunc PostOrderTraverse test...\n");			//22.FuncPostOrderTraversetest
	{
		printf("������������� T = ");
		PostOrderTraverse(T, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("8\nFunc Root test...\n");						//8.FuncRoottest
	{
		TElemType e;

		Root(T, &e);
		printf(" T �ĸ����Ϊ��%c \n", e);
		printf("\n");
	}
	PressEnter;

	printf("9\nFunc Value test...\n");						//9.FuncValuetest
	{
		BiTree p = T->lchild->rchild->lchild;

		printf("ָ�� p ָ��Ľ��ֵΪ %c \n", Value(p));
		printf("\n");
	}
	PressEnter;

	printf("10\nFunc Assign test...\n");					//10.FuncAssigntest
	{
		BiTree p = T->lchild->rchild->lchild;

		Assign(p, 'X');
		printf("�� 'X' ���� p ָ��Ľ���T = \n");
		PrintTree(T);
		printf("\n");
	}
	PressEnter;

	printf("11\nFunc Parent test...\n");					//11.FuncParenttest
	{
		printf(" 'X' ����˫��Ϊ��%c\n", Parent(T, 'X'));
		printf("\n");
	}
	PressEnter;

	printf("12��13\nFunc LeftChild��RightChild test...\n");	//12��13.FuncLeftChild��RightChildtest
	{
		printf(" 'E' �����ӽ��ֵΪ��%c ���Һ��ӽ��ֵΪ��%c\n", LeftChild(T, 'E'), RightChild(T, 'E'));
		printf("\n");
	}
	PressEnter;

	printf("14\nFunc LeftSibling test...\n");				//14.FuncLeftSiblingtest
	{
		printf(" 'I' �����ֵ�Ϊ��%c \n", LeftSibling(T, 'I'));
		printf("\n");
	}
	PressEnter;

	printf("15\nFunc RightSibling test...\n");				//15.FuncRightSiblingtest
	{
		printf(" 'X' �����ֵ�Ϊ��%c\n", RightSibling(T, 'X'));
		printf("\n");
	}
	PressEnter;

	printf("16-1��17\nFunc InsertBiTree�� test...\n");		//16-1��17.FuncLocationBiTree_1��InsertBiTreetest
	{
		FILE *fp;
		BiTree T0;

		printf("��������ӡ������ T0 = \n");
		InitBiTree(&T0);
		fp = fopen("TestData_T0.txt", "r");
		CreateBiTree(fp, &T0);
		fclose(fp);
		PrintTree(T0);
		printf("�� T0 ���뵽 T �г�Ϊ��㡮E������������T = \n");
		InsertBiTree(T, 'E', T0, 0);
		PrintTree(T);
		printf("\n");
	}
	PressEnter;

	printf("16-2��18\nFunc DeleteBiTree�� test...\n");		//18.FuncLocationBiTree_2��FuncDeleteBiTreetest
	{
		printf("ɾ����� '1' ���Һ��ӽ���T = \n");
		DeleteBiTree(T, '1', 1);
		PrintTree(T);
		printf("\n");
	}
	PressEnter;

	printf("2\nFunc ClearBiTree test...\n");				//2.FuncClearBiTreetest
	{
		ClearBiTree(&T);
		if (BiTreeEmpty(T)) {
			printf(" T �ѱ����!\n");
		}
		printf("\n");
	}
	PressEnter;

	return 0;
}

void PrintElem(TElemType e)
{
	printf("%c ", e);
}

Status PrintElement(TElemType e)
{
	printf("%c ", e);
	return OK;
}
