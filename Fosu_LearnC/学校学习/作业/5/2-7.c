#include <stdio.h>

int main()
{
    int n, i;
    long long int midNum = 1, sum = 1;
    scanf("%d", &n);
    if (n >= 1 && n <= 9)
        ;
    else
        return 0;
    for (i = 2; i <= n; i++)
    {
        midNum = midNum * 10 + i;
        sum += midNum;
    }
    printf("%ld", sum);
    return 0;
}
