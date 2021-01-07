//写两个函数求最大公约数和最小公倍数
//尝试用nb的欧几里得
#include <stdio.h>
int swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int zdgysf(int a, int b)
{
    if (a < b)
        swap(&a, &b);
    int r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}
int zxgbsf(int zdgys, int a, int b)
{
    return (a * b / zdgys);
}
int main()
{
    int a, b, zdgys;
    scanf("%d %d", &a, &b);
    printf("zxgbs:%d\nzdgys:%d\n", zxgbsf(zdgys, a, b), zdgys = zdgysf(a, b));
}