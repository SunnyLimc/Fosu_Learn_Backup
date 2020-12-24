#include <stdio.h>
#include <math.h>

int main()
{
    int h1, m1, s1, h2, m2, s2, time1, time2, time;
    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);
    time1 = h1 * 3600 + m1 * 60 + s1;
    time2 = h2 * 3600 + m2 * 60 + s2;
    time = abs(time1 - time2);
    h1 = time / 3600;
    m1 = time / 60 % 60;
    s1 = time % 60;
    printf("%02d:%02d:%02d", h1, m1, s1);
    return 0;
}