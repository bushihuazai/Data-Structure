/****************************************************
 *                                                    *
 * 文件夹: 06_tree_binaryTree\06 ChildTree             *
 *                                                     *
 * 文件名: ChildTree-main.c                         *
 *                                                     *
 * 内  容: 树的孩子链表(带双亲)存储表示相关Functest *
 *                                                  *
 ****************************************************/

#include <stdio.h>
#include "ChildTree.c"                                                     //**06_tree_binaryTree**//                                                            

void PrintElem(TElemType_C e);

int main(int argc, char *argv[])
{
    CTree T, T0;
    FILE *fp;                                                            //作为输入源

    printf("1\nFunc InitTree_C test...\n");                            //1.FuncInitTree_Ctest
    {
        printf("Initial一棵空树 T ...\n");
        fp = fopen("TestData_T.txt", "r");
        InitTree_C(fp, &T);
        printf("\n");
    }
    PressEnter;

    printf("5\nFunc TreeEmpty_C test...\n");                        //5.FuncTreeEmpty_Ctest
    {
        TreeEmpty_C(T) ? printf(" T  is empty!\n") : printf(" T  not empty!\n");
        printf("\n");
    }
    PressEnter;

    printf("6\nFunc CreateTree_C test...\n");                        //6.FuncCreateTree_Ctest
    {
        CreateTree_C(fp, &T);
        fclose(fp);
        printf("\n");
    }
    PressEnter;

    printf("22\nFunc LevelOrderTraverse_C test...\n");                //22.FuncLevelOrderTraverse_Ctest
    {
        printf("层序遍历树 T = ");
        LevelOrderTraverse_C(T, PrintElem);
        printf("\n\n");
    }
    PressEnter;

    printf("8-2、9、23-1\nFunc Print_C等 test...\n");                //8-2、9、23-1.FuncPrint_C_1、TreeDepth_C_2、Depth_Ctest
    {
        printf("打印树 T = \n");
        Print_C_1(T);
        printf("\n");
    }
    PressEnter;

    printf("24\nFunc ShowTree_T test...\n");                        //24.FuncShowTree_Ttest
    {
        printf("展示树结构 T = \n");
        ShowTree_C(T);
        printf("\n");
    }
    PressEnter;

    printf("7\nFunc TreeDegree_C test...\n");                        //7.FuncTreeDegree_Ptest
    {
        printf(" T 的度为：%d \n", TreeDegree_C(T));
        printf("\n");
    }
    PressEnter;

    printf("8-1\nFunc TreeDepth_C_1 test...\n");                    //8-1.FuncTreeDepth_C_1test
    {
        printf(" T 共有 %d 层 \n", TreeDepth_C_1(T));
        printf("\n");
    }
    PressEnter;

    printf("10\nFunc Root_C test...\n");                            //10.FuncRoot_Ctest
    {
        printf(" T 的根结点为：%c\n", Root_C(T));
        printf("\n");
    }
    PressEnter;

    printf("11\nFunc Value_C test...\n");                            //11.FuncValue_Ctest
    {
        printf(" T 中第 %d 个结点的值为：%c \n", 2, Value_C(T, 2));
        printf("\n");
    }
    PressEnter;

    printf("12\nFunc Order_C test...\n");                            //12.FuncOrder_Ctest
    {
        printf(" T 中元素 %c 的位置为：%d \n", 'A', Order_C(T, 'A'));
        printf("\n");
    }
    PressEnter;

    printf("13、23-2\nFunc Assign_C等 test...\n");                    //13、23-2.FuncAssign_C、Print_C_2test
    {
        printf("将结点 'B' 赋值为 'X' 后，T = \n");
        Assign_C(&T, 'B', 'X');
        Print_C_2(T, T.r, 0);
        printf("\n");
    }
    PressEnter;

    printf("14\nFunc ChildValue_C test...\n");                        //14.FuncChildValue_Ctest
    {
        printf("结点 %c 第 %d 个孩子为：%c \n", 'A', 2, ChildValue_C(T, 'A', 2));
        printf("\n");
    }
    PressEnter;

    printf("15-1、15-2\nFunc Sibling_C_1、Sibling_C_2 test...\n");    //15-1、15-2.FuncSibling_C_1、Sibling_C_2test
    {
        printf(" %c 的左兄弟为：%c，%c 的右兄弟为：%c \n", 'E', Sibling_C_1(T, 'E', 0), 'D', T.nodes[Sibling_C_2(T, 3, 1)].data);
        printf("\n");
    }
    PressEnter;

    printf("16、17、18、19、20\nFunc InsertTree_C等 test...\n");    //16、17、18、19、20.FuncChildCount_C、ChildSeat_C、SiblingSeat_C、InsertChild_C、InsertTree_Ctest
    {
        printf("创建并打印 T0 ...\n");
        fp = fopen("TestData_T0.txt", "r");
        InitTree_C(fp, &T0);
        CreateTree_C(fp, &T0);
        fclose(fp);
        Print_C_1(T0);
        printf("\n");
        printf("将树 T0 嫁接为 %c 的第 %d 棵子树后，T = ...\n", 'X', 1);
        InsertTree_C(&T, 'X', 1, T0);
        Print_C_1(T);
        printf("\n");
        ShowTree_C(T);
        printf("\n");
    }
    PressEnter;

    printf("21\nFunc DeleteTree_C test...\n");                        //21.FuncDeleteTree_Ctest
    {
        printf("删除 T 中结点 %c 的第 %d 棵子树后，T = \n", '0', 3);
        DeleteTree_C(&T, '0', 3);
        Print_C_1(T);
        printf("\n");
        ShowTree_C(T);
        printf("\n");
    }
    PressEnter;

    printf("2、3\nFunc ClearTree_C等 test...\n");                    //2、3.FuncClearTree_Ctest
    {
        ClearTree_C(&T);
        TreeEmpty_C(T) ? printf(" T  is empty!\n") : printf(" T  not empty!\n");
        printf("\n");
    }
    PressEnter;
}

void PrintElem(TElemType_C e)
{
    printf("%c ", e);
}
