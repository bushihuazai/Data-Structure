/*************************************
*                                    *
* 文件夹: 09_search                  *
*                                    *
* 文件名: Base.h                     *
*                                    *
* 内  容: 查找表结构，供本章程序调用 *
*                                    *
**************************************/

#ifndef BASE_H
#define BASE_H

#include <stdio.h>
#include <stdlib.h>
#include "../../01_abstract/Status.h"				//**01_abstract**//
#include "../../01_abstract/Scanf.c"				//**01_abstract**//

/* 查找表类型定义 */
typedef int KeyType;			//关键字类型
typedef struct {
	int key;					//关键字域
	float weight;				//其他域（此处可设为权重）
} ElemType_Search;				//有序表元素类型

//0号单元弃用
typedef struct {
	ElemType_Search *elem;		//数据元素存储空间基址，0号单元 is empty
	int length;					//表长度
} Table;							//查找表

/* Func列表 */
Status Create(FILE *fp, Table *T, int n);
/*━━━━━━━┓
┃(01)创建查找表┃
┗━━━━━━━*/

void Destory(Table *T);
/*━━━━━━━┓
┃(02)销毁查找表┃
┗━━━━━━━*/

void Traverse(Table T, void(Visit)(ElemType_Search));
/*━━━━━━━┓
┃(03)遍历查找表┃
┗━━━━━━━*/

void PrintKey(ElemType_Search e);
/*━━━━━━━━━━━━━━━━━━━━┓
┃(04)输出查找表中的关键字（只输出key域） ┃
┗━━━━━━━━━━━━━━━━━━━━*/

#endif
