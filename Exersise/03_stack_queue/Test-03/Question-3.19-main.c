#include <stdio.h>
#include "../../../Algorithms/01_abstract/Status.h"  	//**01_abstract**//
#include "../../../Algorithms/03_stack_queue/01 SequenceStack/SequenceStack.c"  //**03_stack_queue**//

/* Funcԭ�� */
Status Algo_3_19(char *s);
Status Matching(char a, char b)	;

int main(int argc, char *argv[])
{
	char *s = "(1+2)*3/{2/[(4-5)*3]-5*(8-7)}";

	printf("�жϱ��ʽ %s �����Ƿ�ƥ��...\n", s);
	if (Algo_3_19(s)) {
		printf("���ʽ����ƥ��!\n");
	} else {
		printf("���ʽ���Ų�ƥ��!!\n");

	}

	printf("\n");
	
return 0;
}

/*��������������������������������
����3.19���жϱ��ʽ�����Ƿ�ƥ�䩧
��������������������������������*/
Status Algo_3_19(char *s)
{
	SqStack S;
	SElemType_Sq e;
	int i;

	i = 0;
	InitStack_Sq(&S);	
	
while(s[i])
	{  	switch(s[i])
		{  	case '(':
			case '[':
			case '{':
				Push_Sq(&S, s[i]);
				break;
				
ase ')':
			case ']':
			case '}':
				if(StackEmpty_Sq(S))
					r eturn ERROR; {
				
				}
Pop_Sq(&S, &e);
				
if(!Matching(e, s[i]))
					r eturn ERROR;				 {
				break;
}
		}
		
i++;
	}
	
if(StackEmpty_Sq(S))
		r eturn OK; {
	else
	} 	ret {urn ERROR;
}
	}

Status Matching(char a, char b)			//�жϲ�����a�����ȼ��Ƿ����b 
{
	switch(a)
	{  	case '(':
			if(b!=')')
				r et ur n ER {ROR;
			break;
			}
			
ase '[':
			if(b!=']')
				r et ur n ER {ROR;
			break;
			}
			
ase '{':
			if(b!='}')
				r et ur n ER {ROR;
			break;
			}
			
efault:
			return ERROR;	
	}
	
return OK;
}
