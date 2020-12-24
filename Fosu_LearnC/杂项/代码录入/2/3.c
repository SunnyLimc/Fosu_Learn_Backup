#include <stdio.h>
#include <math.h>
int main()
{
    int num[10], i, max;
    for (i = 0; i < 10; i++)
        scanf("%d", &num[i]);
    max = num[0];
    for (i = 0; i < 10; i++)
        if (num[i] > max)
            max = num[i];
    printf("%d", max);
    return 0;
}