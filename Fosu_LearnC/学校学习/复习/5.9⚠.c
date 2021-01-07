// 求10000以内的所有完数
#include <stdio.h>
#include <math.h>
int main()
{
    int tmp;
    for (int i = 1; i <= 10000; i++)
    {
        tmp = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
                tmp += j;
        }
        if (tmp == i)
            printf("%d\n", i);
    }
}