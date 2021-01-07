#include <stdio.h>
int main()
{
    int n, i, j;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j <= (n - i) * 2; j++)
            {
                printf(" ");
            }
            for (j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}