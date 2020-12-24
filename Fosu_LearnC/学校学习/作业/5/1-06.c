#include <stdio.h>
int main()
{
    int m, n, i, j, lowF, bigF;
    scanf("%d,%d", &m, &n);
    if (m < n)
    {
        lowF = m;
        bigF = n;
    }
    else
    {
        lowF = n;
        bigF = m;
    }
    for (i = lowF;; i--)
    {
        if (m % i == 0 && n % i == 0)
            break;
    }
    for (j = bigF;; j++)
    {
        if (j % m == 0 && j % n == 0)
            break;
    }
    printf("Greatest common divisor : %d\n", i);
    printf("Least/lowest common multiple : %d", j);
    return 0;
}