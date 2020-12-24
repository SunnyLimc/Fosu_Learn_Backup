#include <stdio.h>
struct Date
{
    int year, month, day;
};
typedef struct Date Riqi;
Riqi date;
int main()
{
    int dMonth = 0, rYear = 0, i;
    int calculate();
    scanf("%d,%d,%d", &date.year, &date.month, &date.day);
    calculate();
}
int rMonth(int month)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        return 1;
    else
        return 0;
}
int twoMonth(int year)
{
    if ((date.year % 4 == 0 && date.year % 100 != 0) || date.year % 400 == 0)
        return 1;
    else
        return 0;
}
int calculate()
{
    int day = 0, i;
    for (i = 1; i < date.month; i++)
    {
        if (i == 2 && twoMonth(date.year) == 1)
            day += 29;
        else if (i == 2 && twoMonth(date.year) == 0)
            day += 28;
        if (i != 2 && rMonth(i) == 1)
            day += 31;
        else if (i != 2 && rMonth(i) == 0)
            day += 30;
    }
    day += date.day;
    printf("%d/%d is the %dth day in %d.", date.month, date.day, day, date.year);
}