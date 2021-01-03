#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    double a[50], tol = 0, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &a[i]);
        tol += a[i];
    }
    tol /= n;
    for (i = 0; i < n; i++)
        sum += pow((a[i] - tol), 2);
    sum = sqrt(sum / n);
    printf("%lf", sum);
}
