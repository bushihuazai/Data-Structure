/********************************
 *						        *
 * 文件夹: 08 动态存储管理    *
 * 						        *
 * 文件名: BuddySystem-main.c   *
 * 							    *
 * 内  容: 伙伴系统相关Functest *
 *                              *
 ********************************/

#include <stdio.h>
#include "BuddySystem.c" 									//**08 动态存储管理**//

int main(int argc, char *argv[])
{	
	FreeList avail;
	WORD_b *p1, *p2, *p3, *p4;

	printf("1、5\nFunc InitSpace_b等 test...\n");			//1、5.FuncInitSpace_b、PrintLayout_btest
	{
		printf("Initial一个内存块 ：");	
		InitSpace_b(avail);
		PrintLayout_b(avail);
		printf("\n");
	} 
	PressEnter;

	printf("2\nFunc AllocBuddy test...\n");				//2.FuncAllocBuddytest	
	{
		printf("申请大小为 1 的内存块 p1 后...\n");	
		p1 = AllocBuddy(avail, 1);
		PrintLayout_b(avail);
		printf("\n");
	}
	PressEnter;
	
	printf("申请大小为 2 的内存块 p2 后...\n");
	{
		p2 = AllocBuddy(avail, 2);
		PrintLayout_b(avail);
		printf("\n");
	}
	PressEnter;
	
	printf("申请大小为 3 的内存块 p3 后...\n");
	{
		p3 = AllocBuddy(avail, 3);
		PrintLayout_b(avail);
		printf("\n");
	} 
	PressEnter;
	
	printf("申请大小为 1 的内存块 p4 后...\n");
	{
		p4 = AllocBuddy(avail, 1);
		PrintLayout_b(avail);
		printf("\n");
	} 
	PressEnter;

	printf("3、4\nFunc Reclaim_b等 test...\n");			//3、4.FuncBuddy、Reclaim_btest	
	{
		printf("回收内存块 p1 后...\n");	
		Reclaim_b(avail, &p1);
		PrintLayout_b(avail);
		printf("\n");
	} 
	PressEnter;
	
	printf("回收内存块 p2 后...\n");
	{
		Reclaim_b(avail, &p2);
		PrintLayout_b(avail);
		printf("\n");
	} 
	PressEnter;
	
	printf("回收内存块 p3 后...\n");
	{
		Reclaim_b(avail, &p3);
		PrintLayout_b(avail);
		printf("\n");
	} 
	PressEnter;
	
	printf("回收内存块 p4 后...\n");
	{
		Reclaim_b(avail, &p4);
		PrintLayout_b(avail);
		printf("\n");
	} 
	PressEnter;
			
	return 0;
}

