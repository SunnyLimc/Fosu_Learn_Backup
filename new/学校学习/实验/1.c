#include <stdio.h>
int main()
{
    int i, a, n, tmp, max;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            scanf("%d", &max);
            tmp = i;
        }
        else
        {
            scanf("%d", &a);
            if (a > max)
            {
                max = a;
                tmp = i;
            }
        }
    }
    printf("%d %d", max, tmp);
}