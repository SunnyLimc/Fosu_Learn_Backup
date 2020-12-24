#include <stdio.h>
int main()
{
    int i;
    float sum = 0, a, b, tmp;
    for (i = 1, a = 2, b = 1; i <= 20; i++)
    {
        sum += a / b;
        {
            a = a + b;
            b = a - b;
        }
    }
    printf("%f", sum);
}