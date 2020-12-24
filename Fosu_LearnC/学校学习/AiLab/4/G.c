#include <stdio.h>
int main()
{
    double a, tol;
    int m, d, cop = 0;
    scanf("%lf %d %d %d", &a, &m, &d, &cop);
    if (m == 11 && d == 11)
        tol = a * 0.7;
    if (m == 12 && d == 12)
        tol = a * 0.8;
    if (cop == 1 && tol > 50)
        tol -= 50;
    else if (cop == 1 && tol <= 50)
        tol = 0;
    printf("%.2lf", tol);
    return 0;
}