/*****************************************
 *						                 *
 * 文件夹: 06 树和二叉树\05 ParentTree *
 *						                 *
 * 文件名: ParentTree-main.c             *
 * 									     *
 * 内  容: 树的双亲表示法相关Functest    *
 *                                       *
 *****************************************/

#include <stdio.h>
#include "ParentTree.c" 									//**06 树和二叉树**/

void PrintElem(TElemType_P e);

int main(int argc, char *argv[])
{
	PTree T, T0;

	printf("1\nFunc InitTree_P test...\n");				//1.FuncInitTree_Ptest
	{
		InitTree_P(&T); 
		printf("Initial空树 T ，根结点位置默认设为 0 ...\n");
		printf("\n");
	}
	PressEnter;
	
	printf("4\nFunc TreeEmpty_P test...\n");				//4.FuncTreeEmpty_Ptest
	{
		TreeEmpty_P(T) ? printf(" T 为空！\n") : printf(" T 不为空！\n");
		printf("\n");
	}
	PressEnter; 
	
	printf("5\nFunc CreateTree_P test...\n");				//5.FuncCreateTree_Ptest
	{
		FILE *fp;
		
		fp = fopen("TestData_T.txt", "r");
		CreateTree_P(fp, &T);
		fclose(fp);
		printf("\n");
	}
	PressEnter;	

	printf("19\nFunc LevelOrderTraverse_P test...\n");	//19.FuncLevelOrderTraverse_Ptest
	{
		printf("层序遍历树 T = ");
		LevelOrderTraverse_P(T, PrintElem); 
		printf("\n\n");
	}
	PressEnter;

	printf("20\nFunc Print_P test...\n");					//20.FuncPrint_Ptest
	{
		printf("打印树 T = \n");
		Print_P(T); 
		printf("\n");
	}
	PressEnter;

	printf("6\nFunc TreeDegree_P test...\n");				//6.FuncTreeDegree_Ptest
	{
		printf(" T 的度为：%d\n", TreeDegree_P(T)); 
		printf("\n");
	}
	PressEnter;

	printf("7\nFunc TreeDepth_P test...\n");				//7.FuncTreeDepth_Ptest
	{
		printf(" T 共有 %d 层\n", TreeDepth_P(T)); 
		printf("\n");
	}
	PressEnter;

	printf("8\nFunc Root_P test...\n");					//8.FuncRoot_Ptest
	{
		printf(" T 的根结点为：%c \n", Root_P(T)); 
		printf("\n");
	}
	PressEnter;	
	
	printf("9\nFunc Value_P test...\n");					//9.FuncValue_Ptest
	{
		printf(" T 中第 %d 个结点值为：%c \n", 2, Value_P(T, 2)); 
		printf("\n");
	}
	PressEnter;

	printf("10\nFunc Order_P test...\n");					//10.FuncOrder_Ptest
	{
		printf(" T 中元素 %c 的位置为：%d\n", 'A', Order_P(T, 'A')); 
		printf("\n");
	}
	PressEnter;
	
	printf("11\nFunc Assign_P test...\n");				//11.FuncAssign_Ptest
	{
		printf("将结点 'B' 赋值为 'X' 后，T = \n");
		Assign_P(&T, 'B', 'X');
		Print_P(T);
		printf("\n");
	}
	PressEnter;

	printf("12\nFunc ChildValue_P test...\n");			//12.FuncChildValue_Ptest
	{
		printf(" %c 的第 %d 个孩子为：%c \n", 'A', 2, ChildValue_P(T, 'A', 2)); 
		printf("\n");
	}
	PressEnter;

	printf("13\nFunc Sibling_P test...\n");				//13.FuncSibling_Ptest
	{
		printf(" %c 的左兄弟为：%c，%c 的右兄弟为：%c \n", 'E', Sibling_P(T, 'E', 0), 'D', Sibling_P(T, 'D', 1));
		printf("\n");
	}
	PressEnter;	
	
	printf("14、15、16、17\nFunc InsertTree_P 等test...\n");		//14、15、16、17.FuncChildCount_P、ChildSeat_P、InsertChild_P、InsertTree_Ptest
	{
		FILE *fp;
		
		printf("创建并打印树 T0 ...\n");
		InitTree_P(&T0);
		fp = fopen("TestData_T0.txt", "r");
		CreateTree_P(fp, &T0);
		fclose(fp);	
		Print_P(T0);
		printf("将树 T0 插入为树 T 中结点 %c 的第 %d 棵子树后，T = \n", 'X', 1);
		InsertTree_P(&T, 'X', 1, T0);
		Print_P(T);
		printf("\n");
	}
	PressEnter;
	
	printf("18\nFunc DeleteTree_P test...\n");				//18.FuncDeleteTree_Ptest
	{
		printf("删除 T 中结点 %c 的第 %d 棵子树后，T = \n", '0', 3);
		DeleteTree_P(&T, '0', 3);
		Print_P(T);	
		printf("\n");
	}
	PressEnter;	

	printf("2\nFunc ClearTree_P test...\n");					//2.FuncClearTree_Ptest
	{
		ClearTree_P(&T);
		TreeEmpty_P(T) ? printf(" T 为空！\n") : printf(" T 不为空！\n");
		printf("\n");
	} 
	PressEnter;
}

void PrintElem(TElemType_P e)
{
	printf("%c ",e);
}
