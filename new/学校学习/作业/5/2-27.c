#include <stdio.h>
int main()
{
    int n, sum;
    int i, j, k;
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        for (j = 1, sum = 0; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (i == sum)
        {
            printf("%d=", i);
            for (j = 1; j < i; j++)
            {
                if (i % j == 0)
                {
                    printf("%d+", j);
                }
            }
            printf("\b \n");
        }
    }
    return 0;
}