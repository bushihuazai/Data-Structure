/*****************************
*                            *
* �ļ���: 09_search          *
*                            *
* �ļ���: Base-main.c        *
*                            *
* ��  ��: ���ұ����Functest *
*                            *
******************************/

#include <stdio.h>
#include "Base.c"                                     //**09_search**//

/* �궨�� */
#define Max 10                                        //���ұ���Ԫ�ظ��� 

void Print(ElemType_Search e);
//���������еĹؼ��ֺ�������

int main(int argc, char *argv[])
{
    FILE *fp;
    Table T;

    printf("1\nFunc Create test...\n");            //1.FuncCreatetest
    printf("����һ�����ұ�...\n");
    fp = fopen("TestData_Table.txt", "r");
    Create(fp, &T, Max);
    printf("\n");
    PressEnter;

    printf("3\nFunc Traverse test...\n");        //3.FuncTraversetest
    printf("������ұ���Ϣ...\n");
    Traverse(T, Print);
    printf("\n");
    PressEnter;

    printf("4\nFunc PrintKey test...\n");        //4.FuncPrintKeytest
    printf("������ұ�ؼ���...\n");
    Traverse(T, PrintKey);
    printf("\n");
    PressEnter;

    printf("2\nFunc DeTory test...\n");            //2.FuncDeTorytest
    printf("���������...\n");
    Destory(&T);
    printf("�����");
    T.elem == NULL &&T.length == 0 ? printf("�ѱ�") : printf("δ��");
    printf("����!\n");
    printf("\n");
    PressEnter;

    return 0;
}

void Print(ElemType_Search e)
{
    printf("(%3d, %.1f) ", e.key, e.weight);
}
