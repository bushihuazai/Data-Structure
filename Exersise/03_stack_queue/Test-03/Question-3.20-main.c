/* 此算法类似于迷宫寻路算法 */
#include <stdio.h>
#include <stdlib.h>                                        //提供 systemFunc
#include <time.h>                                        //提供 time Func原型 
#include "../../../Algorithms/01_abstract/Status.h"      //**01_abstract**//

/* 宏定义 */
#define SleepTime 2
#define Row 10
#define Col    17

/* 类型定义 */
typedef enum { East, South, West, North } Direction;    //访问方向
typedef enum { Color_1, Color_2, Color_3 } Color;        //颜色
typedef struct {
    int    x;                                            //像素点的横、纵坐标定义
    int y;
    int    di;                                            //从此像素点走向下一像素点的"方向"
} SElemType;                                            //栈的元素类型

/* Func原型 */
void Coloring_3_20(int g[][17], SElemType start);     //迷宫染色Func
void InitGrap(int g[][17], SElemType *start);        //Initial图像区域和染色起点
void PaintGrap(int g[][17]);                        //画出图像
void ShowGrap(int g[][17]);                            //在屏幕上显示当前图像
Status Pass(SElemType e, int g[][17]);                //判断某个点是否需要染色
void Mark(SElemType *e, int g[][17]);                //遇到可以染色的点即留下标记，即染上相应的颜色
Status NextPos(SElemType *e);                        //获取下一个该染色的点的信息
Status IsCross(SElemType e);                        //判断当前的点是否出界

int main(int argc, char **argv)
{
    int g[Row][Col];                                //存放图像区域点的颜色
    SElemType start;                                //染色的起点

    InitGrap(g, &start);
    PaintGrap(g);

    Coloring_3_20(g, start);

    return 0;
}

/*━━━━━━━━━━┓
┃题3.20：对某图像染色┃
┗━━━━━━━━━━*/
void Coloring_3_20(int g[][Col], SElemType start)
{
    SElemType e;
    SElemType stack[10000];                        //定义一个足够大的数组作为栈，存放染过色的点
    int top = -1;                                //栈顶指针

    e = start;
    do {
        if (Pass(e, g)) {                        //如果需要染色
            Mark(&e, g);                        //将其染色，并标记其前进方向
            ShowGrap(g);
            stack[++top] = e;                    //将访问过的像素点入栈
            NextPos(&e);                        //得出下一个像素点信息
        } else {
            if (top != -1) {
                e = stack[top--];

                while (e.di == North && top != -1) {    //栈中弹出的点已没多余方向可访问
                    e = stack[top--];
                }

                if (e.di < North) {
                    e.di++;
                    stack[++top] = e;
                    NextPos(&e);
                }
            }
        }
    } while (top != -1);                            //栈 not empty
}

/* Initial图像区域和染色起点 */
void InitGrap(int g[][Col], SElemType *start)
{
    int i, j;
    int a[Row][Col] = {{0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0},
        {0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},
        {0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0}
    };//储存颜色0和颜色1

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 17; j++) {
            g[i][j] = a[i][j];
        }
    }

    (*start).x = 9;                                        //起点坐标
    (*start).y = 8;
    (*start).di = East;                                    //East代表方向向右
}

/* 画出图像 */
void PaintGrap(int g[][Col])
{
    int i, j;

    for (i = 0; i < Row; i++) {
        for (j = 0; j < Col; j++) {
            if (g[i][j] == Color_1) {                    //颜色0用"^"显示
                printf("^");
            }
            if (g[i][j] == Color_2) {                    //颜色1显示 is empty白
                printf(" ");
            }
            if (g[i][j] == Color_3) {                    //颜色2用"*"显示
                printf("*");
            }

            if (j && !(j % (Col - 1))) {
                printf("\n");
            }
        }
    }
}

/* 在屏幕上显示当前图像 */
void ShowGrap(int g[][Col])
{
    Wait(SleepTime);
    system("cls");
    PaintGrap(g);
}

/* 判断某个点是否需要染色 */
Status Pass(SElemType e, int g[][Col])
{
    int x = e.x;
    int y = e.y;

    if (g[x][y] == 1) {                                //将颜色为1的点染成其他颜色
        return YES;
    } else {
        return NO;
    }
}

/* 遇到可以染色的点即留下标记，即染上相应的颜色 */
void Mark(SElemType *e, int g[][Col])
{
    int x = (*e).x;
    int y = (*e).y;

    (*e).di = East;                                    //标记此像素点的前进方向

    g[x][y] = 2;                                    //将此像素点颜色染为颜色2
}

/* 获取下一个该染色的点的信息 */
Status NextPos(SElemType *e)
{
    SElemType tmp;
    tmp = *e;

    switch (tmp.di) {
        case East:
            (tmp.y)++;                        //East代表向右
            break;
        case South:
            (tmp.x)++;                        //South代表向下
            break;
        case West:
            (tmp.y)--;                        //West代表向左
            break;
        case North:
            (tmp.x)--;                        //North代表向上
            break;
        default:
            return FALSE;
    }

    if (IsCross(tmp)) {
        ++(*e).di;
        NextPos(e);
    } else {
        *e = tmp;
    }

    return TRUE;
}

/* 判断当前的点是否出界 */
Status IsCross(SElemType e)
{
    int x = e.x;
    int y = e.y;

    if (x < 0 || y < 0 || x > Row - 1 || y > Col - 1) {
        return YES;    //越界
    } else {
        return NO;
    }
}
