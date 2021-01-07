#include <stdio.h>

int main()
{
    int num[10][10], ln, lnt, tmp;
    ln = lnt = 0;
    while (ln < 4)
    {
        scanf("%d", &num[ln][lnt]);
        if (lnt == 3)
        {
            ln++;
            lnt = 0;
            continue;
        }
        lnt++;
    }
    for (ln = 0; ln < 4; ln++)
    {
        for (lnt = 0; lnt < ln; lnt++)
        {
            tmp = num[ln][lnt];
            num[ln][lnt] = num[lnt][ln];
            num[lnt][ln] = tmp;
        }
    }
    for (ln = 0; ln < 4; ln++)
    {
        for (lnt = 0; lnt < 4; lnt++)
        {
            printf("%d ", num[ln][lnt]);
        }
        printf("\n");
    }
    return 0;
}