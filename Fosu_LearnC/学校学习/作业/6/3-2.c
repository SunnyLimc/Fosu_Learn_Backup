#include <stdio.h>
int main()
{
    int num[6][6], m, i, j, sum;

    scanf("%d", &m);

    for (i = 0; i < m; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &num[i][j]);

    for (i = 0, sum = 0; i < m; i++)
        sum += num[i][i];
    printf("sum=%d", sum);
    return 0;
}