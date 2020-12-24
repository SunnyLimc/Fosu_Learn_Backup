#include <stdio.h>
#include <math.h>

int main()
{
    double x, y;
    scanf("%lf", &x);
    if (x == 0)
    {
        y = 1.0;
    }
    else if (x < 0)
    {
        y = 2 * x + 1;
    }
    else if (x > 0)
    {
        y = x * x * x + 1;
    }
    printf("%.2f\n", y);
    return 0;
}