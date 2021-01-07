//输出日期对应的天数
#include <stdio.h>
int bigMon(int m)
{
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        return 1;
    return 0;
}
int runY(int y)
{
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        return 1;
    return 0;
}
int main()
{
    int y, m, d, day = 0;
    scanf("%d-%d-%d", &y, &m, &d);
    for (int i = 1; i <= m - 1; i++)
    {
        if (i == 2)
            if (runY(y))
                day += 29;
            else
                day += 28;
        else if (bigMon(i))
            day += 31;
        else
            day += 30;
    }
    printf("%d", day + d);
}