/*****************************************
 *                                         *
 * 文件夹: 06_tree_binaryTree\05 ParentTree *
 *                                         *
 * 文件名: ParentTree.h                  *
 *                                          *
 * 内  容: 树的双亲表示结构相关操作列表  *
 *                                       *
 *****************************************/

#ifndef PARENTTREE_H
#define PARENTTREE_H

#include <stdio.h>
#include "../../01_abstract/Status.h"                //**01_abstract**//
#include "../../01_abstract/Scanf.c"                //**01_abstract**//
#include "../../03_stack_queue/01 SequenceStack/SequenceStack.c"    //**03_stack_queue**// 

/* 宏定义 */
#define MAX_TREE_SIZE 100                        //树的最大结点数

/* 双亲树类型定义 */
#ifndef MFSET_H                                    /* 在并查集结构中此类型将重新定义 */
    typedef char TElemType_P;                        //假设树中元素均为字符
#endif
typedef struct PTNode {                        //结点结构
    TElemType_P data;
    int parent;                                    //双亲位置域
} PTNode;
typedef struct {                                //树结构
    PTNode nodes[MAX_TREE_SIZE];                //根结点位置默认到0，为了操作方便
    int n;                                        //树的结点数
} PTree;

/* 树的双亲存储结构Func列表 */
void InitTree_P(PTree *T);
/*━━━━━━━━━━━━━┓
┃(01)构造空树T (Initial树)。┃
┗━━━━━━━━━━━━━*/

void ClearTree_P(PTree *T);
/*━━━━━━━┓
┃(02)清空树T。 ┃
┗━━━━━━━*/

void DestroyTree_P(PTree *T);
/*━━━━━━━┓
┃(03)销毁树T。 ┃
┗━━━━━━━*/

Status TreeEmpty_P(PTree T);
/*━━━━━━━━━━━┓
┃(04)判断树T是否 is empty。 ┃
┗━━━━━━━━━━━*/

Status CreateTree_P(FILE *fp, PTree *T);
/*━━━━━━━━━━━┓
┃(05)按层序序列构造树。┃
┗━━━━━━━━━━━*/

int TreeDegree_P(PTree T);
/*━━━━━━━━┓
┃(06)返回树的度。┃
┗━━━━━━━━*/

int TreeDepth_P(PTree T);
/*━━━━━━━━━┓
┃(07)返回树的深度。┃
┗━━━━━━━━━*/

TElemType_P Root_P(PTree T);
/*━━━━━━━━━━━┓
┃(08)返回树的根结点值。┃
┗━━━━━━━━━━━*/

TElemType_P Value_P(PTree T, int i);
/*━━━━━━━━━━━━━━━━━━━━━┓
┃(09)返回树中第i个结点的值（按层序计数）。 ┃
┗━━━━━━━━━━━━━━━━━━━━━*/

int Order_P(PTree T, TElemType_P e);
/*━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┃(10)返回结点e的值位置(在数组中位置)，-1代表无此结点。 ┃
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━*/

Status Assign_P(PTree *T, TElemType_P e, TElemType_P value);
/*━━━━━━━━━━━━━┓
┃(11)替换结点e的值为value。┃
┗━━━━━━━━━━━━━*/

TElemType_P ChildValue_P(PTree T, TElemType_P e, int order);
/*━━━━━━━━━━━━━━━━━━━━━━━━━┓
┃(12)返回结点e的第order个孩子的值（从左至右计数）。┃
┗━━━━━━━━━━━━━━━━━━━━━━━━━*/

TElemType_P Sibling_P(PTree T, TElemType_P e, int mark);
/*━━━━━━━━━━━━━━━━━━━━━━┓
┃(13)返回元素e的左（右）兄弟，mark标记左右。 ┃
┗━━━━━━━━━━━━━━━━━━━━━━*/

int ChildCount_P(PTree T, TElemType_P p);
/*━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┃(14)返回结点p的孩子结点（子树）个数，返回负数代表结点p not exsist。┃
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━*/

int ChildSeat_P(PTree T, TElemType_P p, int i);
/*━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┃(15)返回树T中p结点的第i个孩子（层序计数）的位置，i=0定义为最后一个孩子。┃
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━*/

Status InsertChild_P(PTree *T, TElemType_P p, int i, TElemType_P e);
/*━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┃(16)将结点e插入为树T中p结点的第i个孩子（层序计数），i=0定义为最后一个孩子。 ┃
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━*/

Status InsertTree_P(PTree *T, TElemType_P p, int i, PTree t);
/*━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┃(17)将树t插入为树T中p结点的第i棵子树（层序计数），i=0定义为最后一棵子树。 ┃
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━*/

Status DeleteTree_P(PTree *T, TElemType_P p, int i);
/*━━━━━━━━━━━━━━━━┓
┃(18)删除树T中p结点的第i棵子树。 ┃
┗━━━━━━━━━━━━━━━━*/

void LevelOrderTraverse_P(PTree T, void(Visit)(TElemType_P));
/*━━━━━━━━┓
┃(19)层序遍历树。┃
┗━━━━━━━━*/

void Print_P(PTree T);
/*━━━━━━┓
┃(20)打印树。┃
┗━━━━━━*/

#endif
