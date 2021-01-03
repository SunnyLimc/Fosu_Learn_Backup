#include <stdio.h>

int main()
{
    int i, j, ln = 1, n;
    scanf("%d", &n);
    for (; n >= 1; n--)
    {
        for (j = ln; j > 1; j--)
        {
            printf(" ");
        }
        for (i = (n - 1) * 2 + 1; i >= 1; i--)
        {
            printf("*");
        }
        ln++;
        printf("\n");
    }
    return 0;
}