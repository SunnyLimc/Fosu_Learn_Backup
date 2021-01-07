#include <stdio.h>
int main()
{
    int m, n, a[10][10], i, j, tmp;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < n; i++)
        for (j = 0; j < i; j++)
        {
            tmp = a[j][i];
            a[i][j] = a[j][i];
            a[j][i] = tmp;
        }
        