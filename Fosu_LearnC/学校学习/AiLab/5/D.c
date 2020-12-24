#include <stdio.h>
int main()
{
    int n, i, j;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - i; j++)
            {
                printf("* ");
                if (j == n - i - 1)
                    printf("\n");
            }
        }
    }
}