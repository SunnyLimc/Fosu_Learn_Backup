#include <stdio.h>
int main()
{
    int i, a[11], *max, *min, tmp;
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    max = min = a;
    for (i = 0; i < 10; i++)
    {
        if (a[i] > *max)
            max = &a[i];
        else if (a[i] < *min)
            min = &a[i];
    }
    tmp = *max;
    *max = a[9];
    a[9] = tmp;
    tmp = *min;
    *min = a[0];
    a[0] = tmp;
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
}