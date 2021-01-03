#include <stdio.h>
int main()
{
    int num[6][6], n, i, j, sum;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &num[i][j]);

    for (i = 0, sum = 0; i < 3; i++)
        sum += num[i][i];
    printf("%d");
    return 0;
}