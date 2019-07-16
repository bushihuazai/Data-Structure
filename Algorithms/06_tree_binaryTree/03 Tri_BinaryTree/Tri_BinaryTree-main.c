/**********************************************
 *										      *
 * 文件夹: 06 树和二叉树\03 Tri_BinaryTree  *
 * 									          *
 * 文件名: Tri_BinaryTree-main.c              *
 * 										      *
 * 内  容: 二叉树（三叉链表存储）相关Functest *
 *                                            *
 *********************************************/

#include <stdio.h>
#include "Tri_BinaryTree.c" 						//**06 树和二叉树**//

void PrintElem(TElemType_Tri e);

int main(int argc, char *argv[])
{
	TBiTree T;
	
	printf("1\nFunc InitBiTree_Tri test...\n");				//1.FuncInitBiTree_Tritest
	{
		printf("Initial一个空二叉树 T ...\n");
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
	
	printf("5、6\nFunc CreateBiTree_Tri等 test...\n");		//5、6.FuncCreate_Tri、CreateBiTree_Tritest
	{
		FILE *fp;
		
		printf("按先序序列创建二叉树 T ...\n");
		printf("作为示范，录入先序序列：ABDG^^^EH^^I^^CF^J^^^\n");
		fp = fopen("TestData_T.txt", "r");
		CreateBiTree_Tri(fp, &T); 
		fclose(fp);
		printf("\n");
	}
	PressEnter;

	printf("24\nFunc Print_Tri test...\n");					//24.FuncPrint_Tritest
	{
		printf("按二叉树的结构打印树：T = \n");
		Print_Tri(T);
		printf("\n");
	}
	PressEnter;
	
	printf("7、8\nFunc BiTreeLength_Tri、BiTreeDepth_Tri test...\n");//7、8.FuncBiTreeLength_Tri、BiTreeDepth_Tritest	
	{
		printf(" T 的长度为：%d，深度为 %d \n", BiTreeLength_Tri(T), BiTreeDepth_Tri(T));
		printf("\n");
	}
	PressEnter;
	
	printf("20\nFunc LevelOrderTraverse_Tri test...\n");	//20.FuncLevelOrderTraverse_Tritest
	{
		printf("层序遍历二叉树 T = ");
		LevelOrderTraverse_Tri(T, PrintElem);
		printf("\n\n");
	}
	PressEnter;
	
	printf("21\nFunc PreOrderTraverse_Tri test...\n");		//21.FuncPreOrderTraverse_Tritest
	{
		printf("前序遍历二叉树 T = ");
		PreOrderTraverse_Tri(T, PrintElem);
		printf("\n\n");
	}
	PressEnter;
	
	printf("22\nFunc InOrderTraverse_Tri test...\n");		//22.FuncInOrderTraverse_Tritest
	{
		printf("中序遍历二叉树 T = ");
		InOrderTraverse_Tri(T, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("23\nFunc PostOrderTraverse_Tri test...\n");		//23.FuncPostOrderTraverse_Tritest
	{
		printf("后序遍历二叉树 T = ");
		PostOrderTraverse_Tri(T, PrintElem);
		printf("\n\n");
	}
	PressEnter;	
	
	printf("9\nFunc Root_Tri test...\n");					//9.FuncRoot_Tritest
	{
		TElemType_Tri e;
		
		Root_Tri(T, &e);
		printf(" T 的根结点为 %c \n", e);
		printf("\n");
	}
	PressEnter;
	
	printf("10\nFunc Value_Tri test...\n");					//10.FuncValue_Tritest
	{
		TBiTree p;
		
		p = T->lchild->rchild->lchild;
		printf("指针 p 指向的结点值为 %c \n", Value_Tri(p));
		printf("\n");
	}
	PressEnter;	
	
	printf("11\nFunc Assign_Tri test...\n");				//11.FuncAssign_Tritest
	{
		TBiTree p;
		
		p = T->lchild->rchild->lchild;
		Assign_Tri(p, 'X');
		printf("将 'X' 赋给 p 指向的结点后，T = \n");
		Print_Tri(T);
		printf("\n");
	}
	PressEnter;	
	
	printf("12、13\nFunc Point、Parent test...\n");			//12、13.FuncPoint、Parent_Tritest
	{
		printf(" 'X' 的双亲为：%c \n", Parent_Tri(T, 'X'));
		printf("\n");
	}
	PressEnter;	
	
	printf("14、15\nFunc LeftChild_Tri、RightChild_Tri test...\n");	//14、15.FuncLeftChild_Tri、RightChild_Tritest
	{
		printf(" 'E' 的左孩子结点值为：%c ，右孩子结点值为：%c \n", LeftChild_Tri(T, 'E'), RightChild_Tri(T, 'E'));
		printf("\n");
	}
	PressEnter;	
	
	printf("16\nFunc LeftSibling_Tri test...\n");			//16.FuncLeftSibling_Tritest
	{
		printf(" 'I' 的左兄弟为：%c \n", LeftSibling_Tri(T, 'I'));
		printf("\n");
	}
	PressEnter;	

	printf("17\nFunc RightSibling_Tri test...\n");			//17.FuncRightSibling_Tritest
	{
		printf(" 'X' 的右兄弟为：%c \n", RightSibling_Tri(T, 'X'));
		printf("\n");
	}
	PressEnter;	
		
	printf("18\nFunc InsertBiTree_Tri test...\n");			//18.FuncInsertBiTree_Tritest 
	{
		FILE *fp;
		TBiTree T0;
		
		printf("创建并打印二叉树 T0 = \n");
		InitBiTree_Tri(&T0);
		fp = fopen("TestData_T0.txt", "r");
		CreateBiTree_Tri(fp, &T0); 
		fclose(fp);
		Print_Tri(T0);
		printf("将 T0 插入到 T 中成为结点‘E’的左子树后，T = \n");
		InsertBiTree_Tri(T, 'E', &T0, 0);
		Print_Tri(T);
		printf("\n");
	}
	PressEnter;

	printf("19\nFunc DeleteBiTree_Tri test...\n");			//19.FuncDeleteBiTree_Tritest
	{
		printf("删除结点 '1' 的右孩子结点后，T = \n");
		DeleteBiTree_Tri(T, '1', 1);
		Print_Tri(T);
		printf("\n");
	}
	PressEnter;	
	
	printf("2\nFunc ClearBiTree_Tri test...\n");			//2.FuncClearBiTree_Tritest
	{
		ClearBiTree_Tri(&T);
		if(BiTreeEmpty_Tri(T))
			printf(" T 已被清空!\n");
		printf("\n");
	}
	PressEnter;
				
	return 0;
}

void PrintElem(TElemType_Tri e)
{
	printf("%c ",e);
}
