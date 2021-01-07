#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, delta, result1, result2;
    scanf("%lf,%lf,%lf", &a, &b, &c);
    delta = b * b - 4 * a * c;
    result1 = (b + sqrt(delta)) / (double)2 * a;
    result2 = (-b + sqrt(delta)) / (double)2 * a;
    printf("x1=%lf,x2=%lf", result1, result2);
    return 0;
}