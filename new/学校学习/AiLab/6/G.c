#include <stdio.h>
int main()
{
    int a[50], tmp, i, j, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &a[n]);
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    for (i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
}