#include <stdio.h>
int main()
{
    int n, i, j;
    int a[30][30];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == i)
            {
                printf("1");
                a[i][j] = 1;
            }
            else if (j == 0)
            {
                printf("1 ");
                a[i][j] = 1;
            }
            else
                printf("%d ", a[i][j] = a[i - 1][j] + a[i - 1][j - 1]);
        }
        printf("\n");
    }
}
