#include <stdio.h>

int main()
{
    int y, m, d, i, bigMonF = 0, rYearF = 0;
    int bigMon[7] = {1, 3, 5, 7, 8, 10, 12};
    scanf("%d-%d-%d", &y, &m, &d);
    if (y >= 1900 && y <= 2035)
        ;
    else
        return 0;
    for (i = 0; i < 7; i++)
    {
        if (m == bigMon[i])
        {
            bigMonF = 1;
        }
    }
    if (y % 400 == 0 || y % 100 != 0 && y % 4 == 0)
    {
        rYearF = 1;
    }
    if (d == 31 && m == 12)
    {
        y++;
        m = 1;
        d = 1;
    }
    else if (d == 30 && bigMonF == 0)
    {
        m++;
        d = 1;
    }
    else if (d == 31 && bigMonF == 1)
    {
        m++;
        d = 1;
    }
    else if (m == 2 && d == 29 && rYearF == 1)
    {
        m++;
        d = 1;
    }
    else if (m == 2 && d == 28 && rYearF == 0)
    {
        m++;
        d = 1;
    }
    else
    {
        d++;
    }
    printf("%d-%d-%d", y, m, d);
    return 0;
}