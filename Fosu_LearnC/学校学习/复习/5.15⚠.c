//用二分法求下面方程在(-10,10)的根
#include <stdio.h>
#include <math.h>
double fres(double x)
{
    return (2 * x * x * x - 4 * x * x + 3 * x - 6);
}
int main()
{
    double l, r, mid;
    l = -10;
    r = 10;
    do
    {
        mid = (l + r) / 2;
        if (fres(l) * fres(mid) > 0)
            l = mid;
        else if (fres(r) * fres(mid) > 0)
            r = mid;
    } while (fabs(fres(mid)) > 1e-5);
    printf("%lf", mid);
}