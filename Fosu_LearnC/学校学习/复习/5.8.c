// 输出所有的水仙花数
#include <stdio.h>
int main()
{
    int g, s, b;
    for (int i = 100; i < 1000; i++)
    {
        g = i % 10;
        s = i / 10 % 10;
        b = i / 100 % 10;
        if (g * g * g + s * s * s + b * b * b == i)
            printf("%d\n", i);
    }
}