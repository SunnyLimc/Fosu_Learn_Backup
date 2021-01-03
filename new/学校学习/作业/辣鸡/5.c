#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, tmp;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (a > c)
    {
        tmp = c;
        c = a;
        a = tmp;
    }
    if (b > c)
    {
        tmp = b;
        b = c;
        c = tmp;
    }
    printf("%d", c);
    return 0;
}