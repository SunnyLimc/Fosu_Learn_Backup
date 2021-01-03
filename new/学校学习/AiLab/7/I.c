#include <stdio.h>
int main()
{
    int i, j, m, n, min;
    scanf("%d %d", &m, &n);
    int a[100];
    for (i = 0; i < m + n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < m + n; i++)
        for (min = a[i], j = i; j < m + n; j++)
            if (a[j] < min)
            {
                min = a[j];
                a[j] = a[i];
                a[i] = min;
            }
    for (i = 0; i < m + n; i++)
        printf("%d ", a[i]);
}