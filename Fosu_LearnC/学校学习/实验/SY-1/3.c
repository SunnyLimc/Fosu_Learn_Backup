#include <stdio.h>
#include <math.h>

int main()
{
    double a, n, p;
    scanf("%lf,%lf,%lf", &a, &n, &p);
    a = pow(1 + p, n) * a - a;
    printf("Acc=%.3lf", a);
    return 0;
}
