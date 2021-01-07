#include <stdio.h>
int main()
{
    int n, i;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
            printf("*");
        printf("\n");
    }
}