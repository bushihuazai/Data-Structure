/****************************************
 *                                        *
 * �ļ���: 06_tree_binaryTree\08 MFSet     *
 *                                         *
 * �ļ���: MFSet-main.c                 *
 *                                         *
 * ��  ��: ���鼯���ȼ��ࣩ���Functest *
 *                                      *
 ****************************************/

#include <stdio.h>
#include "MFSet.c"                         //**06_tree_binaryTree**//

int main(int argc, char *argv[])
{
    FILE *fp;
    MFSet S;

    printf("1\nFunc Initial_mfset test...\n");        //1.FuncInitial_mfsettest
    {
        printf("Initial���ϣ���Ϊʾ��¼�� 10 ��Ԫ�أ�...\n");
        fp = fopen("TestData_S.txt", "r");
        Initial_mfset(fp, &S);
        fclose(fp);
        printf("Initial��ɣ��ּ����зǿ��Ӽ���ֻ��������Ԫ��...\n");
        printf("\n");
    }
    PressEnter;

    printf("8��9\nFunc ShowSet_mfset�� test...\n");    //8��9.FuncShowSet_mfset��SubsetCount_mfsettest
    {
        printf("չʾ���� S = ");
        ShowSet_mfset(S);
        printf("\n");
    }
    PressEnter;

    printf("2��3��6��7-1\nFunc EquivalenceClass_mfset_1�� test...\n");
    {
        //2��3��6��7-1.Funcfind_mfset��merge_mfset��BuildRelation_mfset��EquivalenceClass_mfset_1test
        Relation R1;

        printf("���ݵȼ۹�ϵ�����ȼ���...\n");
        printf("��Ϊʾ��¼��4����Ԫ��ϵ�磺{(1,2),(3,4),(5,6),(7,9)}...\n");
        fp = fopen("TestData_R1.txt", "r");
        BuildRelation_mfset(fp, &R1);
        fclose(fp);
        EquivalenceClass_mfset_1(&S, R1);
        printf("չʾ�ȼ��� S = ");
        ShowSet_mfset(S);
        printf("\n");
    }
    PressEnter;

    printf("4��5��6��7-2\nFunc EquivalenceClass_mfset_2�� test...\n");
    {
        //4��5��6��7-2.Funcfix_mfset��mix_mfset��BuildRelation_mfset��EquivalenceClass_mfset_2test
        Relation R2;

        printf("����ĳ���ϵĵȼ۹�ϵ������ȼ���...\n");
        printf("��Ϊʾ��¼��2����Ԫ��ϵ�磺{(1,3),(5,7)}...\n");
        fp = fopen("TestData_R2.txt", "r");
        BuildRelation_mfset(fp, &R2);
        fclose(fp);
        EquivalenceClass_mfset_2(&S, R2);
        printf("չʾ�ȼ��� S = ");
        ShowSet_mfset(S);
        printf("\n");
    }
    PressEnter;
}
