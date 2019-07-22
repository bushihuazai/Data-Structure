/**********************************************
 *                                              *
 * �ļ���: 02_sequence_list\08 DualCycleLinkedList *
 *                                               *
 * ��  ��: ˫ѭ���������Functest             *
 *                                            *
 **********************************************/

#include <stdio.h>
#include "DualCycleLinkedList.c"                         //**02_sequence_list**//

Status CmpGreater(LElemType_DC e, LElemType_DC data);    //��data>e������TRUE�����򷵻�FALSE
void PrintElem(LElemType_DC e);                            //testFunc����ӡ����

int main(int argc, char **argv)
{
    DuLinkList L;
    int i;
    LElemType_DC e;

    printf("1\nFunc InitList_DuL test...\n");        //1.FuncInitList_DuLtest
    {
        printf("Initial˫ѭ������ L ...\n");
        InitList_DuL(&L);
        printf("\n");
    }
    PressEnter;

    printf("4\nFunc ListEmpty_DuL test...\n");        //4.FuncListEmpty_DuLtest
    {
        ListEmpty_DuL(L) ? printf(" L  is empty!!\n") : printf(" L  not empty!\n");
        printf("\n");
    }
    PressEnter;

    printf("11\nFunc ListInsert_DuL test...\n");    //11.FuncListInsert_DuLtest
    {
        for (i = 1; i <= 6; i++) {
            printf("�� L �� %d ��λ�ò��� \"%d\" ...\n", i, 2 * i);
            ListInsert_DuL(L, i, 2 * i);
        }
        printf("\n");
    }
    PressEnter;

    printf("13\nFunc ListTraverse_DuL test...\n");    //13.FuncListTraverse_DuLtest
    {
        printf(" L �е�Ԫ��Ϊ��L = ");
        ListTraverse_DuL(L, PrintElem);
        printf("\n\n");
    }
    PressEnter;

    printf("5\nFunc ListLength_DuL test...\n");        //5.FuncListLength_DuLtest
    {
        printf(" L �ĳ���Ϊ %d \n", ListLength_DuL(L));
        printf("\n");
    }
    PressEnter;

    printf("12\nFunc ListDelete_DuL test...\n");    //12.FuncListDelete_DuLtest
    {
        ListDelete_DuL(L, 6, &e);
        printf("ɾ�� L �е�6��Ԫ�� \"%d\" ...\n", e);
        printf(" L �е�Ԫ��Ϊ��L = ");
        ListTraverse_DuL(L, PrintElem);
        printf("\n\n");
    }
    PressEnter;

    printf("6\nFunc GetElem_DuL test...\n");        //6.FuncGetElem_DuLtest
    {
        GetElem_DuL(L, 4, &e);
        printf(" L �е� 4 ��λ�õ�Ԫ��Ϊ \"%d\" \n", e);
        printf("\n");
    }
    PressEnter;

    printf("7\nFunc LocateElem_DuL test...\n");        //7.FuncLocateElem_DuLtest
    {
        i = LocateElem_DuL(L, 7, CmpGreater);
        printf(" L �е�һ��Ԫ��ֵ���� \"7\" ��Ԫ�ص�λ��Ϊ %d \n", i);
        printf("\n");
    }
    PressEnter;

    printf("8\nFunc PriorElem_DuL test...\n");        //8.FuncPriorElem_DuLtest
    {
        PriorElem_DuL(L, 6, &e);
        printf("Ԫ�� \"6\" ��ǰ��Ϊ \"%d\" \n", e);
        printf("\n");
    }
    PressEnter;

    printf("9\nFunc NextElem_DuL test...\n");        //9.FuncNextElem_DuLtest
    {
        NextElem_DuL(L, 6, &e);
        printf("Ԫ�� \"6\" �ĺ��Ϊ \"%d\" \n", e);
        printf("\n");
    }
    PressEnter;

    printf("10\nFunc GetElem_P test...\n");            //10.FuncGetElem_Ptest
    {
        DuLinkList p;
        p = GetElemPtr_DuL(L, 3);
        printf("����� 3 ������ָ��Ϊ 0x%x�����Ӧ��ֵΪ \"%d\" \n", p, *p);
        printf("\n");
    }
    PressEnter;

    printf("3\nFunc ClearList_DuL test...\n");        //3.FuncClearList_DuLtest
    {
        printf("��� L ǰ��");
        ListEmpty_DuL(L) ? printf(" L  is empty!!\n") : printf(" L  not empty!\n");
        ClearList_DuL(L);
        printf("��� L ��");
        ListEmpty_DuL(L) ? printf(" L  is empty!!\n") : printf(" L  not empty!\n");
        printf("\n");
    }
    PressEnter;

    printf("2\nFunc DestroyList_DuL test...\n");    //2.FuncDestroyList_DuLtest
    {
        printf("���� L ǰ��");
        L ? printf(" L exsists!\n") : printf(" L  not exsist!!\n");
        DestroyList_DuL(&L);
        printf("���� L ��");
        L ? printf(" L exsists!\n") : printf(" L  not exsist!!\n");
        printf("\n");
    }
    PressEnter;

    return 0;
}

Status CmpGreater(LElemType_DC e, LElemType_DC data)
{
    return data > e ? TRUE : FALSE;
}

void PrintElem(LElemType_DC e)
{
    printf("%d ", e);
}
