//用递归方法求n阶勒让德多项式的值
#include <stdio.h>
double p(int n, int x)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else
        return ((2 * n - 1) * x - p((n - 1), x) - (n - 1) * p((n - 2), x)) / n;
}
int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    printf("%lf", p(n, x));
}