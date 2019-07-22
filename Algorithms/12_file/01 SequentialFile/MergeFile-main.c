/********************************
 *                                *
 * 文件夹: 12_file            *
 *                                 *
 * 文件名: MergeFile-main.c     *
 *                                 *
 * 内  容: 文件归并相关Functest *
 *                              *
 ********************************/

#include <stdio.h>
#include "MergeFile.c"                                     //**12_file**//

int main(int argc, char *argv[])
{
    FILE *f, *g, *h, *log;

    printf("1\nFunc InitFile test...\n");                //1.FuncInitFiletest
    {
        printf("作为示例，创建主文件 f 和事务文件 g ...\n");
        f = fopen("main.file", "w+");
        g = fopen("affair.file", "w+");
        InitFile(f, g);
        printf("\n");
    }
    PressEnter;

    printf("2、3、4、5、6\nFunc MergeFile等 test...\n");    //2、3、4、5、6.FuncMergeFile等test
    {
        printf("根据主文件 f 和事务文件 g 创建新文件 h ...\n");
        f = fopen("main.file", "r");
        g = fopen("affair.file", "r");
        h = fopen("new.file", "w+");
        MergeFile(f, g, h, log);
        printf("\n");
    }
    PressEnter;

    printf("7\nFunc Print test...\n");                //7.FuncPrinttest
    {
        FILE *fp;

        printf("输出文件中记录...\n");
        printf("◆主文件记录：");
        fp = fopen("main.file", "r");
        Print(fp, 0);
        printf("◆事务文件记录：");
        fp = fopen("affair.file", "r");
        Print(fp, 1);
        printf("◆新文件记录：");
        fp = fopen("new.file", "r");
        Print(fp, 0);
        printf("◆错误日志记录：");
        if ((fp = fopen("ErrorLog.file", "r")) != NULL) {
            Print(fp, 1);
        }
        printf("\n\n");
    }
    PressEnter;

    system("del *.file");

    return 0;
}
