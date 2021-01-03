#include <stdio.h>
#include <math.h>
int main()
{
    double delta, a, b, c, i, j;
    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
    {
        if (a == 0)
        {
            printf("Not quadratic equation");
            return 0;
        }
        delta = b * b - 4 * a * c;
        i = -b / (2 * a);
        j = sqrt(delta) / (2 * a);
        if (delta == 0)
            printf("x1=x2=%.2lf\n", i);
        else if (delta > 0)
            printf("x1=%.2lf;x2=%.2lf\n", i - j, i + j);
        else
        {
            j = sqrt(-delta) / (2 * a);
            if (i == 0)
                printf("x1=0.00-%.2lfi;x2=0.00+%.2lfi\n", j, j);
            else
                printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", i, j, i, j);
        }
    }
}
