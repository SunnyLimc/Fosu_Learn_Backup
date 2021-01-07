#include <stdio.h>
int main()
{
    int i, j, n, m, tmp;
    scanf("%d %d", &n, &m);
    int a1[10][10];
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &a1[j][i]);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", a1[i][j]);
        printf("\n");
    }
    return 0;
}