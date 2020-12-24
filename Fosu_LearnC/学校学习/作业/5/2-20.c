#include <stdio.h>
#include <math.h>
int main()
{
    int n, b, s, g, i, cnt = 0;
    scanf("%d", &n);
    if (n <= 999 && n >= 100)
        ;
    else if (n > 999)
    {
        printf("Too large!");
        return 0;
    }
    else
        return 0;
    for (i = 100; i <= n; i++)
    {
        b = i / 100 % 10;
        s = i / 10 % 10;
        g = i / 1 % 10;
        if (i == pow(g, 3) + pow(s, 3) + pow(b, 3))
        {
            printf("%12d\n", i);
            cnt++;
        }
    }
    printf("Total is %d", cnt);
    return 0;
}