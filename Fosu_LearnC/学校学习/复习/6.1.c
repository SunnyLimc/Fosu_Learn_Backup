//用筛选法求100以内素数
#include <stdio.h>
#include <math.h>
#define N 1000000
int main()
{
    int a[N + 1] = {0}, cnt = 0;
    for (int i = 2; i <= sqrt(N); i++)
    {
        for (int j = 3; j <= N; j++)
        {
            if (!a[j] && j != i)
                if (j % i == 0)
                    a[j] = 1;
        }
    }
    for (int i = 2; i <= N; i++)
        if (!a[i])
        {
            printf("%d ", i);
            cnt++;
        }
    printf("\n%d", cnt);
}