#include <stdio.h>
#include <stdlib.h>

void main()
{
    float l, s, r;
    scanf("%f", &r);
    l = 3.14 * 2 * r;
    s = 3.14 * r * r;
    printf("Area is %f\n", s);
    printf("Circumference is %f\n", l);
}