#include <stdio.h>
#define PI 3.1415926

int main()
{
    double r, c, s;
    scanf("%lf", &r);
    if (r >= 0)
        ;
    else
    {
        printf("Input error!");
        return 0;
    }
    s = PI * r * r;
    c = PI * r * 2;
    printf("%.2lf\n%.2lf", s, c);
    return 0;
}
