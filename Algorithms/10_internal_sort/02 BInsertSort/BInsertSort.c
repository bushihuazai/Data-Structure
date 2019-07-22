/*************************
 *                       *
 * �ļ���: 10_internal_sort *
 *                       *
 * �ļ���: BInsertSort.c *
 *                       *
 * ��  ��: 10.2          *
 *                       *
 *************************/

#ifndef BINSERTSORT_C
#define BINSERTSORT_C

#include "BInsertSort.h"     //**10_internal_sort**//

/*�T�T�T�T�[
�U�㷨10.2�U
�^�T�T�T�T*/
void BInsertSort(SqList_sort *L)
{
    int i, j, low, high, m;

    for (i = 2; i <= (*L).length; ++i) {
        (*L).r[0] = (*L).r[i];                        //��(*L).r[i]�ݴ浽(*L).r[0]
        low = 1;
        high = i - 1;

        while (low <= high) {                        //��r[low..high]���۰������������λ��
            m = (low + high) / 2;                        //�۰�

            if (LT((*L).r[0].key, (*L).r[m].key)) {    //������ڵͰ���
                high = m - 1;
            } else {                                //������ڸ߰���
                low = m + 1;

            }

        }
            
or(j=i-1; j>=high+1; --j)                    //��¼���� 
            (* L) . r [ j+1]  =  (*L ) .r[j]; {
          
        }
(*L).r[high+1] = (*L).r[0];                    //���� 
    }  
}

#endif
