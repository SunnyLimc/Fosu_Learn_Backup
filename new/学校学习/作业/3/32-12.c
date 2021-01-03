#include <stdio.h>
#define PI 3.141592653

int main()
{
    double r = 1;
    while (r != 0)
    {
        scanf("%lf", &r);
        if (r != 0)
        {
            printf("%.3lf\n", ((double)4 / 3) * PI * r * r * r);
        }
    }
    return 0;
}