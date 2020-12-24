#include <stdio.h>

int main()
{
    int y, m, d, currentDay;
    scanf("%d,%d,%d", &y, &m, &d);
    switch (m)
    {
    case 1:
        currentDay = 1;
        break;
    case 2:
        currentDay = 32;
        break;
    case 3:
        currentDay = 59;
        break;
    case 4:
        currentDay = 90;
        break;
    case 5:
        currentDay = 120;
        break;
    case 6:
        currentDay = 151;
        break;
    case 7:
        currentDay = 181;
        break;
    case 8:
        currentDay = 212;
        break;
    case 9:
        currentDay = 243;
        break;
    case 10:
        currentDay = 273;
        break;
    case 11:
        currentDay = 304;
        break;
    case 12:
        currentDay = 334;
    }
    currentDay += d;
    if ((y % 400 == 0 || y % 100 != 0 && y % 4 == 0) && m > 2)
    {
        currentDay++;
    }
    printf("It is the %dth day.", currentDay);
    return 0;
}