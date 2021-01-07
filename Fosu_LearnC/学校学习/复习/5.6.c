//求1到20的阶乘
#include <stdio.h>
int main()
{
    double sum = 0, tmp;
    for (int i = 1; i <= 20; i++)
    {
        tmp = 1;
        for (int j = i; j > 1; j--)
            tmp *= j;
        sum += tmp;
    }
    printf("%.lf", sum);
}