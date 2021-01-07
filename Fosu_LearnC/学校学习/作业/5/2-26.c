#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, k, cnt = 0;
    int n, nm;
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        for (j = 1, k = 0; j <= i; j++)
        {
            if (i % j == 0)
            {
                k++;
            }
        }
        if (k == 2)
        {
            printf("%-4d", i);
            cnt++;
            if (cnt % 10 == 0)
            {
                printf("\n");
            }
        }
    }
    printf("\nThe total is %d", cnt);
    return 0;
}