// 求1到100的和 加 1到100的平方的和 加 1到10 的倒数的和
#include <stdio.h>
int main()
{
    double sum = 0;
    for (int i = 1; i <= 100; i++)
        sum += i;
    for (int i = 1; i <= 50; i++)
        sum += (i * i);
    for (int i = 1; i <= 10; i++)
        sum += (double)1 / i;
    printf("%lf", sum);
}