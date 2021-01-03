#include <stdio.h>
#include <math.h>

int main(void)

{

    int i, j;

    long long int sum, item;

    sum = 0;

    item = 1;

    for (i = 1; i <= 10; i++)
    {
        item = pow(i, i);
        sum += item;
    }

    printf("sum is:%d\n", sum);

    return 0;
}