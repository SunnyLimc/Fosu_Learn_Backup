#include <stdio.h>
#include <math.h>
int main()
{
    double a, n, p;
    scanf("%lf,%lf,%lf", &a, &n, &p);
    printf("Acc=%.3lf", a * pow(1 + p, n) - a);
    return 0;
}
