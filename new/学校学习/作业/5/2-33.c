#include <stdio.h>
int main()
{
    int n;
    int i, j, k;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d*%d=%-3d", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}