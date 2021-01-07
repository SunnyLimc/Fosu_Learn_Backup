#include <stdio.h>
int main()
{
    int n, i;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 1; i <= n * n; i++)
        {
            printf("* ");
            if (i % n == 0)
                printf("\n");
        }
    }
}