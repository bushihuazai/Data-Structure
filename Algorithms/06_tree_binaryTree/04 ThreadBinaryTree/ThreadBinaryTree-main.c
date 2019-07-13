/***********************************************
 *							                   *
 * 文件夹: 06 树和二叉树\04 ThreadBinaryTree *
 *							                   *
 * 文件名: ThreadBinaryTree-main.c             *
 * 								               *
 * 内  容: 线索二叉树相关操作列表              *
 *                                             *
 ***********************************************/

#include <stdio.h>
#include "ThreadBinaryTree.c" 									//**06 树和二叉树**//

void PrintElem(TElemType_Thr e);

int main(int argc, char *argv[])
{
	ThrBiTree Thrt1, Thrt2, Thrt3;
	ThrBiTree T1, T2, T3; 
	int mark;
			
	printf("1\nFunc CreateBiTree_Thr test...\n");				//1.FuncCreateBiTree_Thrtest
	{
		FILE *fp;
		
		printf("按先序序列创建二叉树...\n");
		printf("作为示范，录入先序序列：ABDG^^^EH^^I^^CF^J^^^\n");
		fp = fopen("TestData_T.txt", "r");
		CreateBiTree_Thr(fp, &T1);
		fseek(fp, 0, SEEK_SET);										//退回到文档开头 
		CreateBiTree_Thr(fp, &T2);
		fseek(fp, 0, SEEK_SET);										//退回到文档开头 
		CreateBiTree_Thr(fp, &T3);
		fclose(fp);
		printf("\n");
	} 
	PressEnter; 
	
	printf("★\n★test先序后继线索二叉树...\n★\n");
	{
		printf("5、6\nFunc PreTheading_Thr、PreOrderThreading_Thr test...\n");//5、6.FuncPreTheading_Thr、PreOrderThreading_Thrtest
		printf("将 T1 先序后继线索化为 Thrt1 ...\n");
		PreOrderThreading_Thr(&Thrt1, T1);
		printf("\n");
	}
	PressEnter;
	
	printf("7\nFunc PreOrderTraverse_Thr test...\n");		//4.FuncPreOrderTraverse_Thrtest
	{
		printf("先序遍历 Thrt1 = ");
		PreOrderTraverse_Thr(Thrt1, PrintElem);
		printf("\n\n");
	}
	PressEnter;		
	
	printf("★\n★test中序全线索二叉树...\n★\n");
	printf("2、3\nFunc InTheading_Thr、InOrderThreading_Thr test...\n");	//2、3.FuncInTheading_Thr、InOrderThreading_Thrtest
	{
		printf("将 T2 中序全线索化为 Thrt2 ...\n");
		InOrderThreading_Thr(&Thrt2, T2);
		printf("\n");
	}
	PressEnter;
	
	printf("4\nFunc InOrderTraverse_Thr test...\n");		//4.FuncInOrderTraverse_Thrtest
	{
		printf("中序遍历 Thrt2 = ");
		InOrderTraverse_Thr(Thrt2, PrintElem);
		printf("\n\n");
	}
	PressEnter;
	
	printf("★\n★test后序后继线索二叉树...\n★\n");
	printf("11\nFunc ParentPtr_Thr等 test...\n");								//11.FuncParentPtr_Thrtest
	{
		printf("为各结点寻找双亲结点...\n");
		ParentPtr_Thr(T3);
		printf("\n");
	}
	PressEnter;
				
	printf("8、9\nFunc PosTheading_Thr、PosOrderThreading_Thr test...\n");	//8、9.FuncPosTheading_Thr、PosOrderThreading_Thrtest
	{
		printf("将 T3 后序后继线索化为 Thrt3 ...\n");
		PosOrderThreading_Thr(&Thrt3, T3);
		printf("\n");
	}
	PressEnter;

	printf("10、12\nFunc PosOrderTraverse_Thr等 test...\n");					//10、12.FuncPosOrderTraverse_Thr、Pos_NextPtr_Thrtest
	{
		printf("后序遍历 Thrt3 = ");
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
