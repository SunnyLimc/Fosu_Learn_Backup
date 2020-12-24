#include <stdio.h>
int main()
{
    float a, b, c;
    scanf("%f,%f,%f", &a, &b, &c);
    if (a + b >= c && a + c >= b && b + c >= a)
    {
        if (a == b && b == c)
        {
            printf("equilateral triangle");
        }
        else if (a == b || b == c || a == c)
        {
            printf("isosceles triangle");
        }
        else
        {
            printf("ordinary triangle");
        }
    }
    else
    {
        printf("cannot form a triangle");
    }
    return 0;
}
