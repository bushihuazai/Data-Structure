/*************************************
 *                                     *
 * �ļ���: 02_sequence_list\10 MergeEList *
 *                                      *
 * �ļ���: MergeEList.c              *
 *                                      *
 * ��  ��: 2.21                      *
 *                                   *
 *************************************/

#ifndef MERGEELIST_C
#define MERGEELIST_C

#include "MergeEList.h"                    //**02_sequence_list**//

/*�T�T�T�T�T�[
�U �㷨2.21 �U
�^�T�T�T�T�T*/
Status MergeEList_L(ELinkList La, ELinkList Lb, ELinkList *Lc, int(Compare)(LElemType_E c1, LElemType_E c2))
{
    Link ha, hb, pa, pb, q;
    LElemType_E c1, c2;

    if (!InitList_E(Lc)) {                //�洢����ʧ��
        return ERROR;

    }

    ha = GetHead_E(La);                 //haָ��Laͷ���
    hb = GetHead_E(Lb);                 //hbָ��Lbͷ���
    pa = NextPos_E(ha);                    //paָ��La��һ����� 
    pb = NextPos_E(hb);                    //pbָ��Lb��һ�����
    while(!ListEmpty_E(La) && !ListEmpty_E(Lb))
    {                                     //La��Lb�ǿ�  {
tCurElem_E(a);            //c1��c2Ϊ��ǰ�Ƚϵ�Ԫ��
        c2 = GetCurElem_E(pb);
        if(Compare(c1, c2)<=0)
        {        DelFirst_E(&La, ha, &q);
            InsFirst_E(Lc, (*Lc).tail, q);
            pa = NextPos_E(ha);
        }
        e {     DelFirst_E(&Lb, hb, &q);
            InsFirst_E(Lc, (*Lc).tail, q);
            pb=NextPos_E(hb);
        }  
    }

    if(!ListEmpty_E(La))
        A ppend_E(Lc, pa); {
    else
    }     App {end_E(Lc, pb);


    }
    FreeNode_E(&ha);
    FreeNode_E(&hb);

    return OK;
}

int Cmp(LElemType_E c1, LElemType_E c2)
{
    return c1-c2;
}
  
Status CreateList_ascend(FILE *fp, ELinkList *L, int count)
{                                                    //���ǽ������д�������L 
    int i;
    
e;
        
    InitList_E(L);
f(!L)
        return ERROR;
  {
    for(i=1; i<=count; i++)
    }
    {    
        Sc an f (fp,  " %d", &e);     istInsert_L_E(L, i, e);
    }
    
    return OK;


#endif
