#include <stdio.h>
int main()
{
    int n, i, j, ln;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("Failure");
        return 0;
    }

    for (i = 1; i <= n; i += 2)
    {
        ln++;
        for (j = 0; j < ((n + 1) / 2 - ln); j++)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    ln = 0;
    for (i = 1; i <= n; i += 2)
    {
        ln++;
        for (j = 0; j < ln; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= n - i - 2; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}