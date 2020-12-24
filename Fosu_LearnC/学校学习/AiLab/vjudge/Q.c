#include <stdio.h>
#include <math.h>
#define max(a, b) a > b ? a : b;
int main()
{
    long long int n, i, man = 0, che;
    double a, tmp, euc;
    scanf("%lld", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &a);
        if (i == 0)
            che = a;
        if (a < 0)
            tmp = -a;
        else
            tmp = a;
        euc += tmp * tmp;
        man += (int)tmp;
        che = (int)max(tmp, che);
    }
    printf("%lld\n%.15lf\n%lld", man, sqrt(euc), che);
}