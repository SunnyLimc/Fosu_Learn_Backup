#include <stdio.h>
int main()
{
    int h, m, s, time;
    scanf("%d", &time);
    h = time / 3600;
    m = time / 60 % 60;
    s = time % 60;
    printf("%d %d %d", h, m, s);
}