#include <stdio.h>
int main()
{
    int a, midNum, n, i, sum = 0;
    scanf("%d,%d", &a, &n);
    midNum = a;
    for (i = 1; i <= n; i++)
    {
        sum += midNum;
        midNum = midNum * 10 + a;
    }
    printf("%d+%d%d+...=%ld\n", a, a, a, sum);
    return 0;
}