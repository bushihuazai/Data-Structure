/************************************
 *                                    *
 * �ļ���: 02_sequence_list\05 MergeList *
 *                                     *
 * ��  ��:  SingleLinkedList �鲢���Functest   *
 *                                  *
 ************************************/

#include <stdio.h>
#include "MergeList.c"                    //**02_sequence_list**//

void PrintElem(LElemType_L e);            //testFunc����ӡ����

int main(int argc, char **argv)
{
    FILE *fp;
    LinkList La, Lb, Lc;
    int m;

    m = 5;

    printf("La 's length: %d ��Lb 's: %d ��creatging La and Lb...\n", m, m);
    fp = fopen("TestData_HL.txt", "r");    //�ļ�ָ�룬ָ������Դ
    CreateList_HL(fp, &La, m);
    fclose(fp);
    fp = fopen("TestData_TL.txt", "r");    //�ļ�ָ�룬ָ������Դ
    CreateList_TL(fp, &Lb, m);
    fclose(fp);

    printf("La = ");
    ListTraverse_L(La, PrintElem);
    printf("\n");
    printf("Lb = ");
    ListTraverse_L(Lb, PrintElem);
    printf("\n\n");
    PressEnter;

    MergeList_L(La, &Lb, &Lc);
    printf("Merging La and Lb into Lc = ");
    ListTraverse_L(Lc, PrintElem);
    printf("\n\n");
    PressEnter;

    return 0;
}

void PrintElem(LElemType_L e)
{
    printf("%d ", e);
}
