/*********************************************************
 *										                 *
 * 文件夹: 06_tree_binaryTree\07 ChildSiblingTree           *
 * 									                     *
 * 文件名: ChildSiblingTree-main.c                       *
 * 										                 *
 * 内  容: 树的二叉链表（孩子-兄弟）存储表示相关Functest *
 *                                                       *
 *********************************************************/

#include <stdio.h>
#include "ChildSiblingTree.c" 											//**06_tree_binaryTree**//

void PrintElem(TElemType_CS e);

int main(int argc, char *argv[])
{
	CSTree T;															//作为输入源

	printf("1\nFunc InitTree_CS test...\n");						//1.FuncInitTree_CStest
	{
		printf("Initial一棵空树 T \n");
		InitTree_CS(&T);
		printf("\n");
	}
	PressEnter;

	printf("4\nFunc TreeEmpty_CS test...\n");						//4.FuncTreeEmpty_CStest
	{
		TreeEmpty_CS(T) ? printf(" T  is empty!\n") : printf(" T  not empty!\n");
		printf("\n");
	}
	PressEnter;

	printf("5\nFunc CreateTree_CS test...\n");						//5.FuncCreateTree_CStest
	{
		FILE *fp;

		printf("按先序序列创建二叉树 T ...\n");
		printf("作为示例，录入先序序列：RAD^E^^B^CFG^H^K^^^^^...\n");
		fp = fopen("TestData_T.txt", "r");								//清除缓存
		CreateTree_CS(fp, &T);
		fclose(fp);
		printf("\n");
	}
	PressEnter;

	printf("21\nFunc Print_CS test...\n");							//21.FuncPrint_CStest
	{
		printf("按树的结构打印树 T = \n");
		Print_CS(T);
		printf("\n");
	}
	PressEnter;

	printf("18\nFunc LevelOrderTraverse_CS test...\n");				//18.FuncLevelOrderTraverse_CStest
	{
		printf("层序遍历树 T = ");
		LevelOrderTraverse_CS(T, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("19\nFunc PreOrderTraverse_CS test...\n");				//19.FuncPreOrderTraverse_CStest
	{
		printf("前序遍历树 T = ");
		PreOrderTraverse_CS(T, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("20\nFunc InOrderTraverse_CS test...\n");				//20.FuncInOrderTraverse_CStest
	{
		printf("中序遍历树 T = ");
		InOrderTraverse_CS(T, PrintElem);
		printf("\n\n");
	}
	PressEnter;

	printf("6\nFunc TreeDegree_CS test...\n");						//6.FuncTreeDegree_CStest
	{
		printf(" T 的度为：%d \n", TreeDegree_CS(T));
		printf("\n");
	}
	PressEnter;

	printf("7\nFunc TreeDepth_CS test...\n");						//7.FuncTreeDepth_CStest
	{
		printf(" T 共有 %d 层\n", TreeDepth_CS(T));
		printf("\n");
	}
	PressEnter;

	printf("8\nFunc Root_CS test...\n");							//8.FuncRoot_CStest
	{
		printf(" T 的根结点为：%c\n", Root_CS(T));
		printf("\n");
	}
	PressEnter;

	printf("9\nFunc Value_CS test...\n");							//9.FuncValue_CStest
	{
		printf(" T 中第 %d 个结点的值为：%c\n", 2, Value_CS(T, 2));
		printf("\n");
	}
	PressEnter;

	printf("10\nFunc Order_CS test...\n");							//10.FuncOrder_CStest
	{
		printf(" T 中元素 %c 的地址为：0x%X \n", 'A', Order_CS(T, 'A'));
		printf("\n");
	}
	PressEnter;

	printf("11\nFunc Assign_CS test...\n");							//11.FuncAssign_CStest
	{
		printf("将结点 'B' 赋值为 'X' 后，T = \n");
		Assign_CS(T, 'B', 'X');
		Print_CS(T);
		printf("\n");
	}
	PressEnter;

	printf("12\nFunc ChildValue_CS test...\n");						//12.FuncChildValue_CStest
	{
		printf("结点 %c 的第 %d 个孩子为：%c \n", 'A', 2, ChildValue_CS(T, 'A', 2));
		printf("\n");
	}
	PressEnter;

	printf("13\nFunc Sibling_CS test...\n");						//13.FuncSibling_CStest
	{
		printf(" %c 的左兄弟为：%c，", 'E', Sibling_CS(T, 'E', 0));
		printf(" %c 的右兄弟为：%c\n", 'D', Sibling_CS(T, 'D', 1));
		printf("\n");
	}
	PressEnter;

	printf("14、15、16\nFunc InsertTree_CS等 test...\n");		//14、15、16FuncChildCount_CS、ChildSeat_CS、InsertTree_CStest
	{
		FILE *fp;
		CSTree T0;

		printf("创建并打印树 T0 ...\n");
		InitTree_CS(&T0);
		printf("作为示例，录入先序序列：01^2^34^5^^^^...\n");
		fp = fopen("TestData_T0.txt", "r");
		CreateTree_CS(fp, &T0);
		fclose(fp);
		Print_CS(T0);
		printf("将 T0嫁接为 %c 的第 %d 棵子树后，T = \n", 'X', 1);
		InsertTree_CS(T, 'X', 1, T0);
		Print_CS(T);
		printf("\n");
	}
	PressEnter;

	printf("17\nFunc DeleteTree_CS test...\n");						//17.FuncDeleteTree_CStest
	{
		printf("删除 T 中结点 %c 的第 %d 棵子树后，T = \n", '0', 3);
		DeleteTree_CS(T, '0', 3);
		Print_CS(T);
		printf("\n");
	}
	PressEnter;

	printf("2\nFunc ClearTree_CS等 test...\n");						//2.FuncClearTree_CStest
	{
		ClearTree_CS(&T);
		TreeEmpty_CS(T) ? printf(" T  is empty!\n") : printf(" T  not empty!\n");
		printf("\n");
	}
	PressEnter;
}

void PrintElem(TElemType_CS e)
{
	printf("%c ", e);
}
