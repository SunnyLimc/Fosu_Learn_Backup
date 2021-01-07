#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main()
{
    double a;
    scanf("%lf", &a);
    printf("%.3lf", (double)4 / 3 * PI * a * a * a);
    return 0;
}