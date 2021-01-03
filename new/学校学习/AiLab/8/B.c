#include <stdio.h>
int main()
{
    int n, m, i, j, a[10][10], x, y;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    scanf("%d %d", &x, &y);
    printf("%d", a[x - 1][y - 1]);
    return 0;
}