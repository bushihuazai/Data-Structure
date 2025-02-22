/*********************************
 *                                 *
 * 文件夹: 03_stack_queue\04 Maze *
 *                                  *
 * 内  容: 迷宫相关Functest      *
 *                               *
 *********************************/

#include "Maze.c"                        //**03_stack_queue**//                    

int main(int argc, char *argv[])
{
    MazeType maze[N][N];
    PosType start, end;
    SElemType_Sq e;
    char Re = 'Y';

    while (Re == 'Y' || Re == 'y') {
        InitMaze(maze, &start, &end);    //Initial迷宫，包括出入口
        ShowMaze(maze);                    //显示迷宫的初始状态
        MazePath(maze, start, end);        //迷宫寻路

        printf("重置？（Y/N）：");
        scanf("%c", &Re);
    }

    return 0;
}
