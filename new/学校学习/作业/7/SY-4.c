#include <stdio.h>
int main()
{
    int m, n, i, j, a[10][10];
    int sum(int, int, int[][10]);
    scanf("%d,%d", &m, &n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("sum=%d", sum(m, n, a));
}
int sum(int m, int n, int a[][10])
{
    int sum = 0, i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            sum += a[i][j];
    return sum;
}