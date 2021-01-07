#include <stdio.h>
int main()
{
    double a[4][5], (*p)[5] = a;
    int i, j;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 5; j++)
            scanf("%lf", *(p + i) + j);
    void average(double(*)[]);
    average(p);
    void findLost(double(*)[]);
    findLost(p);
    void findGood(double(*)[]);
    findGood(p);
}
void average(double (*p)[5])
{
    int i;
    double sum;
    for (i = 0; i < 4; i++)
        sum += *(*(p + i));
    printf("Average of course 1: %.1f\n", sum / 4);
}
void findLost(double (*p)[5])
{
    int i, j, fail[4] = {0}, cnt;
    double sum;
    printf("More than 2 failed courses:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0, cnt = 0; j < 5; j++)
        {
            if (*(*(p + i) + j) < 60)
                cnt++;
        }
        if (cnt >= 2)
            fail[i] = 1;
    }
    for (i = 0; i < 4; i++)
    {
        sum = 0;
        if (fail[i] == 1)
        {
            for (j = 0; j < 5; j++)
                sum += *(*(p + i) + j);
            printf("No %d: %.1f %.1f %.1f %.1f %.1f average: %.1f\n", i + 1, *(*(p + i) + 0), *(*(p + i) + 1), *(*(p + i) + 2), *(*(p + i) + 3), *(*(p + i) + 4), sum / 5);
        }
    }
}
void findGood(double (*p)[5])
{
    int i, j, good[4] = {0}, cnt;
    double sum, avr[4];
    printf("Average score >=90 or all courses >=85:\n");
    for (i = 0; i < 4; i++)
    {
        sum = 0;
        for (j = 0, cnt = 0; j < 5; j++)
        {
            if (*(*(p + i) + j) >= 85)
                cnt++;
            sum += *(*(p + i) + j);
        }
        avr[i] = sum / 5;
        if (cnt == 5 || avr[i] >= 90)
            good[i] = 1;
    }
    for (i = 0; i < 4; i++)
        if (good[i] == 1)
        {
            for (j = 0; j < 5; j++)
                sum += *(*(p + i) + j);
            printf("No %d: %.1f %.1f %.1f %.1f %.1f average: %.1f\n", i + 1, *(*(p + i) + 0), *(*(p + i) + 1), *(*(p + i) + 2), *(*(p + i) + 3), *(*(p + i) + 4), avr[i]);
        }
}
