#include <stdio.h>
int main()
{
    int i, j;
    double sum = 0, tmp = 1;
    for (i = 1; i <= 63; i++)
    {
        tmp *= 2;
        sum += tmp;
    }
    printf("%lf", sum);
    return 0;
}