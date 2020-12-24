#include <stdio.h>
int main()
{
    int num[6][6], n, ln, lnt, sum;
    scanf("%d", &n);
    n--;

    if (n >= 2 && n <= 6)
        ;
    else
        return 0;

    ln = lnt = 0;
    while (ln <= n)
    {
        scanf("%d", &num[ln][lnt]);
        if (lnt == n)
        {
            ln++;
            lnt = 0;
            continue;
        }
        lnt++;
    }
    for (ln = 0; ln <= n; ln++)
    {
        sum += num[ln][ln];
    }
    printf("sum=%d", sum);
    return 0;
}