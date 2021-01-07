#include <stdio.h>
int main()
{
    int n, i, j;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (j < i)
                    printf(" ");
                else
                    printf("* ");
                if (j == n - 1)
                    printf("\n");
            }
        }
    }
}