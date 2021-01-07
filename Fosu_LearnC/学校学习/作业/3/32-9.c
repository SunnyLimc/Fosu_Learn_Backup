#include <stdio.h>
#define PI 3.141592653

int main()
{
    double r, h;
    scanf("%lf %lf", &r, &h);
    printf("%.2lf %.2lf %.2lf %.2lf", PI * 2 * r, PI * r * r, PI * r * 2 * h, PI * r * r * h);
    return 0;
}