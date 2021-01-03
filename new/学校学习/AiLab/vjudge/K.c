#include <stdio.h>
int main()
{
    int i, j, n, tmp;
    double a[100], sum;
    while (scanf("%d", &n) != EOF)
    {
        sum = 0;
        for (i = 0; i < n; i++)
            scanf("%lf", &a[i]);
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (a[j + 1] > a[j])
                {
                    tmp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = tmp;
                }
            }
        }
        for (i = 1; i < n - 1; i++)
            sum += a[i];
        printf("%.2lf\n", sum / (n - 2));
    }
}