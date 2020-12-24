#include <stdio.h>
int main()
{
    int t1, h1, m1, t2, h2, m2, t, h, m;
    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);
    t1 = h1 * 3600 + m1 * 60;
    t2 = h2 * 3600 + m2 * 60;
    t = t1 + (t2 - t1) / 2;
    h = t / 3600;
    m = t / 60 % 60;
    printf("%02d:%02d", h, m);
}