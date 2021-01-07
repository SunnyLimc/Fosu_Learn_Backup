#include <stdio.h>
int main()
{
    int n, i;
    double sum = -0.000002, fz = 2, fm = 1, tmp = 1;
    printf("Please input n : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += (fz / fm);
        tmp = fm;
        fm = fz;
        fz = tmp + fz;
    }
    printf("sum is %9.6f\n", sum);
    return 0;
}