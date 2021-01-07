#include <stdio.h>
#include <math.h>

int main()
{
    double a1 = 0.015, a2 = 0.021, a3 = 0.0275, a5 = 0.03, ah = 0.0035;
    printf("%lf\n", 1000 * (1 + 5 * a5) - 1000);
    printf("%lf\n", 1000 * (1 + 2 * a2) * (1 + 3 * a3) - 1000);
    printf("%lf\n", 1000 * (1 + 3 * a3) * (1 + 2 * a2) - 1000);
    printf("%lf\n", 1000 * pow((1 + 1 * a1), 5) - 1000);
    printf("%lf\n", 1000 * pow((1 + ah / 4), 4 * 4) - 1000);
    return 0;
}