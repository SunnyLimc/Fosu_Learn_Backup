#include <stdio.h>
int main()
{
    long long int i, n, cnt, a[60];
    while (1)
    {
        cnt = 0;
        scanf("%lld", &n);
        if (n == 0)
            break;
        for (i = 1; i <= n; i++)
        {
            if (i <= 4)
            {
                a[i] = cnt = i;
            }
            else
            {
                a[i] = cnt = a[i - 1] + a[i - 3];
            }
        }
        printf("%lld\n", cnt);
    }
}