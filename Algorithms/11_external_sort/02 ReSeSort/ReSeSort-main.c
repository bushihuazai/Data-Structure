/************************************
 *                                    *
 * �ļ���: 11 �ⲿ����            *
 *                                     *
 * �ļ���: ReSeSort-main.c          *
 *                                     *
 * ��  ��: �û�ѡ���������Functest *
 *                                  *
 ************************************/

#include <stdio.h>
#include "ReSeSort.c"                                             //**11 �ⲿ����**//

int main(int argc, char *argv[])
{
    FILE *fi;
    LoserTree ls;
    WorkArea wa;

    printf("1��2��3��4\nFunc Replace_Selectiom�� test...\n");//1��2��3��4.FuncReplace_Selectiom��test
    {
        printf("�������ļ�ͨ���������鲢������ļ�[0..k-1].txt��...\n");
        printf("���ڵ�ǰ�ļ����²鿴���ɵ��ļ�...\n");
        fi = fopen("TestData.txt", "r");                        //��ȡ�����ļ�
        Replace_Selectiom(fi, ls, wa);                            //�ָ�fi
        printf("\n");
    }
    PressEnter;

    return 0;
}

