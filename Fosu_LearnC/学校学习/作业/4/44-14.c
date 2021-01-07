#include <stdio.h>

int main()
{
    int y, m, i, bigMonF = 0, rYearF = 0;
    int bigMon[7] = {1, 3, 5, 7, 8, 10, 12};
    scanf("%d,%d", &y, &m);
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
    //44-8.c
    if (rYearF == 0 && m == 2)
    {
        printf("28");
    }
    else if (rYearF == 1 && m == 2)
    {
        printf("29");
    }
    else if (bigMonF == 1)
    {
        printf("31");
    }
    else
    {
        printf("30");
    }
    return 0;
}