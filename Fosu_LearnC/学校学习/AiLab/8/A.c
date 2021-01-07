#include <stdio.h>
int main()
{
    float a, sum[5] = {0};
    int i, t = 0;
    for (i = 0; i < 25; i++)
    {
        t++;
        scanf("%f", &a);
        if (i / 5 == 0)
        {
            printf("%.1f ", a);
            sum[0] += a;
        }
        if (i / 5 == 1)
        {
            printf("%.1f ", a);
            sum[1] += a;
        }
        if (i / 5 == 2)
        {
            printf("%.1f ", a);
            sum[2] += a;
        }
        if (i / 5 == 3)
        {
            printf("%.1f ", a);
            sum[3] += a;
        }
        if (i / 5 == 4)
        {
            printf("%.1f ", a);
            sum[4] += a;
        }
        if (t % 5 == 0)
            printf("%.1f\n", sum[i / 5]);
    }
}