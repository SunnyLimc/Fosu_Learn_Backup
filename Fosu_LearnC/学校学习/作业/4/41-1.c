#include <stdio.h>

int main()
{
    double l;
    double n1, n2, n4, n6, n10, n;
    scanf("%lf", &l);
    n1 = 100000 * 0.1;
    n2 = n1 + 100000 * 0.075;
    n4 = n2 + 200000 * 0.05;
    n6 = n4 + 200000 * 0.03;
    n10 = n6 + 400000 * 0.015;
    if (l < 100000)
    {
        n = l * 0.1;
    }
    else if (l <= 200000)
    {
        n = n1 + (l - 100000) * 0.075;
    }
    else if (l <= 400000)
    {
        n = n2 + (l - 200000) * 0.05;
    }
    else if (l <= 600000)
    {
        n = n4 + (l - 400000) * 0.03;
    }
    else if (l <= 1000000)
    {
        n = n6 + (l - 600000) * 0.015;
    }
    else if (l > 1000000)
    {
        n = n10 + (l - 1000000) * 0.01;
    }
    printf("%.lf", n);
    return 0;
}