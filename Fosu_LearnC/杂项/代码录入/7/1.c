#include <stdio.h>
int main()
{
    int a, b, max, min;
    int maxf(int, int);
    int minf(int, int);
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    } //a与b交换的小技巧。为什么要交换ab？可参考C语言100题的第16题中的辗转相除法。
    max = maxf(a, b);
    min = minf(a, b);
    printf("%d %d", max, min);
    return 0;
}

int maxf(int a, int b)
{
    int r;
    r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}
//其实两个是差不多的
int minf(int a, int b)
{
    int r, n;
    n = a * b;
    r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return n / b;
}