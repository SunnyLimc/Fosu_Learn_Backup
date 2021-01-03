#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j, tmp[101], cnt;
    for (i = 1; i <= 100; i++)
        tmp[i] = i;
    while (scanf("%d", &n) != EOF)
    {
        int a[101];
        cnt = 0;
        memcpy(a, tmp, 101 * sizeof(int));
        for (i = 2; i <= n; i++)
        {
            for (j = i + 1; j <= n; j++)
            {
                if (j % i == 0)
                {
                    a[j] = 0;
                }
            }
        }
        for (i = 2; i <= n; i++)
            if (a[i] != 0)
                printf("%d ", a[i]);
            else
                cnt++;
        printf("\n%d\n", cnt);
    }
}