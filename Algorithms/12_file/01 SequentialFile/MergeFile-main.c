/********************************
 *                                *
 * �ļ���: 12_file            *
 *                                 *
 * �ļ���: MergeFile-main.c     *
 *                                 *
 * ��  ��: �ļ��鲢���Functest *
 *                              *
 ********************************/

#include <stdio.h>
#include "MergeFile.c"                                     //**12_file**//

int main(int argc, char *argv[])
{
    FILE *f, *g, *h, *log;

    printf("1\nFunc InitFile test...\n");                //1.FuncInitFiletest
    {
        printf("��Ϊʾ�����������ļ� f �������ļ� g ...\n");
        f = fopen("main.file", "w+");
        g = fopen("affair.file", "w+");
        InitFile(f, g);
        printf("\n");
    }
    PressEnter;

    printf("2��3��4��5��6\nFunc MergeFile�� test...\n");    //2��3��4��5��6.FuncMergeFile��test
    {
        printf("�������ļ� f �������ļ� g �������ļ� h ...\n");
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

        printf("����ļ��м�¼...\n");
        printf("�����ļ���¼��");
        fp = fopen("main.file", "r");
        Print(fp, 0);
        printf("�������ļ���¼��");
        fp = fopen("affair.file", "r");
        Print(fp, 1);
        printf("�����ļ���¼��");
        fp = fopen("new.file", "r");
        Print(fp, 0);
        printf("��������־��¼��");
        if ((fp = fopen("ErrorLog.file", "r")) != NULL) {
            Print(fp, 1);
        }
        printf("\n\n");
    }
    PressEnter;

    system("del *.file");

    return 0;
}
