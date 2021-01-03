#include <stdio.h>
int main()
{
    int n, sum;
    int i;
    scanf("%d", &n);
    for (i = 1, sum = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}