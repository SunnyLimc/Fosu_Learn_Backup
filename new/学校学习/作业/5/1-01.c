#include <stdio.h>
int main()
{
    int n, i;
    double sum = 1;
    scanf("%d", &n);
    if (n % 2 == 0)
        ;
    else
        return 0;
    if (n < 2)
    {
        sum = 1;
    }
    else
    {
        for (i = 2; i <= n; i += 2)
        {
            sum += (1 / (double)i);
        }
    }
    printf("s=%.5f", sum);
}