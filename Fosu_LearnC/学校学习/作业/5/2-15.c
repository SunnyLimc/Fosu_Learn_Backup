#include <stdio.h>
int main()
{
    long int m, n, nSum, mSum, nmSum, A, C;
    int i;
    scanf("%d,%d", &n, &m);
    if (m >= 0 && n >= m && n <= 20)
        ;
    else
        return 0;
    for (i = 1, mSum = 1; i <= m; i++)
    {
        mSum *= i;
    }
    for (i = 1, nSum = 1; i <= n; i++)
    {
        nSum *= i;
    }
    for (i = 1, nmSum = 1; i <= (n - m); i++)
    {
        nmSum *= i;
    }
    printf("%ld %ld", nSum / nmSum, nSum / (nmSum * mSum));
    return 0;
}