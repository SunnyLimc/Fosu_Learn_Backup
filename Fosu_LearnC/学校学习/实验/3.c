#include <stdio.h>
int main()
{
    int a[20], b[20], i, j, c1 = 0, c2 = 20, tmp;
    for (i = 0; i < 20; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 20; i++)
    {
        if (a[i] < 0)
        {
            b[c1] = a[i];
            c1++;
        }
    }
    c2--;
    for (i = 0; i < 20; i++)
    {
        if (a[i] > 0)
        {
            b[c2] = a[i];
            c2--;
        }
    }
    for (i = 0; i < 20; i++)
        printf("%d ", b[i]);
}