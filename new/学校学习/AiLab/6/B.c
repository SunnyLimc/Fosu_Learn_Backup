#include <stdio.h>
int main()
{
    double a, b, c, d, e;
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
    printf("%.2lf", (a + b + c + d + e) / 5);
}