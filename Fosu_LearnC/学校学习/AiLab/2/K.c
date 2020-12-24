#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, p;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("circumference=%.2lf ", a + b + c);
    p = (a + b + c) / 2;
    printf("area=%.2lf", sqrt(p * (p - a) * (p - b) * (p - c)));
    return 0;
}