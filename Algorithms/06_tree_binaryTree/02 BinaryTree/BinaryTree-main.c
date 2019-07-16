/**********************************************
 *							                  *
 * 文件夹: 06_tree_binaryTree\02 BinaryTree      *
 * 							                  *
 * 文件名: BinaryTree-main.c                  *
 * 										      *
 * 内  容: 二叉树（二叉链表存储）相关Functest *
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
		printf("Initial一个空二叉树 T ...\n");
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

		printf("按先序序列创建二叉树...\n");
		printf("作为示范，录入先序序列：ABDG^^^EH^^I^^CF^J^^^\n");
		fp = fopen("TestData_T.txt", "r");
		CreateBiTree(fp, &T);
		fclose(fp);
		printf("\n");
	}
	PressEnter;

	printf("23\nFunc PrintTree test...\n");					//23.FuncPrintTreetest
	{
		printf("按二叉树的结构打印树：T = \n");
		PrintTree(T);
		printf("\n");
	}
	PressEnter;

	printf("6、7\nFunc BiTreeLength、BiTreeDepth test...\n");//6、7.FuncBiTreeLength、BiTreeDepthtest
	{
		printf(" T 的长度为：%d，深度为 %d \n", BiTreeLength(T), BiTreeDepth(T));
		printf("\n");
	}
	PressEnter;

	printf("19\nFunc LevelOrderTraverse test...\n");		//19.FuncLevelOrderTraversetest
	{
		printf("层序遍历二叉树 T = ");
		LevelOrderTraverse(T, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("20-1\nFunc PreOrderTraverse_1 test...\n");		//20-1.FuncPreOrderTraverse_1test
	{
		printf("前序遍历二叉树 T = ");
		PreOrderTraverse_1(T, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("20-2\nFunc PreOrderTraverse_2 test...\n");		//20-2.FuncPreOrderTraverse_2test
	{
		printf("前序遍历二叉树 T = ");
		PreOrderTraverse_2(T, PrintElement);
		printf("\n\n");
	}
	PressEnter;

	printf("21-1\nFunc InOrderTraverse_1 test...\n");		//21-1.FuncInOrderTraverse_1test
	{
		printf("中序遍历二叉树 T = ");
		InOrderTraverse_1(T, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("21-2\nFunc InOrderTraverse_2 test...\n");		//21-2.FuncInOrderTraverse_2test
	{
		printf("中序遍历二叉树 T = ");
		InOrderTraverse_2(T, PrintElement);
		printf("\n\n");
	}
	PressEnter;

	printf("21-3\nFunc InOrderTraverse_3 test...\n");		//21-3.FuncInOrderTraverse_3test
	{
		printf("中序遍历二叉树 T = ");
		InOrderTraverse_3(T, PrintElement);
		printf("\n\n");
	}
	PressEnter;

	printf("22\nFunc PostOrderTraverse test...\n");			//22.FuncPostOrderTraversetest
	{
		printf("后序遍历二叉树 T = ");
		PostOrderTraverse(T, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("8\nFunc Root test...\n");						//8.FuncRoottest
	{
		TElemType e;

		Root(T, &e);
		printf(" T 的根结点为：%c \n", e);
		printf("\n");
	}
	PressEnter;

	printf("9\nFunc Value test...\n");						//9.FuncValuetest
	{
		BiTree p = T->lchild->rchild->lchild;

		printf("指针 p 指向的结点值为 %c \n", Value(p));
		printf("\n");
	}
	PressEnter;

	printf("10\nFunc Assign test...\n");					//10.FuncAssigntest
	{
		BiTree p = T->lchild->rchild->lchild;

		Assign(p, 'X');
		printf("将 'X' 赋给 p 指向的结点后，T = \n");
		PrintTree(T);
		printf("\n");
	}
	PressEnter;

	printf("11\nFunc Parent test...\n");					//11.FuncParenttest
	{
		printf(" 'X' 结点的双亲为：%c\n", Parent(T, 'X'));
		printf("\n");
	}
	PressEnter;

	printf("12、13\nFunc LeftChild、RightChild test...\n");	//12、13.FuncLeftChild、RightChildtest
	{
		printf(" 'E' 的左孩子结点值为：%c ，右孩子结点值为：%c\n", LeftChild(T, 'E'), RightChild(T, 'E'));
		printf("\n");
	}
	PressEnter;

	printf("14\nFunc LeftSibling test...\n");				//14.FuncLeftSiblingtest
	{
		printf(" 'I' 的左兄弟为：%c \n", LeftSibling(T, 'I'));
		printf("\n");
	}
	PressEnter;

	printf("15\nFunc RightSibling test...\n");				//15.FuncRightSiblingtest
	{
		printf(" 'X' 的右兄弟为：%c\n", RightSibling(T, 'X'));
		printf("\n");
	}
	PressEnter;

	printf("16-1、17\nFunc InsertBiTree等 test...\n");		//16-1、17.FuncLocationBiTree_1、InsertBiTreetest
	{
		FILE *fp;
		BiTree T0;

		printf("创建并打印二叉树 T0 = \n");
		InitBiTree(&T0);
		fp = fopen("TestData_T0.txt", "r");
		CreateBiTree(fp, &T0);
		fclose(fp);
		PrintTree(T0);
		printf("将 T0 插入到 T 中成为结点‘E’的左子树后，T = \n");
		InsertBiTree(T, 'E', T0, 0);
		PrintTree(T);
		printf("\n");
	}
	PressEnter;

	printf("16-2、18\nFunc DeleteBiTree等 test...\n");		//18.FuncLocationBiTree_2、FuncDeleteBiTreetest
	{
		printf("删除结点 '1' 的右孩子结点后，T = \n");
		DeleteBiTree(T, '1', 1);
		PrintTree(T);
		printf("\n");
	}
	PressEnter;

	printf("2\nFunc ClearBiTree test...\n");				//2.FuncClearBiTreetest
	{
		ClearBiTree(&T);
		if (BiTreeEmpty(T)) {
			printf(" T 已被清空!\n");
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
