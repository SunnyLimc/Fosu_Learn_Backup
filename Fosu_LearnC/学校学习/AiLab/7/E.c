#include <stdio.h>
int main()
{
    int a[100], max, min, i, t;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
        scanf("%d", &a[i]);
    min = a[0];
    for (i = 0; i < t; i++)
        if (a[i] < min)
            min = a[i];
    max = a[0];
    for (i = 0; i < t; i++)
        if (a[i] > max)
            max = a[i];
    printf("%d", max - min);
}