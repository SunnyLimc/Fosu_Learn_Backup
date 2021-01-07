#include <stdio.h>
#include <math.h>
double main()
{
    double a, b, c, delta;
    int moret0(double, double, double);
    int equal0(double, double);
    int lesst0();
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = b * b - 4 * a * c;
    delta > 0 ? moret0(a, b, delta) : (delta == 0 ? equal0(a, b) : lesst0());
    return 0;
}
int lesst0()
{
    return 0;
}
int equal0(double a, double b)
{
    printf("x=%.2lf", -b / (2 * a));
    return 0;
}
int moret0(double a, double b, double delta)
{
    printf("x1=%.2lf x2=%.2lf", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
    return 0;
}