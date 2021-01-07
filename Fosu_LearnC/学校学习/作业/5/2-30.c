#include <stdio.h>

int main()
{
    int i, j, k, cnt = 0;
    for (i = 1; i <= 100; i++)
    {
        for (j = 1; j <= 100; j++)
        {
            for (k = 1; k <= 100; k++)
            {
                if (i + j + k == 100)
                    if (5 * i + 1 * j + 0.5 * k == 100)
                    {
                        printf("%d %d %d\n", i, j, k);
                        cnt++;
                    }
            }
        }
    }
    printf("The total is %d", cnt);
    return 0;
}