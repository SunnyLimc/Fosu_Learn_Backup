//输出前十行杨辉三角
#include <stdio.h>
#define N 10
int main()
{
    int a[N + 1], b[N + 1];
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j == i || j == 1)
                    a[j] = 1;
                else
                    a[j] = b[j - 1] + b[j];
                printf("%d ", a[j]);
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                if (j == i || j == 1)
                    b[j] = 1;
                else
                    b[j] = a[j - 1] + a[j];
                printf("%d ", b[j]);
            }
            printf("\n");
        }
    }
}