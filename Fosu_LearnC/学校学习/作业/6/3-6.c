#include <stdio.h>
int main()
{
    int num[50][50], n, ln, lnt, sum, tmp, cnt, dCnt;

    scanf("%d", &n);
    n--;
    if (n >= 1 && n <= 20)
        ;
    else
        return 0;
    n++;

    ln = lnt = 0;
    while (ln < n)
    {
        scanf("%d", &num[ln][lnt]);
        if (lnt == n - 1)
        {
            ln++;
            lnt = 0;
            continue;
        }
        lnt++;
    }

    for (ln = 0, cnt = 0, dCnt = 0; ln < n; ln++)
    {
        for (lnt = 0; lnt < ln; lnt++)
        {
            if (num[ln][lnt] == num[lnt][ln])
            {
                cnt++;
            }
            dCnt++;
        }
    }

    if (dCnt == cnt)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}