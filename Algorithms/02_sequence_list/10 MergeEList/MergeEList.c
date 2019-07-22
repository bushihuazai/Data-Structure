/*************************************
 *                                     *
 * 文件夹: 02_sequence_list\10 MergeEList *
 *                                      *
 * 文件名: MergeEList.c              *
 *                                      *
 * 算  法: 2.21                      *
 *                                   *
 *************************************/

#ifndef MERGEELIST_C
#define MERGEELIST_C

#include "MergeEList.h"                    //**02_sequence_list**//

/*═════╗
║ 算法2.21 ║
╚═════*/
Status MergeEList_L(ELinkList La, ELinkList Lb, ELinkList *Lc, int(Compare)(LElemType_E c1, LElemType_E c2))
{
    Link ha, hb, pa, pb, q;
    LElemType_E c1, c2;

    if (!InitList_E(Lc)) {                //存储分配失败
        return ERROR;

    }

    ha = GetHead_E(La);                 //ha指向La头结点
    hb = GetHead_E(Lb);                 //hb指向Lb头结点
    pa = NextPos_E(ha);                    //pa指向La第一个结点 
    pb = NextPos_E(hb);                    //pb指向Lb第一个结点
    while(!ListEmpty_E(La) && !ListEmpty_E(Lb))
    {                                     //La与Lb非空  {
tCurElem_E(a);            //c1、c2为当前比较的元素
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
{                                                    //按非降序序列创建链表L 
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
