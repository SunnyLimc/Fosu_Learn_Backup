#include <stdio.h>
int main()
{
    int n, i, j, a[51], t;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &t);
    a[n] = t;
    for (i = 0; i <= n; i++)
        if (t < a[i])
        {
            for (j = n; j > i; j--)
                a[j] = a[j - 1];
            a[i] = t;
            break;
        }
    for (i = 0; i < n + 1; i++)
        printf("%d ", a[i]);
}
