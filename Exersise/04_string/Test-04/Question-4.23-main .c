#include <stdio.h>
#include "../../../Algorithms/03_stack_queue/01 SequenceStack/SequenceStack.c"//**03_stack_queue**//
#include "../../../Algorithms/04_string/03 BlockChainString/BlockChainString.c"//**04_string**//

/* Funcԭ�� */
Status Algo_4_23(LString T);

int main(int argc, char *argv[])
{
	char *t = "abcdefgfedcba";
	LString T;

	StrAssign_L(&T, t);
	printf("T = ");
	StrPrint_L(T);
	printf("\n\n");

	Algo_4_23(T) ? printf("T�ǶԳƴ�!") : printf("T�ǷǶԳƴ�!!");
	printf("\n\n");

	return 0;
}

/*������������������������
����4.23���жϴ��Ƿ�ԳƩ�
������������������������*/
/* ������ջ�Ĳ�����ʵ�ִ�Func��ջ������Ԫ�ض���Ϊchar */
Status Algo_4_23(LString T)
{
	int i, j, m;
	SqStack S;
	SElemType_Sq e;
	Chunk *p;

	if (!(T.curlen)) {
		return OK;
	}

	InitStack_Sq(&S);
	m = T.curlen / 2;

	for (i = 1, p = T.head, j = 0; i <= m; i++) {
		Push_Sq(&S, p->ch[j]);
		j = (j + 1) % CHUNKSIZE;
		if (!j) {
			p = p->next;
		}
	}

	if (T.curlen % 2) {				//����Ϊ����������һ���ַ�
		i++;
		j = (j + 1) % CHUNKSIZE;
		if (!j) {
			p = p->next;
		}
	}

	while (!StackEmpty_Sq(S) && i <= T.curlen) {
		Pop_Sq(&S, &e);
		if (e != p->ch[j]) {
			return ERROR;
		}
		i++;
		j = (j + 1) % CHUNKSIZE;
		if (!j) {
			p = p->next;
		}
	}

	if (StackEmpty_Sq(S) && i > T.curlen) {
		return OK;
	}
}
