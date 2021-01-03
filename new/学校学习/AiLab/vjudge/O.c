#include <stdio.h>
int main()
{
    long long int i, n, cnt, a[60];
    while (scanf("%lld", &n) != EOF)
    {
        cnt = 0;
        for (i = 1; i <= n; i++)
        {
            if (i <= 3)
            {
                a[i] = cnt = i;
            }
            else
            {
                a[i] = cnt = a[i - 1] + a[i - 2];
            }
        }
        printf("%lld\n", cnt);
    }
}