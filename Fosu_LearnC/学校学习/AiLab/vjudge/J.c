#include <stdio.h>
int main()
{
    int n, i, sum;
    while (scanf("%d", &n) != EOF)
    {
        sum = 1;
        for (i = 0; i < n - 1; i++)
            sum = (sum + 1) * 2;
        printf("%d\n", sum);
    }
}