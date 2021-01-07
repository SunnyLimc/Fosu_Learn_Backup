// 用牛顿迭代法求下面方程在1.5附近的根
#include <stdio.h>
#include <math.h>
double fres(double x)
{
    return (2 * x * x * x - 4 * x * x + 3 * x - 6);
}
double fpie(double x)
{
    return (6 * x * x - 8 * x + 3);
}
int main()
{
    double x, f, f1;
    x = 10000;
    do
    {
        x = x - (fres(x) / fpie(x));
    } while (fabs(fres(x)) > 1e-5);
    printf("%lf", x);
}