#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, delta, result1, result2;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    delta = b * b - 4 * a * c;
    result1 = (-b + sqrt(delta)) / (double)2 * a;
    result2 = (-b - sqrt(delta)) / (double)2 * a;
    printf("x1=%7.2lf\nx2=%7.2lf", result1, result2);
    return 0;
}