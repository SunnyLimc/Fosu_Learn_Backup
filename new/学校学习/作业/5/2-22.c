#include <stdio.h>

int main()
{

    int x, tmp;
    double sum = 0;
    for (x = 1; x <= 51; x++)
    {
        tmp = (x - 1) * 2 + 1;
        if (x % 2 == 0)
        {
            tmp = -tmp;
        }
        sum += (double)1 / tmp;
    }
    printf("%lf", sum);
    return 0;
}