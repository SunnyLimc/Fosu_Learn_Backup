#include <stdio.h>
int main()
{
    int i, g, s, b;
    int result(int);
    for (i = 100; i <= 999; i++)
    {
        if (result(i) == i)
            printf("%d\n", i);
    }
}
int result(int m)
{
    int b, s, g;
    b = m / 100;
    s = m / 10 % 10;
    g = m % 10;
    if (g * g * g + s * s * s + b * b * b == m)
        return m;
    else
        return 0;
}