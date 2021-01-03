#include <stdio.h>
int main()
{
    int num[10][10], n, ln, lnt;
    scanf("%d", &n);
    n--;
    if (n >= 3 && n <= 10)
        ;
    else
        return 0;
    for (ln = 0; ln <= n; ln++)
    {
        for (lnt = 0; lnt <= ln; lnt++)
        {
            if (ln == 0 || lnt == ln || lnt == 0)
            {
                num[ln][lnt] = 1;
            }
            else
            {
                num[ln][lnt] = num[ln - 1][lnt - 1] + num[ln - 1][lnt];
            }
        }
    }
    for (ln = 0; ln <= n; ln++)
    {
        for (lnt = 0; lnt <= ln; lnt++)
        {
            printf("%5d", num[ln][lnt]);
        }
        printf("\n");
    }
    return 0;
}