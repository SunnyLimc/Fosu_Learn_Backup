#include <stdio.h>
#define PI 3.1415926
int main()
{
    double r, h;
    scanf("%lf,%lf", &r, &h);
    printf("%lf\n", PI * r * 2);
    printf("%lf\n", PI * r * r);
    printf("%lf", PI * r * r * h);
    return 0;
}
