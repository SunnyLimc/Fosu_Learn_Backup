#include <stdio.h>
int main()
{
    long long int a, b, n, tol, t;
    scanf("%lld", &t);
    while (t--)
    {
        scanf("%lld %lld %lld", &n, &a, &b);
        if (n == 1)
            tol = a;
        else if (a * 2 <= b)
            tol = n * a;
        else
        {
            if (n % 2 == 0)
                tol = (n / 2) * b;
            else
                tol = ((n - 1) / 2) * b + a;
        }
        printf("%lld\n", tol);
    }
}