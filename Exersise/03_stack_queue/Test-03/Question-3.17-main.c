#include <stdio.h>
#include "../../../Algorithms/01_abstract/Status.h"      //**01_abstract**//
#include "../../../Algorithms/03_stack_queue/01 SequenceStack/SequenceStack.c"  //**03_stack_queue**//

/* Funcԭ�� */
Status Algo_3_17(char *s);

int main(int argc, char *argv[])
{
    char *s = "a+b-c&c-b+a@";

    printf("�ж����� %s �Ƿ�Ϲ�...\n\n", s);
    if (Algo_3_17(s)) {
        printf("������������!\n");
    } else {
        printf("���в���������!!\n");

    }

    printf("\n");
    
return 0;
}

/*����������������������������������������������������������������������
����3.17���ж����������Ƿ�Ϊ'����1&����2'��ģʽ��������2Ϊ����1������ ��
����������������������������������������������������������������������*/
Status Algo_3_17(char *s)
{
    SqStack S;
    SElemType_Sq e;
    int i;
    
InitStack_Sq(&S);
    i = 0;
        
hile(s[i]!='@' && s[i]!='&')
    {          Push_Sq(&S, s[i]);
        i++;
    }
    
if(s[i]!='@')
    {        i++;
        while(!StackEmpty_Sq(S) && s[i]!='@')
        {        Pop_Sq(&S, &e);
            if(s[i]!=e)
                r eturn  E RR {OR;
            i++;    
        }}
            
    }
    
if(StackEmpty_Sq(S) && s[i]=='@')            //ջ is empty�������з����� 
        r eturn OK;   {
    else
    }     ret {urn ERROR;
}
    }
