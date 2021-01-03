#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, delta;
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = b * b - 4 * a * c;
    if (delta == 0)
        printf("x=%.2lf", -b / 2 * a);
    else if (delta > 0)
        printf("x1=%.2lf x2=%.2lf", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
    return 0;
}