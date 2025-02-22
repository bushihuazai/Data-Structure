#include <stdio.h>
#include <stdlib.h>                            //提供malloc、realloc、free、exit原型
#include "../../../Algorithms/01_abstract/Status.h" //**01_abstract**//

/* Func原型 */
int Algo_3_25_1(int n);
int Algo_3_25_2(int n);

int main(int argc, char *argv[])
{
    printf("F( 5) = %d\n", Algo_3_25_1(5));
    printf("\n");
    printf("F(10) = %d\n", Algo_3_25_2(10));
    printf("\n");

    return 0;
}

/*━━━━━━━━━━┓
┃题3.25：递归计算F(n)┃
┗━━━━━━━━━━*/
/* 方法1：递归法求解，优点是算法简单 */
int Algo_3_25_1(int n)
{
    if (n < 0) {
        exit(ERROR);
    }

    if (!n) {
        return n + 1;
    } else {
        return n * Algo_3_25_1(n / 2);
    }
}

/*━━━━━━━━━━┓
┃题3.25：迭代计算F(n)┃
┗━━━━━━━━━━*/
/* 方法2：消除递归的迭代法，优点是存储了上一层计算数值 */
int Algo_3_25_2(int n)
{
    int a[n + 1];
    int i;

    if (n < 0) {
        exit(ERROR);
    }

    for (i = 1, a[0] = 1; i <= n; i++) {
        a[i] = i * a[i / 2];
    }

    return a[n];
}
