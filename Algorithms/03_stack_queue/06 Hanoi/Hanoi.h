/**********************************
 *                                *
 * 文件夹: 03_stack_queue\06 Hanoi *
 *                                *
 * 文件名: Hanoi.h                *
 *                                *
 * 内  容: 汉诺塔相关操作列表     *
 *                                *
 **********************************/

#ifndef HANOI_H
#define HANOI_H

#include <stdio.h>

/* 全局变量 */
int gStep;                                //统计移动步数

/* 汉诺塔Func列表 */
void hanoi(int n, char x, char y, char z);
/*━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┃(1)算法3.5：汉诺塔求解。以y为辅助，将x上前n个圆盘移动到z。┃
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━*/

void move(char x, int n, char z);
/*━━━━━━━━━━━━┓
┃(2)将第n个圆盘从x移到z。┃
┗━━━━━━━━━━━━*/

#endif
