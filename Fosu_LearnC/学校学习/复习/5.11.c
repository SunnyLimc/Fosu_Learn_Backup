//一个球从100m落下，每次反弹为上一次高度的一半，求在第10次时多高，反弹多高。
#include <stdio.h>
int main()
{
    double h = 100, dis;
    for (int i = 0; i < 10; i++)
    {
        dis += h;
        h /= 2;
        dis += h;
    }
    printf("%lf %lf", dis - h, h);
}