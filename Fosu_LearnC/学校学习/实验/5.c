#include <stdio.h>
#include <math.h>
int main()
{
    double result(double, double, double);
    double a, b, c;
    scanf("%lf,%lf,%lf", &a, &b, &c);
    printf("%f", result(a, b, c));
}
double result(double a, double b, double c)
{
    double p, s;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}