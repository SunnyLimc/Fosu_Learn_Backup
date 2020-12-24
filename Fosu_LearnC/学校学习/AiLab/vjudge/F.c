#include <stdio.h>
int main()
{
    int c, n, score = 0, a[1010] = {0}, tmp, rCnt, i;
    scanf("%d %d", &c, &n);
    while (n--)
    {
        rCnt = 0;
        scanf("%d", &tmp);
        a[tmp]++;
        for (i = 1; i <= c; i++)
            if (a[i] >= 1)
                rCnt++;
        if (rCnt == c)
        {
            score++;
            for (i = 1; i <= c; i++)
                a[i]--;
        }
    }
    printf("%d", score);
}