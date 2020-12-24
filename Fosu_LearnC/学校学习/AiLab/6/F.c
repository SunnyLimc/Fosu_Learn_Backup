#include <stdio.h>
int main()
{
    double a[7], sum = 0, tmp;
    int i, j;
    for (i = 0; i < 7; i++)
        scanf("%lf", &a[i]);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7 - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    for (i = 1; i < 6; i++)
    {
        sum += a[i];
    }
    printf("%.2lf", sum / 5);
}