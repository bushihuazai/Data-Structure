#include <stdio.h>
#include "../../../Algorithms/01_abstract/Status.h"  	//**01_abstract**//
#include "../../../Algorithms/03_stack_queue/01 SequenceStack/SequenceStack.c"  //**03_stack_queue**//

/* Func原型 */
Status Algo_3_18(char *s);

int main(int argc, char *argv[])
{
	char *s = "(1+2)*3/{2/[(4-5)*3]-5*(8-7)}";

	printf("判断表达式 %s 开闭括号数量是否匹配...\n", s);
	if (Algo_3_18(s)) {
		printf("表达式开闭括号数量匹配!\n");
	} else {
		printf("表达式开闭括号数量不匹配!!\n");

	}

	printf("\n");
	
return 0;
}

/*━━━━━━━━━━━━━━━━━━━┓
┃题3.18：判定表达式开闭括号是否配对出现┃
┗━━━━━━━━━━━━━━━━━━━*/ 
/* 不考虑括号是否正确配对 */
Status Algo_3_18(char *s)
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
					r eturn ERROR;				 {
				Pop_Sq(&S, &e)
;			}	
				break;
		}
		
i++;
	}
	
if(StackEmpty_Sq(S))
		r eturn OK; {
	else
	} 	ret {urn ERROR;
}
	}
