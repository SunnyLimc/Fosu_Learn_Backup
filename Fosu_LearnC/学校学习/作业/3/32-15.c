#include <stdio.h>
int main()
{
    int s = 0, m = 0, h = 0, x;
    x = s;
    scanf("%d", &s);
    h = s / 3600;
    m = s / 60;
    s = s % 60;
    m = m % 60;
    printf("%ds=%d:%d:%d!\n", x, h, m, s);
    return 0;
}