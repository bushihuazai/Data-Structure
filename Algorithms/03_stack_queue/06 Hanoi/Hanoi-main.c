/**********************************
 *                                *
 * �ļ���: 03_stack_queue\06 Hanoi *
 *                                *
 * ��  ��: ��ŵ�����Functest     *
 *                               *
 **********************************/

#include "Hanoi.c"                        //**03_stack_queue**//    

int main(int argc, char **argv)
{
    int n;
    char x = 'x';
    char y = 'y';
    char z = 'z';

    n = 3;                                //Ϊ����ʱ�䣬n��Ҫ����10

    printf("��Ϊʾ��������Բ�̸���Ϊ %d ��������������...\n", n);

    hanoi(n, x, y, z);

    printf("\n");

    return 0;
}
