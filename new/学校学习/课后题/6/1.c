//筛选法求100以内素数
#include <stdio.h>
#include <math.h>
#define N 100
int main()
{
    int i, j, a[101] = {0};
    for (i = 2; i <= sqrt(N); i++)
    {
        for (j = i + 1; j <= N; j++)
        {
            if (a[j] == 1)
                continue;
            if (j % i == 0)
                a[j] = 1;
        }
    }
    for (i = 1; i <= 100; i++)
        if (a[i] != 1)
            printf("%d ", i);
}